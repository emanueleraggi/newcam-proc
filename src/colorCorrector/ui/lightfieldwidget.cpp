#include "lightfieldwidget.h"
#include "ui_lightfieldwidget.h"

LightfieldWidget::LightfieldWidget(AbstractToolbar *parent) :
    AbstractToolbar(parent),
    ui(new Ui::LightfieldWidget)
{
    ui->setupUi(this);

    // _processor.setLightProgressCallback(LightfieldWidget::progressCallback);
    //boost::function<void (LightfieldWidget,int)> f = &LightfieldWidget::onProgressUpdate;
    //_processor.setProgressCallback(f);
    updateProg=boost::thread (&LightfieldWidget::updateProgress,this);
}

LightfieldWidget::~LightfieldWidget()
{
    if(calcThread.joinable()) calcThread.join();
    if(updateProg.joinable()) updateProg.join();
    delete ui;
}

void LightfieldWidget::update(){
    if(_processor.inList().size()>0){
        ui->PreviewLabel->setImage(_processor.generatePreview());
        if(_processor.didHistOverflow()){
            ui->histOverflow_lbl->setText("Image(s) have histagram overflow!");
        }
        else{
            ui->histOverflow_lbl->setText("Image values in range");
        }
    }
    return;
}

void LightfieldWidget::on_lfBtn_clicked(){
    calcThread=boost::thread (&LightfieldWidget::calcLight,this);

}

void LightfieldWidget::on_horizontalSlider_actionTriggered(int action)
{
    return;
}

void LightfieldWidget::on_intensitySlider_actionTriggered(int action)
{
    return;
}

void LightfieldWidget::on_constrastSlider_actionTriggered(int action)
{
    return;
}

void LightfieldWidget::onProgressUpdate(int progress){
    //ui->lightProgress->value(progress);
}

void LightfieldWidget::updateProgress(){
    while(true){
        ui->lightProgress->setValue(_processor.getLightProgress());
        QThread::msleep(1000);
    }
    ui->lightProgress->setValue(100);
    return;
}

void LightfieldWidget::calcLight(){
    _processor.calculateLightfield();
    ui->blurLabel->setImage(_processor.getBlurLight(ui->horizontalSlider->value()));
    update();
}

void LightfieldWidget::progressCallback(int p){
    ui->lightProgress->setValue(p);
}

//void LightfieldWidget::on_intensitySlider_sliderReleased()
//{
//    _processor.getApplicationIntensity() = ui->intensitySlider->value()*500;
//    update();

//}

//void LightfieldWidget::on_constrastSlider_sliderReleased()
//{
//    _processor.getContrastIntensity() = ui->constrastSlider->value()*2/100.0;
//    update();
//}

void LightfieldWidget::on_horizontalSlider_sliderReleased()
{
    ui->blurLabel->setImage(_processor.getBlurLight(ui->horizontalSlider->value()));
    update();
}

void LightfieldWidget::on_brightnessEdit_valueChanged(double arg1)
{
    _processor.getApplicationIntensity()=arg1;
    update();
    return;
}

void LightfieldWidget::on_contrastEdit_valueChanged(double arg1)
{
    _processor.getContrastIntensity()=arg1;
    update();
    return;
}
