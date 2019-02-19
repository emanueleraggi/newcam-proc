#ifndef LIGHTFIELDCORRECTOR_H
#define LIGHTFIELDCORRECTOR_H

#include "include/colorcorrector.h"
#include "boost/function.hpp"
#include <thread>

class LightfieldCorrector : public ColorCorrector
{
public:
    typedef void (* vFunctionCall)(int args);
    LightfieldCorrector();
    Image calculateLightfield();
    Image & getLightfield(){return _lightfield;}
    Image & getBlurLight(int kernelSize);
    Image & getBlurLight();
    Image & generatePreview();
    void correctImage(Image & in);
    float & getApplicationIntensity(){return _applicationIntensity;}
    float & getContrastIntensity(){return _contrast;}
    void setContrast(float contrast){_contrast=contrast;}
    void setBrightness(float brightness){_applicationIntensity=brightness;}
    int getLightProgress() {return _progress;}
    void updateProgress();

    void resetOverflowWarning(){_histOverflow=false;}
    bool didHistOverflow(){return _histOverflow;}

    void setLightProgressCallback( void (*f)(int) );
    //template<class T>
    //void setProgressCallback( boost::function<void (T,int)>& callback );
    float _perChanAdjust;
    void save();

protected:
    void runOperations();
    void calculateLightfieldList(std::shared_ptr<ImageList<Image> > list,unsigned int i);
    Image calculateLightfield(ImageList<Image> &list);
    void runThread(std::shared_ptr<ImageList<Image> > list);
private:

    Image _lightfield;
    Image _lightBlur;
    cv::Size _kernelSize;
    Image _previewImg;
    bool _previewReady;
    float _applicationIntensity;
    float _contrast;
    float _minimum;
    float _maximum;
    bool _histOverflow;
    unsigned int threads;

    ImageList<Image> _lfList;
    //vFunctionCall _lightProgressCB;
    std::atomic<int> _progress;
    std::mutex mtx;
    void (*_lightProgF)(int);


};

#endif // LIGHTFIELDCORRECTOR_H
/*
template<class T>
void LightfieldCorrector::setProgressCallback( boost::function<void (T,int)>& callback ){
    //_progressFun=progressCallback;
}
*/
