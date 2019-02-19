#include "imagingwindow.h"

ImagingWindow::ImagingWindow(QWidget *parent) :
    QMainWindow(parent)
{
}
/*
 * This function will show a cv::Mat on a QLabel.  The Mat will
 * automatically be resized to fit on the QLabel.
 */

void ImagingWindow::showMatOnLbl(cv::Mat img, QLabel* lbl, bool constrain){
    cv::Mat dispImage;
    cv::Size size;
    if(constrain){
        if(img.rows*lbl->width()/img.cols < lbl->height()){
            size.width=lbl->width();
            size.height=img.rows*lbl->width()/img.cols;
        }
        else{
            size.width=img.cols*lbl->height()/img.rows;
            size.height=lbl->height();
        }
    }
    else{
        size.width=lbl->width();
        size.height=lbl->height();
    }
    cv::resize(img, dispImage,size);
    lbl->setPixmap(Mat2QPixmap(dispImage));
}

void ImagingWindow::showMatOnGView(cv::Mat img, QGraphicsView *gView){
    QGraphicsScene * scene =  new QGraphicsScene;
    scene->addPixmap(Mat2QPixmap(img));
    gView->setScene(scene);
    gView->show();
}



QImage ImagingWindow::Mat2QImage(cv::Mat const& src){
     cv::Mat temp;
     std::cout<<src.depth()<<std::endl;
     cvtColor(src, temp,CV_BGR2RGB); // cvtColor Makes a copt, that what i need
     QImage dest((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
     dest.bits(); // enforce deep copy, see documentation
     return dest;
}

QPixmap ImagingWindow::Mat2QPixmap(const cv::Mat &src){
    return QPixmap::fromImage(Mat2QImage(src));
}


