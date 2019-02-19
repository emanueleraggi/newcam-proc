#include "histequalizer.h"

HistEqualizer::HistEqualizer()
{
    //_widget = new HistEqWidget;
    //_widget->_histEqualizer=this;
    upper.resize(3);
    lower.resize(3);
    for(int i=0; i<upper.size(); i++ ){
        upper[i]=255;
        lower[i]=0;
    }
}

HistEqualizer::~HistEqualizer()
{
    //delete _widget;
}

void HistEqualizer::runOperations(){
    _runProgress=0;
    outList()=inList();
    for(size_t i=0; i < outList().size(); i++){
        eqalize(outList().getImage(i));
        _runProgress=i*100.0/outList().size();
    }
    _runProgress=100;
}

void HistEqualizer::eqalize(Image &img){
    std::vector<cv::Mat> channels;
    img.to8Bit();
    split(img.getBitmap(),channels);
    for(size_t j=0; j<channels.size(); j++){
        equalizeHist(channels[j], channels[j]);
        //cv::normalize(channels[j], channels[j], 0, value, CV_MINMAX);
    }
    for(size_t j=0; j<upper.size(); j++){
        cv::normalize(channels[j], channels[j],lower[j],upper[j],CV_MINMAX);
    }

    merge(channels,img.getBitmap());
    /*
    cvtColor(img.getBitmap(), img.getBitmap(), CV_BGR2HSV);

    cv::imshow("hsv hist before",img.generateHist());
    split(img.getBitmap(),channels);
    equalizeHist(channels[1], channels[1]); // normalze saturation;
    equalizeHist(channels[2], channels[2]); // nomalize value'
    merge(channels,img.getBitmap());
    cv::imshow("hsv hist",img.generateHist());
    cvtColor(img.getBitmap(), img.getBitmap(), CV_HSV2BGR);
    */
    return;
}
/*
QWidget * HistEqualizer::getWidget(){
    _widget->generatePreview();
    return _widget;

}
*/
