#ifndef STEREOLIST_H
#define STEREOLIST_H
#include "imagelist.h"
#include <memory>
#include "stereoimage.h"
class StereoList
{
public:
    StereoList();
    ~StereoList();

    ImageList<Image>& getListA();
    ImageList<Image>& getListB();
    std::shared_ptr<ImageList<Image> > getPtrA();
    std::shared_ptr<ImageList<Image> > getPtrB();

    StereoImage getImage(unsigned int i);
    int getStereoListSize(){return _matchedList.size();}




    /*
     * Quick implementaitons
     */
    void setLists(std::shared_ptr<ImageList<Image> > listA,std::shared_ptr<ImageList<Image> > listB){
        _listA=listA;
        _listB=listB;
        matchImages();
    }
    void setListsLoad(boost::filesystem::path pA, boost::filesystem::path pB, ColorSpace c){
        _listA->addImagesFromDir(pA,c);
        _listB->addImagesFromDir(pB,c);
        matchImages();
    }
    void resetLists(){
        _listA.reset(new ImageList<Image>);
        _listB.reset(new ImageList<Image>);
        _matchedList.clear();
    }
    void setReadOnly(bool readOnly){
        _listA->setReadOnly(readOnly);
        _listB->setReadOnly(readOnly);
    }
    void setIndex(unsigned int i){
        _listA->setIndex(i);
        _listB->setIndex(i);
    }
    unsigned int getIndex(){
        return _listA->getIndex();
    }
    size_t size(){
        return _matchedList.size();
    }


private:
    std::shared_ptr<ImageList<Image> > _listA;
    std::shared_ptr<ImageList<Image> > _listB;
    std::vector<StereoImage> _matchedList;

    unsigned int _maxErr;


    void matchImages();
};

#endif // STEREOLIST_H
