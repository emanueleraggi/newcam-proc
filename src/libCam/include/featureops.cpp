#include "featureops.h"


FeatureOps::FeatureOps()
{
    nFeatures = 0;
    nOctaveLayers = 3;
    contrastThreshold = 0.01;
    edgeThreshold = 20;
    sigma = 1;
}

std::vector<cv::KeyPoint> FeatureOps::procSIFTKps(Image in)
{
//    std::vector<cv::KeyPoint> siftKeyPoints;
//    cv::SiftFeatureDetector siftDetector(nFeatures, nOctaveLayers, contrastThreshold, edgeThreshold, sigma);
//    siftDetector.detect(in.getBitmap(), siftKeyPoints);

//    std::cout << "SIFT Detector on img: " << in.getName() << std::endl;
//    std::cout << "  # of keypoints: " << siftKeyPoints.size() << std::endl;
//    return(siftKeyPoints);
}

cv::Mat FeatureOps::procSIFTDescrip(std::vector<cv::KeyPoint> kps, Image in)
{
//    cv::Mat descriptor;
//    cv::SiftDescriptorExtractor siftExtractor;

//    siftExtractor.compute(in.getBitmap(), kps, descriptor);
//    std::cout << "SIFT Descriptor on img: " << in.getName() << std::endl;
//    return(descriptor);
}

// Introduction of the SIFT Stereo Function

StereoContainer FeatureOps::procSIFTStereoKP(StereoContainer cont, StereoImage in)
{
//    cv::SiftFeatureDetector siftDetector(nFeatures, nOctaveLayers,contrastThreshold,edgeThreshold, sigma);
//    siftDetector.detect(in.getA().getBitmap(), cont.rawKeyPsA);
//    siftDetector.detect(in.getB().getBitmap(), cont.rawKeyPsB);

//    std::cout <<"SIFT Detector on img A: " << in.getA().getName() <<std::endl;
//    std::cout <<"   # of keypoints A: " <<cont.rawKeyPsA.size() <<std::endl;
//    std::cout <<"SIFT Detector on img B: " << in.getB().getName() <<std::endl;
//    std::cout <<"   # of keypoints B: " <<cont.rawKeyPsB.size() <<std::endl;
//    return(cont);
}

StereoContainer FeatureOps::procSIFTStereoDesc(StereoContainer cont, StereoImage in)
{


}

StereoContainer FeatureOps::procSIFTStereoDescRaw(StereoContainer cont, StereoImage in)
{
//    cv::SiftDescriptorExtractor siftExtractor;
//    siftExtractor.compute(in.getA().getBitmap(), cont.rawKeyPsA, cont.rawDescriptorA);
//    siftExtractor.compute(in.getB().getBitmap(), cont.rawKeyPsB, cont.rawDescriptorB);
//    std::cout <<"SIFT Descriptor on Stereo img: " << in.getA().getName() <<std::endl;
//    return(cont);
}

StereoContainer FeatureOps::procSIFTStereoDescSurv(StereoContainer cont, StereoImage in)
{
//    cv::SiftDescriptorExtractor siftExtractor;
//    siftExtractor.compute(in.getA().getBitmap(),cont.survKeyPsA, cont.survDescriptorA);
//    siftExtractor.compute(in.getB().getBitmap(),cont.survKeyPsB, cont.survDescriptorB);
//    std::cout <<"SIFT Descriptor on Stereo img: " << in.getA().getName() <<std::endl;
//    return(cont);

}

// Introduction of the SURF Stereo Function

std::vector<cv::KeyPoint> FeatureOps::procSURFkps(Image in)
{
//    cv::SurfFeatureDetector surfDetector;
//    cv::SurfDescriptorExtractor surfExtractor;
//    std::vector<cv::KeyPoint> surfKeyPoints;

//    surfDetector.detect(in.getBitmap(), surfKeyPoints);
//    surfExtractor.detect(in.getBitmap(), surfKeyPoints);

//    std::cout <<"SURF Detector on img: " << in.getName() <<std::endl;
//    std::cout <<"   # of keypoints: " <<surfKeyPoints.size() <<std::endl;
//    return(surfKeyPoints);
}

