#include "lightfield.h"

Lightfield::Lightfield(){
    _winStart=0;
    _winEnd=0;
    _windowSize=0;
    _winWght=1.0f;
    _survivedSize=0;
    _blurSize=21;
    _blurKern=cv::Size(_blurSize,_blurSize);
    _winMaxConvFac=90.0;
    _winSizeMax = 2;
    _matType =22/*5 *//*21*/;
    _cutoffSD =/*1.0*/0.8;
}

//LF Calculation Handlers
Image Lightfield::calculateSlidingWindowLF(int ind){
    std::cout << " "<< std::endl;
    std::cout << ind<<":::"<< std::endl;
    if(ind==0){
        calculateBrightStats();
        assignImageDev();
        setWindowSize(ind);
        setWeights();
        setWindowLimits(ind);
        setPrevWinParams();
        initializeLF();
    }else{
        setPrevWinParams();
        setWindowSize(ind);
        setWindowLimits(ind);
        setDeltaWinParams();
        setWeights();
        if(_deltWinStart >0 || _deltWinEnd <0){
            subtractLFIms();
        }if(_scaleWinWght!=1){
            scaleLF();
        }if(_deltWinStart <0 || _deltWinEnd >0){
            addLFIms();
        }
    }
    return(_winLF);
}

Image Lightfield::calculateFixedSlidingWindowLF(int ind){
    std::cout << " "<< std::endl;
    std::cout << ind<<":::"<< std::endl;
    if(ind==0){
        fixWindowSize();
        setWeights();
        setWindowLimits(ind);
        setPrevWinParams();
        initializeLF();
    }else{
        setPrevWinParams();
        setWindowLimits(ind);
        setWeights();
        setDeltaWinParams();
        subtractLFIms();
        addLFIms();
    }
    return(_winLF);
}

Image Lightfield::calculateAdaptiveWindowLF(int ind){
    std::cout << " "<< std::endl;
    std::cout << ind<<":::"<< std::endl;
    if(ind==0){
        calculateBrightStats();
        assignImageDev();
        setWindowSize(ind);
        calculateMinErrWin(ind);
        setPrevWinParams();
        initializeLF();
    }else{
        setPrevWinParams();
        setWindowSize(ind);
        calculateMinErrWin(ind);
        setDeltaWinParams();
        setWeights();
        if(_deltWinStart >0 || _deltWinEnd <0){
            subtractLFIms();
        }if(_scaleWinWght!=1){
            scaleLF();
        }if(_deltWinStart <0 || _deltWinEnd >0){
            addLFIms();        }
    }
    return(_winLF);
}

void Lightfield::calculateZeroMeanPfLF(){
    cv::Mat tmpZMLF;
    tmpZMLF =cv::Mat::zeros(_inList->getImage(0).getBitmap().size(), _matType);

    for(int i=0; i<_inList->size(); i++){
//        int SD =_imSDevs[i];
//        if(SD==0){
        if(_imSDevs[i]< _cutoffSD){
            std::cout <<"Building ZeroMeanLF from img: " << i<<" || "<<_inList->getImage(i).getName() << std::endl;
            cv::Mat tempIm=_inList->getImage(i).getBitmap().clone();
            cv::Mat imgBrCr,cIm;
            tempIm.convertTo(imgBrCr, _matType);
            cv::GaussianBlur(imgBrCr,imgBrCr,_blurKern,0,0);

            std::vector<cv::Mat> tempChans;
            cv::split(imgBrCr, tempChans);
            for(int j=0; j<tempChans.size(); j++){
                cv::Mat tempOut=tempChans[j];
                tempOut= tempOut-_imChMeans[i][j];
                tempChans[j] = tempOut;
            }
            cv::merge(tempChans, cIm);
            tmpZMLF=tmpZMLF+cIm*_survivedWght;
            std::cout<<"   Current zmlf mean: "<<cv::mean(tmpZMLF) <<std::endl;
        }
    }
//    cv::GaussianBlur(tmpZMLF,_zeroMeanLF.getBitmap(),_blurKern,0,0);
    _zeroMeanLF.getBitmap()=tmpZMLF;
    std::cout << "Generated ZeroMeanLF" << std::endl;
}

//Window and Weight Functions
void Lightfield::setWindowSize(int ind){
    int imSDs, sz;
    imSDs=_imSDevs[ind];
    std::cout <<"SD Double: " << _imSDevs[ind] <<" - SD Int: " <<imSDs <<std::endl;

    sz=(_winSizeMax/(10*imSDs+1))+4;
    if(sz % 2 != 0){
        sz=sz+1;
    }
    _windowSize=sz;
    _winSizes.push_back(_windowSize);
    std::cout <<ind<<":: Window size is: "<< _windowSize<<std::endl;
}

