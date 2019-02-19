#include "imagelabel.h"

ImageLabel::ImageLabel(QWidget *parent) :
    QLabel(parent)
{
    _constrain=true;
    _img=NULL;
    showHist=false;
}

void ImageLabel::setImage( Image & image){
    _img=&image;
    update();
}

void ImageLabel::setImage( Image * image){
    _img=image;
    update();
}

void ImageLabel::update(){
    if(_img==NULL){
        this->setText("No Image Set!");
    }
    else
        if(showHist){
            showMatOnLbl(_img->generateHist(),_constrain);
        }else{
//            Image temp = *_img;
//            temp.toBGR();
//            temp.to8Bit();
            showImgOnLbl(*_img,_constrain);

            //temp.toBGR();
            //showMatOnLbl(temp.getBitmap(),_constrain);
        }
}

void ImageLabel::resizeEvent(QResizeEvent *event){
    update();
}

void ImageLabel::showImgOnLbl(Image img,bool constrain){
    Image dispImage;
    cv::Size size;
    //cv::Mat img=_img->getBitmap();
    if(constrain){
        if(img.getBitmap().rows*width()/img.getBitmap().cols < height()){
            size.width=width();
            size.height=img.getBitmap().rows*width()/img.getBitmap().cols;
        }
        else{
            size.width=img.getBitmap().cols*height()/img.getBitmap().rows;
            size.height=height();
        }
    }
    else{
        size.width=width();
        size.height=height();
    }
    dispImage=img;
    dispImage.to8Bit();
    cv::resize(dispImage.getBitmap(), dispImage.getBitmap() ,size);
    setPixmap(img2QPixmap(dispImage));
}

QPixmap ImageLabel::img2QPixmap(Image &src){
    src.toRGB();
    return QPixmap::fromImage(Mat2QImage(src.getBitmap()));
}

void ImageLabel::showMatOnLbl(cv::Mat img,bool constrain){
    cv::Mat dispImage;
    cv::Size size;
    //cv::Mat img=_img->getBitmap();
    if(constrain){
        if(img.rows*width()/img.cols < height()){
            size.width=width();
            size.height=img.rows*width()/img.cols;
        }
        else{
            size.width=img.cols*height()/img.rows;
            size.height=height();
        }
    }
    else{
        size.width=width();
        size.height=height();
    }
    cv::resize(img, dispImage,size);
    setPixmap(Mat2QPixmap(dispImage));
}

QPixmap ImageLabel::Mat2QPixmap(const cv::Mat &src){
    return QPixmap::fromImage(Mat2QImage(src));
}

QImage ImageLabel::Mat2QImage(cv::Mat const& src){
     cv::Mat temp;
     temp=src;
     //cvtColor(src, temp,CV_BGR2RGB); // cvtColor Makes a copt, that what i need
     QImage dest((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
     dest.bits(); // enforce deep copy, see documentation
     return dest;
}
