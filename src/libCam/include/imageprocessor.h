#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

#include "imagelist.hpp"
#include "stdlib.h"
#include <memory>
#include <boost/shared_ptr.hpp>
#include <atomic>
class ImageProcessor
{
public:
    ImageProcessor();
    //~ImageProcessor();
    void setList(std::shared_ptr<ImageList<Image> > inList);
    virtual void setList(std::shared_ptr<ImageList<Image> > inList, std::shared_ptr<ImageList<Image> > outList);
    ImageList<Image> & outList();
    ImageList<Image> & inList();
    int getRunProgress() {return _runProgress;}
    virtual void setOutputDir(boost::filesystem::path dir);
    virtual void save();
    void run();

protected:
    virtual void runOperations();  // Override this function in child classes!
    std::atomic<int> _runProgress;
    boost::filesystem::path _outputDir;
    std::shared_ptr<ImageList<Image> > _inList;
    std::shared_ptr<ImageList<Image> > _outList;
};

#endif // IMAGEPROCESSOR_H