void Lightfield::fixWindowSize(){
    _windowSize=_winSizeMax;
}

void Lightfield::setWindowLimits(int ind){
    if(ind <= _windowSize/2){
        _winStart = 0;
        _winEnd = _windowSize;
        std::cout << "Window starts at img "<< _winStart<< ", ends at img " << _winEnd<< std::endl;
    }else if(ind+1 >=_inList->size()-_windowSize/2){
        _winStart = _inList->size() - _windowSize-1;
        _winEnd = _inList->size()-1;
        std::cout << "Window starts at img "<< _winStart<< ", ends at img " << _winEnd<< std::endl;
    }else{
        _winStart = ind -_windowSize/2;
        _winEnd = ind +_windowSize/2;
        std::cout << "Window starts at img "<< _winStart<< ", ends at img " << _winEnd<< std::endl;
    }
}

void Lightfield::setPrevWinParams(){
    _prevWinStart = _winStart;
    _prevWinEnd =_winEnd;
    _prevWinWght =_winWght;
    _prevWinSize =_windowSize;
}

void Lightfield::setDeltaWinParams(){
    _deltWinStart=_winStart-_prevWinStart;
    _deltWinEnd=_winEnd-_prevWinEnd;
    _totalSubtract=0;
    _totalAdd=0;
    if(_deltWinStart >0){
        _totalSubtract=_deltWinStart;
    }if(_deltWinEnd <0){
        _totalSubtract=_totalSubtract + std::abs(_deltWinEnd);
    }
    if(_deltWinStart <0){
        _totalAdd=std::abs(_deltWinStart);
    }if(_deltWinEnd >0){
        _totalAdd=_totalAdd + _deltWinEnd;
    }
    _fractionLFRetained = (_prevWinSize +1.0-_totalSubtract)/(_prevWinSize +1.0);
    std::cout << "  Delta win start, end " << _deltWinStart<<", " <<_deltWinEnd<< std::endl;
    std::cout << "  Total subtracted Imgs " << _totalSubtract<<std::endl;
    std::cout << "  Total added Imgs " << _totalAdd<<std::endl;
    std::cout << "  Fraction previous LF retained " << _fractionLFRetained<<std::endl;
}

void Lightfield::setWeights(){
    _winWght = 1.0f/(_windowSize +1.0f);
    if(_windowSize > _prevWinSize){
        _scaleWinWght = _winWght/_prevWinWght;
    }else if(_windowSize < _prevWinSize){
        _scaleWinWght = _winWght*(_prevWinSize+1.0);
    }else{_scaleWinWght = 1.0f;
    }
    std::cout << "  PrevWinWght; WinWght; ScaleWinWght:  "<<_prevWinWght<<"; "<<_winWght<<"; " << _scaleWinWght<< std::endl;
    std::cout << "  Check Scale (?)-> sum to 1: "<<_scaleWinWght*_fractionLFRetained+_winWght*_totalAdd<< std::endl;
}

//Channel Splitter Functions
std::vector<cv::Mat> Lightfield::getWinLFChannels(){
    std::vector<cv::Mat> chans;
    cv::split(_winLF.getBitmap().clone(), chans);
    return(chans);
}
cv::Mat Lightfield::getWinLFChan(int ind){
    std::vector<cv::Mat> chans;
    cv::split(_winLF.getBitmap(), chans);
    return(chans[ind]);
}
std::vector<cv::Mat> Lightfield::getImChannels(cv::Mat in){
    std::vector<cv::Mat> chans;
    cv::split(in, chans);
    return(chans);
}
cv::Mat Lightfield::getImChan(cv::Mat in, int ind){
    std::vector<cv::Mat> chans;
    cv::split(in, chans);
    return(chans[ind]);
}

//Lightfield Modifiers: Subtract, Add, Scale
void Lightfield::scaleLF(){
    std::cout<<"BeforeScaleLF " <<cv::mean(_winLF.getBitmap())<<std::endl;
    std::vector<cv::Mat> lfChans = getWinLFChannels();
    for(int i=0; i<lfChans.size(); i++){
        cv::Mat tmpLF=lfChans[i].clone();
        cv::Mat sclIm=tmpLF*_scaleWinWght;
        lfChans[i] =sclIm;
    }
    cv::merge(lfChans, _winLF.getBitmap());
    std::cout<<"AfterScaleLF " <<cv::mean(_winLF.getBitmap())<<std::endl;
}

