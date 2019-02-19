#include "cameracal.h"

CameraCal::CameraCal()
{
    dataType="CameraCal";
    version=2;
}

void CameraCal::readFile(std::string filename){
    cv::FileStorage fs(filename, cv::FileStorage::READ);
    std::string data;
    int checkVersion;
    fs["dataType"] >> data;
    if(data==dataType){
        fs["version"] >> checkVersion;
        if(checkVersion==2){
            fs["cameraName"] >> cameraName;
            fs["cameraMatrix"] >> cameraMatrix;
            fs["distCoeffs"] >> distCoeffs;
            fs["fovx"] >> fovx;
            fs["fovy"] >> fovy;
            fs["focalLenghth"]  >> focalLength;
            fs["reporjectionError"]  >> reporjectionError;
            fs["principalPoint"] >> principalPoint;
            loaded = true;
        }
    }
    return;
}

void CameraCal::writeFile(std::string filename){
    cv::FileStorage fs(filename, cv::FileStorage::WRITE);
    fs << "dataType" << dataType;
    fs << "version" << version;
    fs << "cameraName" << cameraName;
    fs << "cameraMatrix" << cameraMatrix;
    fs << "distCoeffs" << distCoeffs;
    fs << "fovx" << fovx;
    fs << "fovy" << fovy;
    fs << "focalLenghth" << focalLength;
    fs << "reporjectionError" << reporjectionError;
    fs << "principalPoint" << principalPoint;

    return;
}

void CameraCal::undistortPoints(cv::Mat &input, cv::Mat &output){
    cv::undistortPoints(input, output, cameraMatrix, distCoeffs, cv::noArray(), cameraMatrix);
}

void CameraCal::undistortPoints(const std::vector<float> &uIn, const std::vector<float> &vIn, std::vector<float> &uOut, std::vector<float> &vOut){
    cv::Mat_<cv::Point2f> input(1,uIn.size());
    for(size_t i=0;i < uIn.size();i++){
        input(i) = cv::Point2f(uIn[i],vIn[i]);
    }
    cv::Mat output;
    cv::Point2f outPoint;

    undistortPoints(input,output);
    //cv::undistortPoints(input,output,cameraMatrix,distCoeffs, cv::noArray(), cameraMatrix);  //
    uOut.clear();
    vOut.clear();
    for(size_t i=0;i < uIn.size();i++){
        outPoint = output.at<cv::Point2f>(0,i);

        uOut.push_back(outPoint.x);
        vOut.push_back(outPoint.y);
    }

    return;
}

void CameraCal::undistortPoints(const std::vector<float> &uIn, const std::vector<float> &vIn, cv::Mat &output){
    cv::Mat_<cv::Point2f> input(1,uIn.size());
    for(size_t i=0;i < uIn.size();i++){
        input(i) = cv::Point2f(uIn[i],vIn[i]);
    }
    //std::cout<<input<<std::endl;
    undistortPoints(input,output);

    return;
}

cv::Mat CameraCal::undistortMat(cv::Mat &in){
    cv::Mat out;
    if(loaded){
        undistort(in, out, cameraMatrix, distCoeffs);
    }
    else{
        std::cerr << "undistortMat: no camera cal loaded, can't undistort" <<std::endl;
        out=in;
    }
    return(out);
}

Image CameraCal::undistortImage(Image &in){
    Image out;
    out.getBitmap()=undistortMat(in.getBitmap());
    return(out);
}


void CameraCal::cam2world(cv::Mat &inputPoints, cv::Mat &outputPoints){
    cv::Mat_<cv::Point3f> out(1,inputPoints.size().width);
    outputPoints=out;
    for(int i=0;i < inputPoints.size().width;i++){
        cv::Mat inv = cameraMatrix.inv();
        cv::Point2f inPoint=inputPoints.at<cv::Point2f>(0,i);
        cv::Mat pNorm=(cv::Mat_<double>(3, 1) << inPoint.x, inPoint.y, 1);
        pNorm=inv*pNorm;
        cv::Point3f outPoint(pNorm.at<double>(0,0),pNorm.at<double>(0,1),pNorm.at<double>(0,2));
        out.at<cv::Point3f>(0,i)=outPoint;

    }
    //std::cout << out << std::endl;
    outputPoints=out;
    return;
}


