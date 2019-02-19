#ifndef ABSTRACTTOOLBAR_H
#define ABSTRACTTOOLBAR_H

#include <QWidget>
#include "../include/imageprocessor.h"

class AbstractToolbar : public QWidget
{
    Q_OBJECT
public:
    explicit AbstractToolbar(QWidget *parent = 0);
    virtual ImageProcessor & getProcessor()=0;
    virtual void update()=0;
    virtual std::string getName() {return "no name set";}

signals:

public slots:

};

#endif // ABSTRACTTOOLBAR_H
