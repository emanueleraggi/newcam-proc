#include "imageprocessor.h"

ImageProcessor::ImageProcessor()
{
    //_inList=NULL;
    //_outList=NULL;
    _runProgress=100;
}

void ImageProcessor::setList(std::shared_ptr<ImageList<Image> > inList){
    setList(inList,inList);
}

void ImageProcessor::setList(std::shared_ptr<ImageList<Image> > inList, std::shared_ptr<ImageList<Image> > outList){
    _inList=inList;
    _outList=outList;
}

ImageList<Image> &ImageProcessor::inList(){
    if(_inList==NULL)
        throw std::out_of_range("no in list set");
    return *_inList;
}

ImageList<Image> & ImageProcessor::outList(){
    if(_outList==NULL)
        throw std::out_of_range("no output list set");
    return *_outList;
}


void ImageProcessor::run(){
    _runProgress=0;
    if(_inList==NULL){
        throw std::invalid_argument("the inputList has not been set!");
    }

    else{
        if(_outList==NULL){
            std::cout<<"the output list was NULL initializing with a new list"<< std::endl;
            //_outList= new ImageList<Image>;
        }
        else{
            outList().resize(inList().size());
            runOperations();
        }
    }
    _runProgress=100;
}


void ImageProcessor::runOperations(){
    std::cerr<<"no run has been defined... calling ImageProcessor::run()"<<std::endl;
}

void ImageProcessor::save(){
    if(_outList->size()>0){
        _outList->save();
    }
}

void ImageProcessor::setOutputDir(boost::filesystem::path dir){
    _outputDir=dir;
    _outList->setSaveDir(dir);
}
