#include "adaptivelightfieldwidget.h"
#include "ui_adaptivelightfieldwidget.h"

AdaptiveLightfieldWidget::AdaptiveLightfieldWidget(AbstractToolbar *parent) :
  AbstractToolbar(parent),
  ui(new Ui::AdaptiveLightfieldWidget)
{
  ui->setupUi(this);
  _processor.setMethod(static_cast<LFMethod>(ui->methodSelect->currentIndex()));
}

AdaptiveLightfieldWidget::~AdaptiveLightfieldWidget()
{
  delete ui;
}

void AdaptiveLightfieldWidget::update(){
  return;
}

void AdaptiveLightfieldWidget::on_methodSelect_currentIndexChanged(int index)
{
    _processor.setMethod(static_cast<LFMethod>(index));
}
