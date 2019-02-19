#include "stereolist.h"

StereoList::StereoList()
{
    _listA.reset(new ImageList<Image>);
    _listB.reset(new ImageList<Image>);
    _maxErr=100;
}

StereoList::~StereoList(){
    //_listA.reset();
    //_listB.reset();
}

ImageList<Image>& StereoList::getListA(){
    if(_listA==NULL)
        throw std::out_of_range("no listA is set!");
    return *_listA;
}

ImageList<Image>& StereoList::getListB(){
    if(_listB==NULL)
        throw std::out_of_range("no listB is set!");
    return *_listB;
}

std::shared_ptr<ImageList<Image> > StereoList::getPtrA(){
    if(_listA==NULL)
        throw std::out_of_range("no listA is set!");
    return _listA;
}

std::shared_ptr<ImageList<Image> > StereoList::getPtrB(){
    if(_listB==NULL)
        throw std::out_of_range("no listB is set!");
    return _listB;
}

StereoImage StereoList::getImage(unsigned int i){
//    StereoImage out;
//    std::shared_ptr<Image> a(&getListA().getImage(i));
//    std::shared_ptr<Image> b(&getListB().getImage(i));

//    out.set(a,b);

    return _matchedList[i];
}

void StereoList::matchImages(){
    for(size_t i=0; i<getListA().size(); i++){
        unsigned long err = std::fabs( getPtrA()->getImage(i).getUTime()-getPtrB()->getImage(0).getUTime()  );
        size_t index=0;
        for(size_t j=1; j<getListB().size(); j++){
            unsigned long tempErr = std::fabs(  getPtrA()->getImage(i).getUTime()-getPtrB()->getImage(j).getUTime()  );
            if(tempErr<err){
                err=tempErr;
                index = j;
            }
        }if(err<_maxErr ){
            StereoImage temp;
            temp.set(getPtrA()->getImage(i),getPtrB()->getImage(index));
            _matchedList.push_back(temp);
            std::cout << "err: " << err << " " << i << "," << index << std::endl;
        }
    }
}
