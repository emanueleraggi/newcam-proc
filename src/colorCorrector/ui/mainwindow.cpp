#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    ImagingWindow(parent),
    ui(new Ui::MainWindow)
{


    /*
     * setup pointers
     */

    _imList.reset(new ImageList<Image>);
    _correctedList.reset(new ImageList<Image>);

    /*
     * set up the UI and widgets
     */

    ui->setupUi(this);
    QObject::connect(ui->imListWid, SIGNAL(imgChanged(Image*)),
                         this, SLOT(on_ImLiWi_imgChanged(Image*)));

    _widgets.push_back(new HistEqWidget);
    _widgets.push_back(new RgbHsvWidget);
    _widgets.push_back(new LightfieldWidget);


    for(int i=0;i<_widgets.size();i++){
        ui->comboBox->addItem( QString::fromStdString(_widgets[i]->getName()));
    }

    /*
     * initialize variables
     */

    _selectedProcessor=0;

}

MainWindow::~MainWindow()
{
    if(calcThread.joinable()) calcThread.join();
    if(updateProg.joinable()) updateProg.join();
    delete ui;
}

void MainWindow::on_loadBtn_clicked()
{
    QStringList fileNames;
    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setNameFilter(trUtf8("All Files (*.*)"));
    if (dialog.exec())
        fileNames = dialog.selectedFiles();
    foreach( QString str, fileNames) {
        _imList->addImageFromFile(str.toStdString());
    }
    for(unsigned int i=0;i<_imList->size();i++){
        std::string name="image"+ std::to_string(i);
        //_imList.operator []().setName(name);
        _imList->getImage(i).setName(name);
    }

    try{
        showMatOnLbl(_imList->getImage(0).getBitmap(),ui->imgViewer);
    }
    catch ( std::out_of_range){
        std::cout << "whoops!" <<std::endl;
    }
    for(int i=0;i<_widgets.size();i++){
        _widgets[i]->getProcessor().setList(_imList,_correctedList);
    }
    //_histEqWidget.getProcessor().setList(_imList,_correctedList);
    ui->imListWid->setList(*_imList);
    ui->imListWid->update();

    ui->dockWidget->setWidget(&getSelectedTool());

    //_imList->getImage(0).unload();


    std::thread(&MainWindow::loadAll,this).detach();
    return;
}

void MainWindow::on_ImLiWi_imgChanged(Image * img){
    //showMatOnLbl(img->getBitmap(),ui->imgViewer);
    ui->imgViewer->setImage(img);
    cv::imshow("test",img->generateHist());
    _correctedList->getIndex()=_imList->getIndex();
    getSelectedTool().update();
    try{
        //showMatOnLbl(_correctedList->getImage(_imList->getIndex()).getBitmap(),ui->imgViewer_corrected);
        ui->imgViewer_corrected->setImage(_correctedList->getImage());
        //_colorCorrector.drawHistogram(_imList->getIndex());
    }
    catch ( std::out_of_range){

    }
}

void MainWindow::on_nextButton_clicked()
{
    _imList->nextImage();
    ui->imListWid->update();
}

void MainWindow::loadAll(){
    _imList->loadAll();
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
   QMainWindow::resizeEvent(event);

   try{
       showMatOnLbl(_imList->getImage(_imList->getIndex()).getBitmap(),ui->imgViewer);
       showMatOnLbl(_correctedList->getImage(_imList->getIndex()).getBitmap(),ui->imgViewer_corrected);
   }
   catch ( std::out_of_range){
       std::cout << "Resize Error! (OUT OF RANGE)" <<std::endl;
   }

}

void MainWindow::on_runBtn_clicked()
{
    if(_imList->size()>0){
        calcThread=boost::thread(&MainWindow::runProcess,this);
        updateProg=boost::thread(&MainWindow::updateProgress,this);
    }
}

void MainWindow::on_saveBtn_clicked()
{
    if(_correctedList->size()>0){
        saveThread=boost::thread(&MainWindow::save,this);
    }
}

void MainWindow::save(){
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                "/home",
                                                QFileDialog::ShowDirsOnly
                                                | QFileDialog::DontResolveSymlinks);
    disableProcessing();
    ui->saveBtn->setText("Saving...");
    _correctedList->save(dir.toStdString());
    ui->saveBtn->setText("Save...");
    finishProcessing();
}

void MainWindow::on_prevButton_clicked()
{
    _imList->prevImage();
    ui->imListWid->update();
}

AbstractToolbar &MainWindow::getSelectedTool(){
    return *_widgets[_selectedProcessor] ;
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    _selectedProcessor=index;
    ui->dockWidget->setWidget(&getSelectedTool());
    getSelectedTool().update();
}


void MainWindow::updateProgress(){
    while(getSelectedTool().getProcessor().getRunProgress()<100){
        ui->runProgress->setValue(getSelectedTool().getProcessor().getRunProgress());
        QThread::msleep(100);
    }
    ui->runProgress->setValue(100);
    return;
}

void MainWindow::runProcess(){
    if(_imList->size()>0){
        disableProcessing();
        ui->runBtn->setText("Running..");
        getSelectedTool().getProcessor().run();
        ui->imgViewer_corrected->setImage(_correctedList->getImage());
        ui->runBtn->setText("Run Correction");
        finishProcessing();
    }
}

void MainWindow::disableProcessing(){
    ui->loadBtn->setEnabled(false);
    ui->saveBtn->setEnabled(false);
    ui->runBtn->setEnabled(false);
    //ui->runBtn->setText("Running..");
}

void MainWindow::finishProcessing(){
    ui->loadBtn->setEnabled(true);
    ui->saveBtn->setEnabled(true);
    ui->runBtn->setEnabled(true);
    //ui->runBtn->setText("Run Correction");
}
