#include "stereoimage.h"

StereoImage::StereoImage()
{
}

StereoImage::~StereoImage(){

}

void StereoImage::set(Image a, Image b){
    _imA.reset(new Image);
    *_imA=a;
    _imB.reset(new Image);
    *_imB=b;
}

void StereoImage::set(std::shared_ptr<Image> a, std::shared_ptr<Image> b){
    _imA=a;
    _imB=b;
}
