#include "histeqwidget.h"
#include "ui_histeqwidget.h"

HistEqWidget::HistEqWidget(AbstractToolbar *parent) :
    AbstractToolbar(parent),
    ui(new Ui::HistEqWidget)
{
    ui->setupUi(this);

    //generatePreview();
}

HistEqWidget::~HistEqWidget()
{
    delete ui;
}

void HistEqWidget::update(){
    for(int i=0; i<_histEqualizer.upper.size(); i++ ){
        ui->horizontalSlider->setValue(_histEqualizer.upper[i]);
        ui->horizontalSlider_2->setValue(_histEqualizer.lower[i]);
    }
    ui->chanSelect->clear();
    for(int i=0; i<_previewImg.getChannels().size(); i++ )
        ui->chanSelect->addItem( QString::fromStdString(_previewImg.getChannels()[i]));
    generatePreview();

}

void HistEqWidget::generatePreview(){

    try{
        _previewImg = _histEqualizer.inList().getImage();
        _histEqualizer.eqalize(_previewImg);
        ui->imagePreview->setImage(_previewImg);
        ui->histPreview->showHist=true;
        ui->histPreview->setImage(_previewImg);
    }
    catch ( std::out_of_range){

    }
}

void HistEqWidget::on_horizontalSlider_actionTriggered(int action)
{
    _histEqualizer.upper[_histEqualizer.chan] = -ui->horizontalSlider->value();
    generatePreview();
    return;
}

void HistEqWidget::on_horizontalSlider_2_actionTriggered(int action)
{
    _histEqualizer.lower[_histEqualizer.chan] = ui->horizontalSlider_2->value();
    generatePreview();
    return;
}

HistEqualizer & HistEqWidget::getProcessor(){
    return _histEqualizer;
}

void HistEqWidget::on_chanSelect_currentIndexChanged(int index)
{
    _histEqualizer.chan=index;
    int upper=_histEqualizer.upper[index];
    ui->horizontalSlider->setValue(-upper);
    ui->horizontalSlider_2->setValue(_histEqualizer.lower[index]);

    return;
}
