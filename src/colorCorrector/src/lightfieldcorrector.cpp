#include "lightfieldcorrector.h"

LightfieldCorrector::LightfieldCorrector()
{
    std::lock_guard<std::mutex> lock(mtx);
    _kernelSize=cv::Size( 1, 1 );
    _lightfield.initialize(BGR);  // initialize 1 for grey;
    _lightBlur.initialize(BGR);
    _previewReady=false;
    _contrast=1.0;
    _progress=0;
    _minimum=0;
    _maximum=65536;
    _histOverflow=false;
    threads=8;
}

void LightfieldCorrector::runOperations(){
    std::vector<std::thread> thr;
    _runProgress=0;
    resetOverflowWarning();
    outList()=inList();
    outList().setSaveDir(_outputDir);
    //outList().setReadOnly(false);
    //outList().clear();

    unsigned int interval = (inList().size()/threads)-1;

    for(size_t i=0; i<threads; i++){
        std::shared_ptr<ImageList<Image> > list;
        if(i==threads-1)
            list=outList().getSubList(interval*i,outList().size()-1);
        else
            list=outList().getSubList(interval*i,interval*i+interval);
        thr.push_back(std::thread(&LightfieldCorrector::runThread,this,list) );
    }

    for(int i=0; i<threads; i++)
        thr[i].join();

    _runProgress=100;
}

void LightfieldCorrector::runThread(std::shared_ptr<ImageList<Image> > list){
    if(_previewReady){
        for(size_t i=0; i<list->size() ;i++){
            try {
                correctImage(list->getImage(i));
            }
            catch(...){
                std::cout << "error" <<std::endl;
            }
            _runProgress=i*100.0/list->size();
            //std::cout<< i << std::endl;
        }
        list->saveBuffer();
    }
    return;
}

void LightfieldCorrector::correctImage(Image &in){
    int depth=in.getBitmap().depth();
    std::vector<cv::Mat> outputChannels;
    std::vector<cv::Mat> lightChannels;
    cv::Scalar meanArray;
    float mean;
    Image temp;
    temp=_lightBlur;
    //temp.toHSV();
    meanArray=cv::mean(temp.getBitmap());
    //mean=(cv::mean(temp.getBitmap())[0]+cv::mean(temp.getBitmap())[1]+cv::mean(temp.getBitmap())[2])/3;
    mean=(meanArray[0]+meanArray[1]+meanArray[2])/3;
    split(_lightBlur.getBitmap(),lightChannels);
    split(in.getBitmap(),outputChannels);

    for(int i=0;i<3;i++){
        cv::Mat oper =lightChannels[i];
        cv::Mat img;
        cv::Mat out;
        float outMean;
        float meanDiff;
        outputChannels[i].convertTo(img,CV_32F);
        oper.convertTo(oper,CV_32F);
        //out=(img-(oper+meanArray[i]*_perChanAdjust))*_contrast+mean*(_perChanAdjust+1)+_applicationIntensity;
        out=(img-oper)*(mean/meanArray[i])*_contrast+mean+_applicationIntensity;

//        outMean=(cv::mean(out)[0]+cv::mean(out)[1]+cv::mean(out)[2])/3;
//        meanDiff=outMean-32768.0;
//        out -= meanDiff;
        //out=out-mean*_contrast;
        double min, max;
        cv::minMaxLoc(out, &min, &max);

        if(min<_minimum||max>_maximum){
            _histOverflow=true;
        }


        out.convertTo(outputChannels[i],depth);
        merge(outputChannels,in.getBitmap());

    }

    //cv::imshow("3",in.generateHist());
    return;
}



