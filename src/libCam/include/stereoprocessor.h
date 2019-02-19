#ifndef STEREOPROCESSOR_H
#define STEREOPROCESSOR_H

#include "stereolist.h"
#include "stdlib.h"
#include <memory>
#include <boost/shared_ptr.hpp>

class StereoProcessor
{
public:
    StereoProcessor();

    int getRunProgress() {return _runProgress;}
    virtual void setOutputDir(boost::filesystem::path dir);
    virtual void save(){
        std::cerr<<"no save has been defined..."<<std::endl;
    }
    void run(){runOperations();}
    virtual void setStereoList(StereoList inList, StereoList outList);

    StereoList getInList(){return _inList;}
    StereoList getOutList(){return _outList;}


protected:

    StereoList _inList;
    StereoList _outList;
    virtual void runOperations();  // Override this function in child classes!
    int _runProgress;
    boost::filesystem::path _outputDir;

};

#endif // STEREOPROCESSOR_H
