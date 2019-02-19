#ifndef STEREOLISTWIDGET_H
#define STEREOLISTWIDGET_H

#include <QWidget>
#include "../include/stereolist.h"

namespace Ui {
class StereoListWidget;
}

class StereoListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StereoListWidget(QWidget *parent = 0);
    ~StereoListWidget();

    void setList(std::shared_ptr<StereoList> list);

    void update();

signals:
    void imgChanged();

private slots:
    void on_a_list_imgChanged(Image * img);
    void on_b_list_imgChanged(Image * img);
    void sendSignals();

private:
    std::shared_ptr<StereoList> _list;
    Ui::StereoListWidget *ui;
};

#endif // STEREOLISTWIDGET_H
