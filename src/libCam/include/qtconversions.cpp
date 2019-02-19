#include "qtconversions.h"
QImage libcam::qtconversions::mat2QImage(cv::Mat const& src){
    cv::Mat temp;
    temp=src;
    QImage dest((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
    dest.bits(); // enforce deep copy, see documentation
    return dest;
}
QPixmap libcam::qtconversions::image2QPixmap(Image & src){
    Image cvt;
    cvt = src.getCopy();
    cvt.toRGB();
    return QPixmap::fromImage(mat2QImage(cvt.get8Bitmap()));
}
QPixmap libcam::qtconversions::mat2QPixmap(const cv::Mat &src){
    return QPixmap::fromImage(mat2QImage(src));
}