Image LightfieldCorrector::calculateLightfield(){

    std::vector<std::thread> thr;
    //ImageList<Image> lfs;
    _lfList.resize(threads);
    //std::vector< ImageList<Image>::Ptr > lists;
    //lists.resize(threads);

    unsigned int interval = (inList().size()/threads)-1;

    for(size_t i=0; i<threads; i++){
        std::shared_ptr<ImageList<Image> > list=inList().getSubList(interval*i,interval*i+interval);
        //thr.push_back(std::thread(&LightfieldCorrector::calculateLightfield,this, lists[i]) );
        thr.push_back(std::thread(&LightfieldCorrector::calculateLightfieldList,this,list,i) );
    }

    for(int i=0; i<threads; i++)
        thr[i].join();

//    for(int i=0; i<threads; i++){

//    }
    _lightfield=calculateLightfield(_lfList);
    return _lightfield;
//    std::lock_guard<std::mutex> lock(mtx);
//    _previewReady=false;

//    double weight=1.0/inList().size();
//    cv::Mat lf;
//    _progress=0;
//    _lightfield.getBitmap().convertTo(lf, CV_32F);
//    std::vector<cv::Mat> channels;
//    Image temp;
//    temp=inList()[0];
//    temp.getBitmap().convertTo(lf,CV_32F);  // Take only the intensity model.
//    lf=weight*lf;   // weight it properly.
//    // build up lighighting.
//    for(size_t i=1; i<inList().size() ;i++){
//        cv::Mat saturation;
//        temp=inList()[i];
//        temp.getBitmap().convertTo(saturation,CV_32F);
//        lf =lf+weight*saturation;
//        _progress=i*100.0/inList().size();
//        std::cout<<"calculating lighting: "<<_progress<<"%"<<std::endl;
//        updateProgress();
//    }
//    lf.convertTo(_lightfield.getBitmap(), CV_16U);
//    _progress=100;

//    _previewReady=true;
//    getBlurLight();
//    return _lightfield;
}

void LightfieldCorrector::calculateLightfieldList(std::shared_ptr<ImageList<Image> > list,  unsigned int i){
    //Image out;

    //std::lock_guard<std::mutex> lock(mtx);
    //_previewReady=false;

    double weight=1.0/list->size();
    cv::Mat lf;
    _progress=0;
    _lfList[i].initialize(BGR);
    _lfList[i].getBitmap().convertTo(lf, CV_32F);
    std::vector<cv::Mat> channels;
    Image temp;
    temp=list->getImage(0);
    temp.getBitmap().convertTo(lf,CV_32F);  // Take only the intensity model.
    lf=weight*lf;   // weight it properly.
    // build up lighighting.
    for(size_t i=1; i<list->size() ;i++){
        cv::Mat saturation;
        temp=list->getImage(i);
        temp.getBitmap().convertTo(saturation,CV_32F);
        lf =lf+weight*saturation;
        _progress=i*100.0/list->size();
        //std::cout<<"calculating lighting: "<<_progress<<"%"<<std::endl;
        updateProgress();
    }
    lf.convertTo(_lfList[i].getBitmap(), CV_16U);
    _progress=100;

    //_previewReady=true;
    getBlurLight();
    //return out;
}

Image LightfieldCorrector::calculateLightfield(ImageList<Image> & list){
    Image out;

    //std::lock_guard<std::mutex> lock(mtx);
    _previewReady=false;

    double weight=1.0/list.size();
    cv::Mat lf;
    _progress=0;
    out.initialize(BGR);
    out.getBitmap().convertTo(lf, CV_32F);
    std::vector<cv::Mat> channels;
    Image temp;
    temp=list.getImage(0);
    temp.getBitmap().convertTo(lf,CV_32F);  // Take only the intensity model.
    lf=weight*lf;   // weight it properly.
    // build up lighighting.
    for(size_t i=1; i<list.size() ;i++){
        cv::Mat saturation;
        temp=list.getImage(i);
        temp.getBitmap().convertTo(saturation,CV_32F);
        lf =lf+weight*saturation;
        //_progress=i*100.0/list->size();
        //std::cout<<"calculating lighting: "<<_progress<<"%"<<std::endl;
        updateProgress();
    }
    lf.convertTo(out.getBitmap(), CV_16U);
    _progress=100;

    _previewReady=true;
    getBlurLight();
    return out;
}


Image &LightfieldCorrector::getBlurLight(int kernelSize){
    kernelSize=kernelSize*2-1;
    if(kernelSize<1)
        kernelSize=1;
    _kernelSize=cv::Size( kernelSize, kernelSize );
    return getBlurLight();

}


Image &LightfieldCorrector::getBlurLight(){
    cv::GaussianBlur( _lightfield.getBitmap(), _lightBlur.getBitmap(), _kernelSize , 0, 0 );
    return _lightBlur;
}


Image &LightfieldCorrector::generatePreview(){
    if(_previewReady){
        resetOverflowWarning();
        _previewImg=inList().getImage();
        correctImage(_previewImg);
        return _previewImg;
    }
    else
        return inList().getImage();

}

void LightfieldCorrector::updateProgress(){
    //_lightProgF(_progress);
}

void LightfieldCorrector::setLightProgressCallback(void (*f)(int)){
    //_lightProgF=f;
}

void LightfieldCorrector::save(){
    outList().saveBuffer();
}
