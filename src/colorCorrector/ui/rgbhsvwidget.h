#ifndef RGBHSVWIDGET_H
#define RGBHSVWIDGET_H

#include <QWidget>
#include "src/rgbhsvstretch.h"
#include "qtinclude/abstracttoolbar.h"

namespace Ui {
    class RgbHsvWidget;
}

class RgbHsvWidget : public AbstractToolbar
{
    Q_OBJECT

public:
    explicit RgbHsvWidget(AbstractToolbar *parent = 0);
    ~RgbHsvWidget();
    RgbHsvStretch &getProcessor();
    void update();
    void generatePreview();
    std::string getName() {return"Hist Streatcher";}

private slots:
    void on_horizontalSlider_actionTriggered(int action);

    void on_horizontalSlider_2_actionTriggered(int action);

    void on_chanSelect_currentIndexChanged(int index);


private:
    Ui::RgbHsvWidget *ui;
    Image _previewImg;
    RgbHsvStretch _corrector;
};

#endif // RGBHSVWIDGET_H
