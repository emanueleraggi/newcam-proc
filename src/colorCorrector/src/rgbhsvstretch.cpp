#include "rgbhsvstretch.h"

RgbHsvStretch::RgbHsvStretch()
{
    upper.resize(3);
    lower.resize(3);
    for(int i=0; i<upper.size(); i++ ){
        upper[i]=255;
        lower[i]=0;
    }
}

RgbHsvStretch::~RgbHsvStretch()
{
    //delete _widget;
}

void RgbHsvStretch::runOperations(){
    outList()=inList();
    for(size_t i=0; i < outList().size(); i++){
        eqalize(outList().getImage(i));
    }
}

void RgbHsvStretch::eqalize(Image &img){
    std::vector<cv::Mat> channels;
    split(img.getBitmap(),channels);
    for(size_t j=0; j<channels.size(); j++){
        equalizeHist(channels[j], channels[j]);
    }
    for(size_t j=0; j<upper.size(); j++){
        cv::normalize(channels[j], channels[j],lower[j],upper[j],CV_MINMAX);
    }

    merge(channels,img.getBitmap());

    cvtColor(img.getBitmap(), img.getBitmap(), CV_BGR2HSV);

    cv::imshow("hsv hist before",img.generateHist());
    split(img.getBitmap(),channels);
    equalizeHist(channels[1], channels[1]); // normalze saturation;
    equalizeHist(channels[2], channels[2]); // nomalize value'
    merge(channels,img.getBitmap());
    cv::imshow("hsv hist",img.generateHist());
    cvtColor(img.getBitmap(), img.getBitmap(), CV_HSV2BGR);

    return;
}