void Lightfield::subtractLFIms(){
    if(_deltWinStart>0){
        for(int i=_prevWinStart; i<_prevWinStart + _deltWinStart; i++){
            std::cout <<" subtracting start img "<<i<<" :: " << _inList->getImage(i).getName() <<  std::endl;
            cv::Mat im, imF;
            im=_inList->getImage(i).getBitmap().clone();
            im.convertTo(imF, _matType);
            cv::GaussianBlur(imF,imF,_blurKern,0,0);
            std::vector<cv::Mat> imChans=getImChannels(imF);
            std::vector<cv::Mat> lfChans = getWinLFChannels();
            for(int j=0; j<imChans.size(); j++){
                cv::Mat tmpIm=imChans[j].clone();
                cv::Mat tmpLF=lfChans[j];
                cv::Mat sclIm=tmpIm*_prevWinWght;
                lfChans[j]=tmpLF-sclIm;
            }
            cv::merge(lfChans, _winLF.getBitmap());               }
    }
    if(_deltWinEnd<0){
        for(int i=_winEnd; i<_prevWinEnd+1; i++){
            std::cout <<" subtracting end img " <<i<<" :: " <<_inList->getImage(i).getName() <<  std::endl;
            cv::Mat im, imF;
            im=_inList->getImage(i).getBitmap().clone();
            im.convertTo(imF, _matType);
            cv::GaussianBlur(imF,imF,_blurKern,0,0);
            std::vector<cv::Mat> imChans=getImChannels(imF);
            std::vector<cv::Mat> lfChans = getWinLFChannels();
            for(int j=0; j<imChans.size(); j++){
                cv::Mat tmpIm=imChans[j].clone();
                cv::Mat tmpLF=lfChans[j];
                cv::Mat sclIm=tmpIm*_prevWinWght;
                lfChans[j]=tmpLF-sclIm;
            }
            cv::merge(lfChans, _winLF.getBitmap());           }
    }
}

void Lightfield::addLFIms(){
    if(_deltWinStart<0){
        for(int i=_winStart; i<_prevWinStart; i++){
            std::cout <<" adding start img " <<i<<" :: "<< _inList->getImage(i).getName() <<  std::endl;
            cv::Mat im, imF;
            im=_inList->getImage(i).getBitmap().clone();
            im.convertTo(imF, _matType);
            cv::GaussianBlur(imF,imF,_blurKern,0,0);
            std::vector<cv::Mat> imChans=getImChannels(imF);
            std::vector<cv::Mat> lfChans = getWinLFChannels();
            for(int j=0; j<imChans.size(); j++){
                cv::Mat tmpIm=imChans[j].clone();
                cv::Mat tmpLF=lfChans[j];
                cv::Mat sclIm=tmpIm*_winWght;
                lfChans[j]=tmpLF+sclIm;
            }
            cv::merge(lfChans, _winLF.getBitmap());        }
    }
    if(_deltWinEnd>0){
        for(int i=_prevWinEnd+1; i<_winEnd+1; i++){
            std::cout <<" adding end img "<<i<<" :: "<< _inList->getImage(i).getName() <<  std::endl;
            cv::Mat im, imF;
            im=_inList->getImage(i).getBitmap().clone();
            im.convertTo(imF, _matType);
            cv::GaussianBlur(imF,imF,_blurKern,0,0);
            std::vector<cv::Mat> imChans=getImChannels(imF);
            std::vector<cv::Mat> lfChans = getWinLFChannels();
            for(int j=0; j<imChans.size(); j++){
                cv::Mat tmpIm=imChans[j].clone();
                cv::Mat tmpLF=lfChans[j];
                cv::Mat sclIm=tmpIm*_winWght;
                lfChans[j]=tmpLF+sclIm;
            }
            cv::merge(lfChans, _winLF.getBitmap());                    }
    }
}

void Lightfield::initializeLF(){
    cv::Mat tempLF, LF; Image lfIm;
    std::cout<<"Generating window LF: img 0"<<std::endl;
    tempLF=_inList->getImage(0).getBitmap().clone();
    tempLF.convertTo(LF, _matType);
    LF=LF*_winWght;
    lfIm.getBitmap()=LF;
    setWindowLF(lfIm);

    for(int i=1; i<=_winEnd;i++){
        std::cout<<"Generating window LF: img "<< i<<std::endl;
        cv::Mat im, imF;
        im=_inList->getImage(i).getBitmap().clone();
        im.convertTo(imF, _matType);
        cv::GaussianBlur(imF,imF,_blurKern,0,0);
        std::vector<cv::Mat> imChans=getImChannels(imF);
        std::vector<cv::Mat> lfChans = getWinLFChannels();
        for(int j=0; j<imChans.size(); j++){
            lfChans[j]=lfChans[j]+imChans[j]*_winWght;
        }
        cv::merge(lfChans, _winLF.getBitmap());
    }
//    cv::GaussianBlur(_winLF.getBitmap(),_winLF.getBitmap(),_blurKern,0,0);
    std::cout<<"Generated initial Lightfield"<<std::endl;
}

