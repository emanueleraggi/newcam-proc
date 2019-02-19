#ifndef ADAPTIVELIGHTFIELDWIDGET_H
#define ADAPTIVELIGHTFIELDWIDGET_H

#include <QWidget>
#include "qtinclude/abstracttoolbar.h"
#include "src/adaptivelightfield.h"


namespace Ui {
class AdaptiveLightfieldWidget;
}

class AdaptiveLightfieldWidget : public AbstractToolbar
{
  Q_OBJECT

public:
  explicit AdaptiveLightfieldWidget(AbstractToolbar *parent = 0);
  ~AdaptiveLightfieldWidget();
  ///
  /// we need to override the AbstractToolbar stuff
  ///
  void update();
  AdaptiveLightfield & getProcessor() {return _processor;}
  std::string getName() {return"Adaptive Lightfield";}

private slots:
  void on_methodSelect_currentIndexChanged(int index);

private:
  Ui::AdaptiveLightfieldWidget *ui;
  AdaptiveLightfield _processor;

};

#endif // ADAPTIVELIGHTFIELDWIDGET_H
