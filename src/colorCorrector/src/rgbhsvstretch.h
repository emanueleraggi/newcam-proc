#ifndef RGBHSVSTRETCH_H
#define RGBHSVSTRETCH_H

#include "include/colorcorrector.h"

//class HistEqWidget;

class RgbHsvStretch : public ColorCorrector
{
public:
    RgbHsvStretch();
    ~RgbHsvStretch();
    //QWidget * getWidget();

    void eqalize(Image & img);
    int chan;
    std::vector<int> upper;
    std::vector<int> lower;
protected:
    void runOperations();

};
#endif // RGBHSVSTRETCH_H
