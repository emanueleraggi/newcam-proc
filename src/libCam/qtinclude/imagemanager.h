#ifndef ImageManager_H
#define ImageManager_H

#include <QMainWindow>
#include <QMainWindow>
#include <qfiledialog.h>
#include "../include/imagelist.hpp"
#include "include/colorcorrector.h"
#include "include/imagingwindow.h"
#include <stdlib.h>
#include <thread>
#include <QInputDialog>
#include "qtinclude/abstracttoolbar.h"
#include "boost/thread.hpp"
#include "qthread.h"

namespace Ui {
class ImageManager;
}
class connectionMenu;
class ImageManager : public ImagingWindow
{
    Q_OBJECT

public:
    explicit ImageManager(QWidget *parent = 0);
    ~ImageManager();
    void resizeEvent(QResizeEvent* event);
    AbstractToolbar &getSelectedTool();
    void updateProgress();
    void runProcess();
    void disableProcessing();
    void finishProcessing();
    void addTool(AbstractToolbar * tool);

private slots:
    void on_loadBtn_clicked();
    void on_ImLiWi_imgChanged(Image * img);
    void loadAll();
    void on_runBtn_clicked();
    void on_saveBtn_clicked();
    void on_comboBox_currentIndexChanged(int index);

    void on_outputPath_btn_clicked();

    void on_upperBound_valueChanged(int arg1);

    void on_lowerBound_valueChanged(int arg1);

    void on_cropList_clicked();

    void on_savteToDB_clicked();

protected:
    QString _lastLoadedDir;
    boost::thread calcThread;
    boost::thread updateProg;
    boost::thread saveThread;

    void save();

    Ui::ImageManager *ui;
    ImageList<Image>::Ptr _imList;
    ImageList<Image>::Ptr _croppedList;
    size_t lowerCrop, upperCrop;
    std::shared_ptr<ImageList<Image> > _correctedList;
    //HistEqualizer _colorCorrector;
    //HistEqWidget _histEqWidget;
    std::vector<AbstractToolbar*> _widgets;
    int _selectedProcessor;

private:
    connectionMenu *mConnectionMenu;

};

#endif // ImageManager_H