//Intensity and StandDev Calculators
void Lightfield::calculateBrightStats(){
    cv::Mat temp=_inList->getImage(0).getBitmap();
    cv::Mat tempF; temp.convertTo(tempF,_matType);
    cv::Scalar tempSc = cv::mean(tempF/*temp*/);
    _imChMeans.push_back(tempSc);
    std::cout<< "Mean on Img: 0" <<" || "<< _inList->getImage(0).getName()<<std::endl;
    std::cout<< "  mean :  " << tempSc<<std::endl;

    double total=0.0;
    for(int i=0;i <= temp.depth(); i++){
        total = total+tempSc[i];
    }
    for(int i =1; i< _inList->size(); i++){
        temp =_inList->getImage(i).getBitmap();
        cv::Mat tempF; temp.convertTo(tempF,_matType);//
        tempSc = cv::mean(tempF/*temp*/);
        _imChMeans.push_back(tempSc);
        std::cout<< "Mean on Img: " <<i <<" || "<< _inList->getImage(i).getName()<<std::endl;
        std::cout<< "  mean :  " << tempSc<<std::endl;

        double imSumInt =0.0;
        for(int j=0; j<= temp.depth(); j++){
            total = total + tempSc[j];
            imSumInt = imSumInt +tempSc[j];
        }
        _imTotIntensity.push_back(imSumInt);
    }
    double error=0.0;
    double pwr =2.0;
    _meanPfBright = total/_inList->size();
    std::cout <<"  Total intensity is: "<<total<<"; mean intensity/img is: "<<_meanPfBright <<std::endl;
    for(int i=0; i<_imChMeans.size(); i++){
        double imgSum=0.0;
        for (int j=0; j<= temp.depth(); j++){\
            imgSum=imgSum + _imChMeans[i][j];
        }
        double tempEr =imgSum-_meanPfBright;
        error = error+std::pow(tempEr,pwr);
//        std::cout <<"error is " <<error << std::endl;
    }
    error=error/_inList->size();
    _stDev=std::sqrt(error);
    std::cout <<"Standard deviation for sum chan brightness: " << _stDev <<std::endl;
//    int winMaxCalc;
//    winMaxCalc = (_stDev/_meanPfBright)*_winMaxConvFac;
//    std::cout << "Max Window calculated at: " << winMaxCalc<<std::endl;
//    setWinSizeMax(winMaxCalc);
}

void Lightfield::assignImageDev(){
    int depth=_inList->getImage(0).getBitmap().depth();
    for(int i=0; i<_imChMeans.size(); i++){
        double imgSum=0.0;
        for (int j=0; j<= depth; j++){
            imgSum=imgSum + _imChMeans[i][j];
        }
        double imErr = abs(_meanPfBright-imgSum);
        _imSDevs.push_back(imErr/_stDev);
        double imDevs = _imSDevs[i];
        if(imDevs<_cutoffSD){
            _survivedSize=_survivedSize+1;
        }
    }
    std::cout <<"Survived ZMLF images: " << _survivedSize<<" out of "<< _inList->size()<<std::endl;
    _survivedWght=1.0f/_survivedSize;
    std::cout <<"Survived weight: " << _survivedWght<<std::endl;
}

//Min Error Window Functions
void Lightfield::calculateMinErrWin(int ind){
    setWindowEdges(ind);
    double errThresh;
    for(int i=_winStartMin; i<=_winStartMax; i++){
        double error =0.0;
        if(i==_winStartMin){
            errThresh = 0.0;
        }
        for(int j=i; j<i+_windowSize; j++){
            error=error +std::abs(_imTotIntensity[j]-_imTotIntensity[ind]);
        }
        error =1.0/error;
        if(error>errThresh){
            _winStart=i;
            _winEnd=i+_windowSize;
            errThresh=error;
        }
    }
    std::cout<<ind<<":: Min error win bounds are "<<_winStart<<", "<<_winEnd <<std::endl;
}

void Lightfield::setWindowEdges(int ind){
    if(ind <= _windowSize){
        _winStartMin = 0;
        _winStartMax = ind;
        std::cout << ind <<":: Window Edges at: "<< _winStartMin<< ", " << _winStartMax<< std::endl;
    }else if(ind>=_inList->size()-_windowSize){
        _winStartMin = ind-_windowSize;
        _winStartMax = _inList->size() -_windowSize;
       std::cout << ind <<":: Window Edges at: "<< _winStartMin<< ", " << _winStartMax<< std::endl;
    }else{
        _winStartMin = ind -_windowSize;
        _winStartMax = ind;
        std::cout << ind <<":: Window Edges at: "<< _winStartMin<< ", " << _winStartMax<< std::endl;
    }
}
