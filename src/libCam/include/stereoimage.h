#ifndef STEREOIMAGE_H
#define STEREOIMAGE_H

#include <memory>
#include "image.h"

class StereoImage
{
public:
    StereoImage();
    ~StereoImage();
    Image &getA(){return *_imA;}
    Image &getB(){return *_imB;}
    void set(Image a,Image b);
    void set(std::shared_ptr<Image> a, std::shared_ptr<Image> b);
private:
    std::shared_ptr<Image> _imA;
    std::shared_ptr<Image> _imB;
};

#endif // STEREOIMAGE_H
