#ifndef CAMERACAL_H
#define CAMERACAL_H

#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "stdlib.h"
#include "include/abstractdata.h"
#include "image.h"

class CameraCal : public AbstractData
{
public:
    CameraCal();
    void readFile(std::string filename);
    void writeFile(std::string filename);
    void undistortPoints(cv::Mat &input,cv::Mat &output);
    void undistortPoints(const std::vector<float> &uIn, const std::vector<float> &vIn,std::vector<float> &uOut, std::vector<float> &vOut);
    void undistortPoints(const std::vector<float> &uIn, const std::vector<float> &vIn,cv::Mat &output);
    cv::Mat undistortMat(cv::Mat &in);
    Image undistortImage(Image &in);
    void cam2world(cv::Mat &inputPoints, cv::Mat &outputPoints);


    /*
     * data members
     */
    std::string cameraName;
    double reporjectionError;
    cv::Mat cameraMatrix;
    cv::Mat distCoeffs;
    double fovx;
    double fovy;
    double focalLength;
    cv::Point2d principalPoint;
};

#endif // CAMERACAL_H
