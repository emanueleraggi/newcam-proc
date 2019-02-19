#include "adaptivelightfield.h"

AdaptiveLightfield::AdaptiveLightfield(){
    _matType=22/*5*//*21*/;
    _matOutType=18;
    _blurKernSize =21;
    _blurKern=cv::Size(_blurKernSize,_blurKernSize);
    _contrastA=1.0f;
    _brightnessA=2000.0f;
    _contrastB=1.0f;
    _brightnessB=0.0f;
}


void AdaptiveLightfield::staticBackgroundLFCorrector(){
    for(int ind=0; ind < inList().size();ind++){
        if(ind==0){
            _LFObject.calculateBrightStats();
            _LFObject.assignImageDev();
            _LFObject.calculateZeroMeanPfLF();
            _zeroMeanLF =_LFObject.getZeroMeanLFMat();
            cv::split(_zeroMeanLF,_lightChannels);
        }

        cv::Mat tmpImg=inList().getImage(ind).getBitmap().clone();
        cv::Mat convImg, correctedImage;
        tmpImg.convertTo(convImg, _matType);
        std::vector<cv::Mat> imageChannels;
        cv::split(/*tmpImg*/convImg,imageChannels);

        for(int i=0; i<imageChannels.size(); i++){
            cv::Mat imCh,temp, lfCh;
            imCh=imageChannels[i];
            lfCh=_lightChannels[i].clone();
            temp=imCh-lfCh;
            temp=temp*_contrastA + _brightnessA;
            imageChannels[i]=temp;
        }
        Image out;
        out.setName(inList().getImage(ind).getName());
        cv::merge(imageChannels,correctedImage);
        correctedImage.convertTo(out.getBitmap(),_matOutType);
        std::cout <<"Corrected Img "<<ind <<": " << cv::mean(correctedImage) <<std::endl;
        outList().pushBack(out);
    }
    logRunParams("Zero Mean LF");
}

void AdaptiveLightfield::fixedSlideBackgroundLFCorrector(){
    for(int ind=0; ind< inList().size();ind++){
        _lightfield=_LFObject.calculateFixedSlidingWindowLF(ind);
        std::cout <<"Got Fixed Sliding Window LF " << ind <<", "<< inList().getImage(ind).getName() <<std::endl;
        cv::Mat LF, tempImg, correctedImage;
        cv::Mat indImg = inList().getImage(ind).getBitmap().clone();
        indImg.convertTo(tempImg,_matType);

        LF=_lightfield.getBitmap().clone();
        std::cout <<"LF: "<< cv::mean(LF)<<std::endl;
        std::cout <<"OrgIm: "<< cv::mean(tempImg)<<std::endl;

        std::vector<cv::Mat> imageChannels;
        std::vector<cv::Mat> lightChannels;
        cv::split(tempImg,imageChannels);
        cv::split(LF,lightChannels);
        for(int i=0; i<imageChannels.size(); i++){
            cv::Mat imCh, lfCh;
            imCh=imageChannels[i];
            lfCh=lightChannels[i];
            imageChannels[i]=(imCh-lfCh)*_contrastB + _brightnessB; //9_13
        }
        Image out;
        out.setName(inList().getImage(ind).getName());
        cv::merge(imageChannels,correctedImage);
        std::cout <<"Corrected Img "<<ind <<": " << cv::mean(correctedImage) <<std::endl;
        outList().pushBack(out);
    }
    logRunParams("Fixed Size Sliding Window");
}

void AdaptiveLightfield::slidingBackgroundLFCorrector(){
    for(int ind=0; ind< inList().size();ind++){
        _lightfield=_LFObject.calculateSlidingWindowLF(ind);
        std::cout <<"Got Sliding Window LF " << ind <<", "<< inList().getImage(ind).getName() <<std::endl;

        cv::Mat LF, tempImg, correctedImage;
        cv::Mat indImg = inList().getImage(ind).getBitmap().clone();
        indImg.convertTo(tempImg,_matType);
        LF=_lightfield.getBitmap().clone();
        std::cout <<"LF: "<< cv::mean(LF) <<std::endl;
        std::cout <<"OrgIm: "<< cv::mean(tempImg) <<std::endl;

        std::vector<cv::Mat> imageChannels;
        std::vector<cv::Mat> lightChannels;
        cv::split(tempImg,imageChannels);
        cv::split(LF,lightChannels);
        for(int i=0; i<imageChannels.size(); i++){
            cv::Mat imCh, lfCh, temp;
            imCh=imageChannels[i];
            lfCh=lightChannels[i];
            temp=imCh-lfCh;
            temp=temp*_contrastA +_brightnessA;
            imageChannels[i]=temp;
        }
        Image out;
        out.setName(inList().getImage(ind).getName());
        cv::merge(imageChannels,correctedImage);
        std::cout <<"Corrected Img "<<ind <<": " << cv::mean(correctedImage) <<std::endl;
        correctedImage.convertTo(out.getBitmap(), _matOutType);
        outList().pushBack(out);
    }
    logImRunParams("Adaptive Sliding Window");
}


