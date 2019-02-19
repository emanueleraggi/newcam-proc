#ifndef FEATUREOPS_H
#define FEATUREOPS_H

//#include "opencv2/nonfree/nonfree.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "stereolist.h"
#include "stereostruct.h"
//#include <opencv2/nonfree/features2d.hpp>

class FeatureOps : public AbstractData{
public:
    FeatureOps();

    std::vector<cv::KeyPoint> procSIFTKps(Image in);
    cv::Mat procSIFTDescrip(std::vector<cv::KeyPoint> kps, Image in);

    StereoContainer procSIFTStereoKP(StereoContainer cont, StereoImage in);
    StereoContainer procSIFTStereoDesc(StereoContainer cont, StereoImage in);

    StereoContainer procSIFTStereoDescRaw(StereoContainer cont, StereoImage in);
    StereoContainer procSIFTStereoDescSurv(StereoContainer cont, StereoImage in);

    std::vector<cv::KeyPoint> procSURFkps(Image in);
    cv::Mat getSIFTDescriptor() { return _siftDescr; }
    cv::Mat getSURFDescriptor() { return _surfDescr; }

    int nFeatures;
    int nOctaveLayers;
    double contrastThreshold;
    double edgeThreshold;
    double sigma;

private:
    cv::Mat _siftDescr;
    cv::Mat _surfDescr;
};

#endif // FEATUREOPS_H
