#include "ui/rgbhsvwidget.h"
#include "ui_rgbhsvwidget.h"

RgbHsvWidget::RgbHsvWidget(AbstractToolbar *parent) :
    AbstractToolbar(parent),
    ui(new Ui::RgbHsvWidget)
{
    ui->setupUi(this);
}

RgbHsvWidget::~RgbHsvWidget()
{
    delete ui;
}

void RgbHsvWidget::update(){
    for(int i=0; i<_corrector.upper.size(); i++ ){
        ui->horizontalSlider->setValue(_corrector.upper[i]);
        ui->horizontalSlider_2->setValue(_corrector.lower[i]);
    }
    ui->chanSelect->clear();
    for(int i=0; i<_previewImg.getChannels().size(); i++ )
        ui->chanSelect->addItem( QString::fromStdString(_previewImg.getChannels()[i]));
    generatePreview();

}

void RgbHsvWidget::generatePreview(){

    try{
        _previewImg = _corrector.inList().getImage();
        _corrector.eqalize(_previewImg);
        ui->imagePreview->setImage(_previewImg);
        ui->histPreview->showHist=true;
        ui->histPreview->setImage(_previewImg);
    }
    catch ( std::out_of_range){

    }
}

void RgbHsvWidget::on_horizontalSlider_actionTriggered(int action)
{
    _corrector.upper[_corrector.chan] = -ui->horizontalSlider->value();
    generatePreview();
    return;
}

void RgbHsvWidget::on_horizontalSlider_2_actionTriggered(int action)
{
    _corrector.lower[_corrector.chan] = ui->horizontalSlider_2->value();
    generatePreview();
    return;
}

RgbHsvStretch &RgbHsvWidget::getProcessor(){
    return _corrector;
}

void RgbHsvWidget::on_chanSelect_currentIndexChanged(int index)
{
    _corrector.chan=index;
    int upper=_corrector.upper[index];
    ui->horizontalSlider->setValue(-upper);
    ui->horizontalSlider_2->setValue(_corrector.lower[index]);

    return;
}
