#include "imagemanager.h"
#include "ui_imagemanager.h"
#include "connectionmenu.h"
#include "ui_connectionmenu.h"

ImageManager::ImageManager(QWidget *parent) :
    ImagingWindow(parent),
    ui(new Ui::ImageManager)
{
    /*
     * setup pointers
     */

    _imList.reset(new ImageList<Image>);
    _imList->setReadOnly(true);
    _correctedList.reset(new ImageList<Image>);


    ui->setupUi(this);
    QObject::connect(ui->imListWid, SIGNAL(imgChanged(Image*)),
                         this, SLOT(on_ImLiWi_imgChanged(Image*)));

    _selectedProcessor=0;

    ui->loadBtn->setEnabled(false);
    ui->saveBtn->setEnabled(false);
    ui->runBtn->setEnabled(false);

    _lastLoadedDir="/home";

}

ImageManager::~ImageManager()
{
    if(calcThread.joinable()) calcThread.join();
    if(updateProg.joinable()) updateProg.join();
    delete ui;
}

void ImageManager::addTool(AbstractToolbar *tool){
    tool->getProcessor().setList(_imList,_correctedList);
    _widgets.push_back(tool);
    ui->comboBox->addItem( QString::fromStdString(tool->getName()));
}

void ImageManager::on_loadBtn_clicked()
{

  QString dir = QFileDialog::getExistingDirectory(this, tr("Choose and image directory to load"),
                                               _lastLoadedDir,
                                               QFileDialog::ShowDirsOnly
                                               | QFileDialog::DontResolveSymlinks);

  if(dir!=QString("")){
    _lastLoadedDir=dir;
    boost::filesystem::path p(dir.toStdString());
    _imList->addImagesFromDir(p);

    try{
        //showMatOnLbl(_imList->getImage(0).getBitmap(),ui->imgViewer);
        ui->imgViewer->setImage(_imList->getImage(0));

    }
    catch ( std::out_of_range){
        std::cout << "whoops! out of range detected in imagemanager.cpp" <<std::endl;
    }

    ui->imListWid->setList(*_imList);
    ui->imListWid->update();

    ui->dockWidget->setWidget(&getSelectedTool());

    //_imList->getImage(0).unload();


    //std::thread(&ImageManager::loadAll,this).detach();

    ui->saveBtn->setEnabled(false);
    ui->runBtn->setEnabled(true);
    ui->upperBound->setMaximum(_imList->size()-1);
    ui->upperBound->setValue(_imList->size()-1);

  }
    return;
}

void ImageManager::on_ImLiWi_imgChanged(Image * img){
    ui->imgViewer->setImage(img);
    _correctedList->getIndex()=_imList->getIndex();
    if(_croppedList){
        _croppedList->getIndex()=_imList->getIndex()-lowerCrop;
        if(_croppedList->getIndex()>=_croppedList->size()){
            _croppedList->getIndex()=_croppedList->size()-1;
        }
    }
    getSelectedTool().update();
    try{
        //ui->imgViewer_corrected->setImage(_correctedList->getImage());
    }
    catch ( std::out_of_range){

    }
}

void ImageManager::loadAll(){
    _imList->loadAll();
}

void ImageManager::resizeEvent(QResizeEvent* event)
{
   QMainWindow::resizeEvent(event);

   try{
       if(_imList->size()>0)
            showMatOnLbl(_imList->getImage(_imList->getIndex()).getBitmap(),ui->imgViewer);
       //if(_correctedList->size()>0)
            //showMatOnLbl(_correctedList->getImage(_imList->getIndex()).getBitmap(),ui->imgViewer_corrected);
   }
   catch ( std::out_of_range){
       std::cout << "Resize Error! (OUT OF RANGE)" <<std::endl;
   }

}

void ImageManager::on_runBtn_clicked()
{
    if(_imList->size()>0){
        calcThread=boost::thread(&ImageManager::runProcess,this);
        updateProg=boost::thread(&ImageManager::updateProgress,this);
    }
    getSelectedTool().update();
    ui->saveBtn->setEnabled(true);
}

