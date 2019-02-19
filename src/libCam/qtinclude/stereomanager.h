#ifndef STEREOMANAGER_H
#define STEREOMANAGER_H

#include <QMainWindow>
#include <qfiledialog.h>
#include "include/imagelist.hpp"
#include "include/colorcorrector.h"
#include "include/imagingwindow.h"
#include <stdlib.h>
#include <thread>
#include <QInputDialog>
#include "qtinclude/abstracttoolbar.h"
#include "boost/thread.hpp"
#include "qthread.h"
#include "stereolistwidget.h"
#include "stereotoolbar.h"

namespace Ui {
class StereoManager;
}

class StereoManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit StereoManager(QWidget *parent = 0);
    ~StereoManager();
    void addTool(StereoToolbar * tool);
    StereoToolbar * getToolbar(){return _toolbar;}

private slots:
    void on_loadButton_clicked();

    void on_loadButton_b_clicked();

    void on_InputList_imgChanged();

private:
    Ui::StereoManager *ui;

    std::shared_ptr<StereoList> _list,_outList;

    StereoToolbar * _toolbar;


};

#endif // STEREOMANAGER_H
