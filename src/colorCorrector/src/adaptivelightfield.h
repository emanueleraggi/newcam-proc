#ifndef ABSTRACTLIGHTFIELD_H
#define ABSTRACTLIGHTFIELD_H
#include "include/colorcorrector.h"
#include "lightfieldcorrector.h"
#include "lightfield.h"

enum LFMethod{Static, Slide, FixedSlide};
class AdaptiveLightfield : public ColorCorrector
{
public:
    AdaptiveLightfield();
//    void setDirectory(boost::filesystem::path pa);
//    void forwardDirectory(std::shared_ptr<ImageList<Image> > inList){listSize=inList->size();_LFObject.setDirectory(inList);}
    void forwardDirectory(){_LFObject.setDirectory(_inList);}

    Image adaptiveBackgroundLFCorrector(int ind);   
    void staticBackgroundLFCorrector();
    void slidingBackgroundLFCorrector();
    void fixedSlideBackgroundLFCorrector();

    void setContrastA(float in){_contrastA=in;}
    void setBrightnessA(float in){_brightnessA=in;}
    void setContrastB(float in){_contrastB=in;}
    void setBrightnessB(float in){_brightnessB=in;}
    void setMethod(LFMethod in){_functionSelect=in;}

    void setMatType(int type){_matType=type;_LFObject.setMatType(type);}
    void setMatOutType(int type){_matOutType=type;}
    void setBlurSize(int sz){_blurKernSize=sz;_blurKern=cv::Size(_blurKernSize,_blurKernSize);_LFObject.setLFBlurSize(sz);}
    void setCutOffSD(double thresh){_LFObject.setCutOff(thresh);}
    void setWinMax(double sz){_LFObject.setWinSizeMax(sz);}

//    void autoMatTypes();
    void logRunParams(std::string fun);
    void logImRunParams(std::string fun);
    void logImStats(std::string out);

    virtual void save();
private:
    LFMethod _functionSelect;
    Lightfield _LFObject;

    int listSize;

    Image _lightfield;
    cv::Mat _zeroMeanLF;
    std::vector<cv::Mat> _lightChannels;

    float _contrastA;
    float _brightnessA;
    float _contrastB;
    float _brightnessB;
    int _matType;
    int _matOutType;
    int _blurKernSize;
    cv::Size _blurKern;

protected:
    void runOperations();
};
#endif // ABSTRACTLIGHTFIELD_H
