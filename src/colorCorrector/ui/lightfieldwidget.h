#ifndef LIGHTFIELDWIDGET_H
#define LIGHTFIELDWIDGET_H

#include <QWidget>
#include "qtinclude/abstracttoolbar.h"
#include "src/lightfieldcorrector.h"
#include "qtinclude/imagelabel.h"
#include "qthread.h"
#include "boost/thread.hpp"

namespace Ui {
class LightfieldWidget;
}

class LightfieldWidget : public AbstractToolbar
{
    Q_OBJECT

public:
    explicit LightfieldWidget(AbstractToolbar *parent = 0);
    ~LightfieldWidget();

    void update();
    LightfieldCorrector & getProcessor() {return _processor;}
    std::string getName() {return"Lightfield";}
    void onProgressUpdate(int progress);
    void updateProgress();
    void calcLight();
    void progressCallback(int p);

private slots:
    void on_lfBtn_clicked();

    void on_horizontalSlider_actionTriggered(int action);

    void on_intensitySlider_actionTriggered(int action);

    void on_constrastSlider_actionTriggered(int action);

//    void on_intensitySlider_sliderReleased();

//    void on_constrastSlider_sliderReleased();

    void on_horizontalSlider_sliderReleased();

    void on_brightnessEdit_valueChanged(double arg1);

    void on_contrastEdit_valueChanged(double arg1);

private:
    boost::thread calcThread;
    boost::thread updateProg;
    Ui::LightfieldWidget *ui;
    LightfieldCorrector _processor;
};

#endif // LIGHTFIELDWIDGET_H
