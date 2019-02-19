#ifndef IMAGELABEL_H
#define IMAGELABEL_H

#include <QLabel>
#include "../include/image.h"

class ImageLabel : public QLabel
{
    Q_OBJECT
public:
    explicit ImageLabel(QWidget *parent = 0);
    void setImage( Image & image);
    void setImage( Image * image);
    void update();
    void resizeEvent(QResizeEvent* event);
    void setConsrain(bool con){_constrain=con;}
    bool showHist;

signals:

public slots:

private:
    void showMatOnLbl(cv::Mat img,bool constrain);
    void showImgOnLbl(Image img,bool constrain);
    QPixmap Mat2QPixmap(const cv::Mat &src);
    QImage Mat2QImage(cv::Mat const& src);
    QPixmap img2QPixmap(Image & src);


    Image * _img;
    bool _constrain;

};

#endif // IMAGELABEL_H