void ImageManager::on_saveBtn_clicked()
{
    //if(_correctedList->size()>0){
    saveThread=boost::thread(&ImageManager::save,this);
    //}
}

void ImageManager::save(){
    disableProcessing();
    ui->saveBtn->setText("Saving...");
    //_correctedList->saveBuffer();
    getSelectedTool().getProcessor().save();
    ui->saveBtn->setText("Save");
    finishProcessing();
}


AbstractToolbar &ImageManager::getSelectedTool(){
    return *_widgets[_selectedProcessor] ;
}

void ImageManager::on_comboBox_currentIndexChanged(int index)
{
    _selectedProcessor=index;
    ui->dockWidget->setWidget(&getSelectedTool());
    getSelectedTool().update();
}


void ImageManager::updateProgress(){
    while(getSelectedTool().getProcessor().getRunProgress()<100){
        ui->runProgress->setValue(getSelectedTool().getProcessor().getRunProgress());
        QThread::msleep(100);
    }
    ui->runProgress->setValue(100);
    return;
}

void ImageManager::runProcess(){
    if(_imList->size()>0){
        disableProcessing();
        ui->runBtn->setText("Running..");
        getSelectedTool().getProcessor().run();
        //ui->imgViewer_corrected->setImage(_correctedList->getImage());
        ui->runBtn->setText("Run Correction");
        finishProcessing();
    }
}

void ImageManager::disableProcessing(){
    ui->outputPath_btn->setEnabled(false);
    ui->loadBtn->setEnabled(false);
    ui->saveBtn->setEnabled(false);
    ui->runBtn->setEnabled(false);
    //ui->runBtn->setText("Running..");
}

void ImageManager::finishProcessing(){
    ui->loadBtn->setEnabled(true);
    ui->saveBtn->setEnabled(true);
    ui->runBtn->setEnabled(true);
    ui->outputPath_btn->setEnabled(true);
    //ui->runBtn->setText("Run Correction");
}

void ImageManager::on_outputPath_btn_clicked()
{
  QString dir = QFileDialog::getExistingDirectory(this, tr("Choose and image directory to load"),
                                               _lastLoadedDir,
                                               QFileDialog::ShowDirsOnly
                                               | QFileDialog::DontResolveSymlinks);
  if(dir!=QString("")){
    _lastLoadedDir=dir;
    boost::filesystem::path p(dir.toStdString());
    getSelectedTool().getProcessor().setOutputDir(p);
    ui->loadBtn->setEnabled(true);
    ui->saveBtn->setEnabled(false);
    ui->runBtn->setEnabled(false);
  }
}

void ImageManager::on_upperBound_valueChanged(int arg1)
{
    ui->imListWid->setCurrentRow(arg1);
}

void ImageManager::on_lowerBound_valueChanged(int arg1)
{
    ui->imListWid->setCurrentRow(arg1);
}

void ImageManager::on_cropList_clicked()
{
    lowerCrop=ui->lowerBound->value();
    upperCrop=ui->upperBound->value();
    _croppedList.reset(new ImageList<Image>);
    _croppedList=_imList->getSubList(lowerCrop,upperCrop);
    getSelectedTool().getProcessor().setList(_croppedList,_correctedList);
    getSelectedTool().update();

    for(size_t i=0; i<_imList->size() ; i++){
        if(i<lowerCrop||i>upperCrop)
            ui->imListWid->item(i)->setBackground(Qt::red);
        else
            ui->imListWid->item(i)->setBackground(Qt::blue);
    }
}

void ImageManager::on_savteToDB_clicked()
{
    //getSelectedTool().getProcessor().outlist().getImage(i).writeDB("table");
    mConnectionMenu = new connectionMenu(this);
    mConnectionMenu->setOutputImages(_correctedList);
    mConnectionMenu->show();
}
