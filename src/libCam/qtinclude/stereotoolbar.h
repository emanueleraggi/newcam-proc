#ifndef STEREOTOOLBAR_H
#define STEREOTOOLBAR_H

#include <QWidget>
#include "../include/stereoprocessor.h"

class StereoToolbar : public QWidget
{
    Q_OBJECT
public:
    explicit StereoToolbar(QWidget *parent = 0);
    virtual StereoProcessor & getProcessor()=0;
    virtual void update()=0;
    virtual std::string getName() {return "no name set";}

signals:

public slots:

};

#endif // STEREOTOOLBAR_H
