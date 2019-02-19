#ifndef IMAGELISTWIDGET_H
#define IMAGELISTWIDGET_H

#include <QListWidget>
#include "../include/imagelist.hpp"
#include "imagelistwidget.h"

class ImageListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit ImageListWidget(QWidget *parent = 0);
    void setList(ImageList<Image> & list);
    void setList(ImageList<Image> * list);
    void update();

signals:
    void imgChanged(Image * img);

public slots:
    void sendImgSig();

private:
    ImageList<Image> * _imList;


};

#endif // IMAGELISTWIDGET_H
