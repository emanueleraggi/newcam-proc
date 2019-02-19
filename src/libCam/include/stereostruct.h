#ifndef STEREOSTRUCT
#define STEREOSTRUCT

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/opencv.hpp>
#include "regions.h"

struct StereoContainer{
    std::vector<cv::KeyPoint> rawKeyPsA;
    std::vector<cv::KeyPoint> rawKeyPsB;
    std::vector<cv::KeyPoint> survKeyPsA;
    std::vector<cv::KeyPoint> survKeyPsB;

    cv::Mat rawDescriptorA;
    cv::Mat rawDescriptorB;
    cv::Mat survDescriptorA;
    cv::Mat survDescriptorB;

    std::vector<cv::DMatch> rawMatches;
    std::vector<cv::DMatch> survMatches;

    std::vector<cv::Point2f> pointsA;
    std::vector<cv::Point2f> pointsB;
    cv::Mat triangulatePs;
    std::vector<cv::Vec3d> pts3D;

    std::vector<int> assignROIA;
    std::vector<int> assignROIB;

    std::vector<std::vector<int>> assignContsA;
    std::vector<std::vector<int>> assignContsB;

    std::vector<std::vector<cv::Point>> contoursA;
    std::vector<std::vector<cv::Point>> contoursB;

    std::vector<cv::Vec4i> hierarchyA;
    std::vector<cv::Vec4i> hierarchyB;
    std::vector<int> uniqueID_A;
    std::vector<int> uniqueID_B;

    std::vector<ROI> regionsA;
    std::vector<ROI> regionsB;

    std::vector<cv::Point2f> rectAPts;
    std::vector<cv::Point2f> rectBPts;
    cv::Mat rectTriangulatedPts;
    std::vector<cv::Vec3d> rectPts3D;
};

#endif // STEREOSTRUCT
