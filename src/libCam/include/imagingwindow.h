#ifndef IMAGINGWINDOW_H
#define IMAGINGWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QGraphicsView>
#include <QImage>
#include <qlistwidget.h>
#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "imagelist.h"

class ImagingWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit ImagingWindow(QWidget *parent = 0);
protected:
    void showMatOnLbl(cv::Mat img, QLabel* lbl, bool constrain=true);
    void showMatOnGView(cv::Mat img, QGraphicsView* gView);
    template<typename T>
    void showImageListOnListWidget(ImageList<T> &list, QListWidget * listView);
    QImage Mat2QImage(cv::Mat const& src);
    QPixmap Mat2QPixmap(cv::Mat const& src);

signals:

public slots:

};


template<typename T>
void ImagingWindow::showImageListOnListWidget(ImageList<T> &list, QListWidget *listView){
    listView->clear();
    for(size_t i=0 ; i < list.size(); i++){
        listView->addItem(QString::fromStdString(list[i].getName()));
    }
}


#endif // IMAGINGWINDOW_H
