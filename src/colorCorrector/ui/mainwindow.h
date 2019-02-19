#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <qfiledialog.h>
#include "include/imagelist.hpp"
#include "include/colorcorrector.h"
#include "src/histequalizer.h"
#include "include/imagingwindow.h"
#include "histeqwidget.h"
#include <stdlib.h>
#include <thread>
#include <QInputDialog>
#include <src/rgbhsvstretch.h>
#include "rgbhsvwidget.h"
#include "qtinclude/abstracttoolbar.h"
#include "lightfieldwidget.h"
#include "boost/thread.hpp"
#include "qthread.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public ImagingWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void resizeEvent(QResizeEvent* event);
    AbstractToolbar &getSelectedTool();
    void updateProgress();
    void runProcess();
    void disableProcessing();
    void finishProcessing();

private slots:
    void on_loadBtn_clicked();
    void on_ImLiWi_imgChanged(Image * img);

    void on_nextButton_clicked();
    void loadAll();
    void on_runBtn_clicked();
    void on_saveBtn_clicked();
    void on_prevButton_clicked();
    void on_comboBox_currentIndexChanged(int index);

protected:
    boost::thread calcThread;
    boost::thread updateProg;
    boost::thread saveThread;

    void save();

    Ui::MainWindow *ui;
    ImageList<Image>::Ptr _imList;
    ImageList<Image>::Ptr _correctedList;
    HistEqualizer _colorCorrector;
    HistEqWidget _histEqWidget;
    std::vector<AbstractToolbar*> _widgets;
    int _selectedProcessor;

};

#endif // MAINWINDOW_H
