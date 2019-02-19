#ifndef HISTEQUALIZER_H
#define HISTEQUALIZER_H

#include "include/colorcorrector.h"

class HistEqWidget;

class HistEqualizer : public ColorCorrector
{
public:
    HistEqualizer();
    ~HistEqualizer();
    //QWidget * getWidget();

    void eqalize(Image & img);
    int chan;
    std::vector<int> upper;
    std::vector<int> lower;
protected:
    void runOperations();

    //HistEqWidget * _widget;
};

#endif // HISTEQUALIZER_H
