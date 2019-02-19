#include "stereolistwidget.h"
#include "ui_stereolistwidget.h"

StereoListWidget::StereoListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StereoListWidget)
{
    ui->setupUi(this);

    connect(ui->a_list, SIGNAL(itemSelectionChanged()),
                         this, SLOT(sendSignals())  );
}

StereoListWidget::~StereoListWidget()
{
    delete ui;
}


void StereoListWidget::setList(std::shared_ptr<StereoList> list){
    _list=list;
    ui->a_list->setList(_list->getPtrA().get());
    ui->b_list->setList(_list->getPtrB().get());
    update();
}

void StereoListWidget::update(){
    ui->a_list->update();
    ui->b_list->update();

}

void StereoListWidget::on_a_list_imgChanged(Image *img){
    _list->setIndex(ui->a_list->currentRow());
     ui->b_list->setCurrentRow(_list->getIndex());
     ui->a_list->setCurrentRow(_list->getIndex());
     if(_list->getIndex()<_list->getListB().size())
        ui->b_viewer->setImage(_list->getListB().getImage());
     ui->a_viewer->setImage(_list->getListA().getImage());
}

void StereoListWidget::on_b_list_imgChanged(Image *img){
    _list->setIndex(ui->b_list->currentRow());
     ui->a_list->setCurrentRow(_list->getIndex());
     ui->b_list->setCurrentRow(_list->getIndex());
}

void StereoListWidget::sendSignals(){
    if(_list->getIndex()<_list->getListA().size()&&_list->getIndex()<_list->getListB().size())
        emit imgChanged();
}
