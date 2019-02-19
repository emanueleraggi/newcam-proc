#ifndef REGIONS
#define REGIONS

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/opencv.hpp>

struct ROI{
    int ID;
    std::vector<int> matchID;

    std::vector<cv::KeyPoint> kpsA;
    std::vector<cv::KeyPoint> kpsB;
    std::vector<cv::DMatch> matches;

    std::vector<cv::Point2f> points;
    std::vector<cv::Point2f> matchPt;
    std::vector<cv::Vec3d> points3D;

    std::vector<cv::Point> contour;
    std::vector<cv::Point> matchContour;
    cv::Vec4i hierarchy;
    cv::Vec4i matchHierarchy;

    double area;
    double matchArea;
    cv::Moments moments;
    cv::Moments matchMoments;
    double contMatchStregth;

    cv::Rect rectA;
    cv::Rect rectB;
};

#endif // REGIONS
