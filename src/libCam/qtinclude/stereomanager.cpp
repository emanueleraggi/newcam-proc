#include "stereomanager.h"
#include "ui_stereomanager.h"

StereoManager::StereoManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StereoManager)
{
    ui->setupUi(this);
    _list.reset(new StereoList);
    _outList.reset(new StereoList);
    _list->resetLists();  // create blank lists in the stereo list
    _outList->resetLists();
    ui->InputList->setList(_list);

    //ui->dockWidget->setWidget(&getToolbar());


}

StereoManager::~StereoManager()
{
    delete ui;
}

void StereoManager::on_loadButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Choose an image directory"),
                                                 "/home",
                                                 QFileDialog::ShowDirsOnly
                                                 | QFileDialog::DontResolveSymlinks);

    boost::filesystem::path p(dir.toStdString());
    _list->getPtrA()->addImagesFromDir(p);
    ui->InputList->update();

}

void StereoManager::on_loadButton_b_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Choose an image directory"),
                                                     "/home",
                                                     QFileDialog::ShowDirsOnly
                                                     | QFileDialog::DontResolveSymlinks);

    boost::filesystem::path p(dir.toStdString());
    _list->getPtrB()->addImagesFromDir(p);
    ui->InputList->update();
}

void StereoManager::on_InputList_imgChanged(){
    getToolbar()->update();
}

void StereoManager::addTool(StereoToolbar *tool){
    _toolbar=tool;
    _toolbar->getProcessor().setStereoList(*_list,*_outList);
    ui->dockWidget->setWidget(_toolbar);
}
