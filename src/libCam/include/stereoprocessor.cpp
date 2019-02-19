#include "stereoprocessor.h"

StereoProcessor::StereoProcessor()
{
}


void StereoProcessor::setOutputDir(boost::filesystem::path dir){
    _outputDir=dir;
}

void StereoProcessor::runOperations(){
    std::cerr<<"no run has been defined..."<<std::endl;
}

void StereoProcessor::setStereoList(StereoList inList, StereoList outList){
    _inList=inList;
    _outList=outList;
}
