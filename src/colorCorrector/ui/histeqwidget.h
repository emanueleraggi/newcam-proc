#ifndef HISTEQWIDGET_H
#define HISTEQWIDGET_H

#include <QWidget>
#include "src/histequalizer.h"
#include "qtinclude/abstracttoolbar.h"

namespace Ui {
class HistEqWidget;
}

class HistEqWidget : public AbstractToolbar
{
    Q_OBJECT

public:
    explicit HistEqWidget(AbstractToolbar *parent = 0);
    ~HistEqWidget();
    HistEqualizer & getProcessor();
    void update();
    void generatePreview();
    std::string getName() {return"Hist Equalization";}

private slots:
    void on_horizontalSlider_actionTriggered(int action);

    void on_horizontalSlider_2_actionTriggered(int action);

    void on_chanSelect_currentIndexChanged(int index);

private:
    Ui::HistEqWidget *ui;
    Image _previewImg;
    HistEqualizer _histEqualizer;

};

#endif // HISTEQWIDGET_H
