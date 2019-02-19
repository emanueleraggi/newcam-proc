#ifndef LIGHTFIELD_H
#define LIGHTFIELD_H
#include "include/colorcorrector.h"

class Lightfield
{
public:
    Lightfield();

    void setDirectory(std::shared_ptr<ImageList<Image> > inList){_inList=inList;_listWght = inList->size()/1.0f;}

    Image calculateSlidingWindowLF(int ind);
    Image calculateFixedSlidingWindowLF(int ind);
    Image calculateAdaptiveWindowLF(int ind);
    void calculateZeroMeanPfLF();

    void initializeLF();
    void calculateBrightStats();
    void assignImageDev();
    void fixWindowSize();
    void calculateMinErrWin(int ind);

    void addLFIms(/*int ind*/);
    void subtractLFIms(/*int ind*/);
    void scaleLF();

    std::vector<cv::Mat> getWinLFChannels();
    cv::Mat getWinLFChan(int ind);
    std::vector<cv::Mat> getImChannels(cv::Mat in);
    cv::Mat getImChan(cv::Mat in, int ind);

    void setWindowSize(int ind);
    void setWindowLimits(int ind);
    void setPrevWinParams();
    void setDeltaWinParams();
    void setWeights();
    void setWindowEdges(int ind);
    void setZeroMeanLF(Image zmlf){_zeroMeanLF=zmlf;}
    void setWindowLF(Image lf){_winLF=lf;}

    void setWinSizeMax(int sz){_winSizeMax=sz;std::cout << "Max WinSize set at: " << _winSizeMax<<std::endl;}
    void setMatType(int type){_matType=type;}
    void setLFBlurSize(int sz){_blurSize=sz;_blurKern=cv::Size(_blurSize,_blurSize);}
    void setCutOff(int cutoff){_cutoffSD=cutoff;}

    int getWinStart(){return _winStart;}
    int getWinEnd(){return _winEnd;}
    float getWinWeight(){return _winWght;}
    float getScaleWinWeights(){return _scaleWinWght;}
    int getDeltaWinStart(){return _deltWinStart;}
    int getDeltaWinEnd(){return _deltWinEnd;}
    float getSurvivedWeight(){return _survivedWght;}
    int getSurvivedSize(){return _survivedSize;}
    int getWinSizeMax(){return _winSizeMax;}
    Image getZeroMeanLF(){return _zeroMeanLF;}
    cv::Mat getZeroMeanLFMat(){return _zeroMeanLF.getBitmap();}
    Image getWinLF(){return _winLF;}

    double getMeanIntensity(){return _meanPfBright;}
    double getProfileSD(){return _stDev;}
    double getSDCutoff(){return _cutoffSD;}
    std::vector<cv::Scalar> getImMeans(){return _imChMeans;}
    std::vector<double> getImSDs(){return _imSDevs;}
    std::vector<int> getWinSizes(){return _winSizes;}


private:
    std::shared_ptr<ImageList<Image> > _inList;

    Image _zeroMeanLF;
    Image _winLF;

    int _winSizeMax;
    int _matType;
    int _blurSize;
    cv::Size _blurKern;

    int _windowSize;
    int _winStart;
    int _winEnd;

    float _winWght;
    float _prevWinWght;
    float _scaleWinWght;
    float _listWght;
    float _survivedWght;

    int _prevWinStart;
    int _prevWinEnd;
    int _prevWinSize;
    int _deltWinStart;
    int _deltWinEnd;
    int _totalSubtract;
    int _totalAdd;
    double _fractionLFRetained;

    float _winMaxConvFac;

    int _winStartMin;
    int _winStartMax;

    double _stDev;
    double _meanPfBright;
    int _survivedSize;
    double _cutoffSD;
    std::vector<double> _imSDevs;
    std::vector<cv::Scalar> _imChMeans;
    std::vector<double> _imTotIntensity;
    std::vector<int> _winSizes;    
};

#endif // LIGHTFIELD_H