Image AdaptiveLightfield::adaptiveBackgroundLFCorrector(int ind){
    _lightfield=_LFObject.calculateAdaptiveWindowLF(ind);
    std::cout <<"Got Adaptive LF " << ind <<std::endl;

    cv::Mat LF, tempLF, tempImg, correctedImage;
    cv::Mat indImg = inList().getImage(ind).getBitmap();
    indImg.convertTo(tempImg,_matType);

    LF=_lightfield.getBitmap();
    LF.convertTo(tempLF, _matType);
    std::vector<cv::Mat> imageChannels;
    std::vector<cv::Mat> lightChannels;

    cv::split(tempImg,imageChannels);
    cv::split(tempLF,lightChannels);
    for(int i=0; i<3; i++){
        cv::Mat imCh, lfCh;
        imCh=imageChannels[i];
        lfCh=lightChannels[i];
        imageChannels[i]=imCh-lfCh;
    }
    cv::merge(imageChannels,correctedImage);
    correctedImage.convertTo(indImg, _matOutType);
    indImg= indImg*_contrastB +_brightnessB;
    Image outImage;
    outImage.getBitmap()=indImg;

    return(outImage);
}

//Corrector YML Logs
void AdaptiveLightfield::logRunParams(std::string fun){
//    std::string filename = _outList->getImage(8).getSavePath().string();
     std::string filename= outList().getImage(0).getLoadPath().string();
//     std::cout<<filename<<std::endl;
    filename +="/LFCorrectionLog.yml";
//    std::cout<<filename<<std::endl;

    cv::FileStorage fs(filename, cv::FileStorage::WRITE);
    fs<<"Method"<<fun;
    fs<<"ReadPath"<<inList().getImage(0).getLoadPath().string();
    fs<<"WritePath" <<filename;
    if(fun=="Zero Mean LF"){
        fs<<"Cutoff SD" <<_LFObject.getSDCutoff();
        fs<<"Images used for ZMLF" <<_LFObject.getSurvivedSize();
        fs<<"Contrast" <<_contrastA;
        fs<<"Brightness" <<_brightnessA;
    }else{
        fs<<"Contrast" <<_contrastB;
        fs<<"Brightness" <<_brightnessB;
        fs<<"Max Window Size" << _LFObject.getWinSizeMax();
    }
    fs<<"Gaussian Blur Kernel Size" << _blurKernSize;
    fs<<"Working Mat Type" << _matType;
    fs<<"Out Mat Type" << _matOutType;

}

void AdaptiveLightfield::logImRunParams(std::string fun){
    std::string filename = _outList->getImage(8).getSavePath().string();
    filename +="/LFCorrectionLog.yml";
//    std::cout<<filename<<std::endl;
    cv::FileStorage fs(filename, cv::FileStorage::WRITE);
    fs<<"Method"<<fun;
    fs<<"Contrast" <<_contrastB;
    fs<<"Brightness" <<_brightnessB;
    fs<<"Gaussian Blur Kernel Size" << _blurKernSize;
    fs<<"Working Mat Type" << _matType;
    fs<<"Out Mat Type" << _matOutType;
    fs<<"Max Window Size" << _LFObject.getWinSizeMax();
    fs<<"Mean Image Intensity" << _LFObject.getMeanIntensity();
    fs<<"Profile StandDev" << _LFObject.getProfileSD();

    std::vector<cv::Scalar> imMeans=_LFObject.getImMeans();
    std::vector<double> imSDs=_LFObject.getImSDs();
    std::vector<int> winSizes =_LFObject.getWinSizes();
    for(int i=0; i< winSizes.size(); i++){
        std::string imName = inList().getImage(i).getName();
        fs<<"Image" <<imName <<"Mean Intensity"<<imMeans[i]<<"SD"<<imSDs[i]<<"WinSize"<<winSizes[i];
    }
}

void AdaptiveLightfield::logImStats(std::string out){
    std::string filename = out+"/CorrectionLog.yml";
    cv::FileStorage fs(filename, cv::FileStorage::WRITE);

    std::vector<cv::Scalar> imMeans=_LFObject.getImMeans();
    std::vector<double> imSDs=_LFObject.getImSDs();
    for(int i=0; i< imMeans.size(); i++){
        std::string imName = inList().getImage(i).getName();
        fs<<"Image" <<imName <<"Mean Intensity"<<imMeans[i]<<"SD"<<imSDs[i];
    }
}

void AdaptiveLightfield::save(){
    outList().save();
}
void AdaptiveLightfield::runOperations(){
  forwardDirectory();
    if(_functionSelect==Static){
        staticBackgroundLFCorrector();        
    }else if(_functionSelect==FixedSlide){
        fixedSlideBackgroundLFCorrector();       
    }else if(_functionSelect==Slide){
        slidingBackgroundLFCorrector();
    }else{throw std::invalid_argument("No valid LF Method selected");}

    return;
}



//void AdaptiveLightfield::autoMatTypes(){
//    if(inList().getImage(0).getColorSpace()==Grey){
//        setMatType(5);
//        setMatOutType(2);
//    }else{
//        setMatType(21);
//        setMatOutType(18);
//    }
//}

