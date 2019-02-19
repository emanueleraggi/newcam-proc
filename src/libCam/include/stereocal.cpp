
#include "stereocal.h"
#include <sstream>

StereoCal::StereoCal()
{
    version=1;
    dataType="StereoCal";
}

void StereoCal::readFile(std::string filename){
    cv::FileStorage fs(filename, cv::FileStorage::READ);
    std::string data;
    int checkVersion;
    fs["dataType"] >> data;
    if(data==dataType){
        fs["version"] >> checkVersion;
        if(checkVersion==1){
            fs["reprojectionError"] >> reprojectionError;
            fs["cameraMatrixA"] >> cameraMatrixA;
            fs["cameraMatrixB"] >> cameraMatrixB;
            fs["distortionCoeffA"] >> distortionCoeffA;
            fs["distortionCoeffB"] >> distortionCoeffB;
            fs["rotation"] >> rotation;
            fs["translation"] >> translation;
            fs["essential"] >> essential;
            fs["fundamental"] >> fundamental;

            loaded = true;
        }
    }
    return;
}



void StereoCal::writeFile(std::string filename){
    cv::FileStorage fs(filename, cv::FileStorage::WRITE);
    fs << "dataType" << dataType;
    fs << "version" << version;
    fs << "reprojectionError" << reprojectionError;
    fs << "cameraMatrixA" << cameraMatrixA;
    fs << "cameraMatrixB" << cameraMatrixB;
    fs << "distortionCoeffA" << distortionCoeffA;
    fs << "distortionCoeffB" << distortionCoeffB;
    fs << "rotation" << rotation;
    fs << "translation" << translation;
    fs << "essential" << essential;
    fs << "fundamental" << fundamental;

    return;
}

// Rectification function
void StereoCal::rectifyImages(StereoImage in)
{
    std::cout << "Rectifying an image\n";
    cv::Mat rmap[2][2];

    cv::stereoRectify(cameraMatrixA, distortionCoeffA, cameraMatrixB, distortionCoeffB,
                     in.getA().getBitmap().size(),
                      rotation, translation, R1, R2, P1, P2, Q, CV_CALIB_ZERO_DISPARITY, 1, in.getA().getBitmap().size());
    cv::initUndistortRectifyMap(cameraMatrixA, distortionCoeffA, R1, P1, in.getA().getBitmap().size(), CV_16SC2, rmap[0][0], rmap[0][1]);
    cv::initUndistortRectifyMap(cameraMatrixB, distortionCoeffB, R2, P2, in.getA().getBitmap().size(), CV_16SC2, rmap[1][0], rmap[1][1]);

//    StereoImage rectifiedImgs;
    Image A, B;
    cv::remap(in.getA().getBitmap(), A.getBitmap(), rmap[0][0], rmap[0][1], cv::INTER_LINEAR);
    cv::remap(in.getB().getBitmap(), B.getBitmap(), rmap[1][0], rmap[1][1], cv::INTER_LINEAR);
    A.setName(in.getA().getName());
    B.setName(in.getB().getName());

    //A.toGrey();
    //B.toGrey();
//    rectifiedImgs.set(A, B);
    currentImages.set(A, B);
//    return rectifiedImgs;
}

StereoImage rectifySpectralImages(StereoImage in)
{
    // takes the already rectified images from CamL and CamR and compare them
    // with CamC
}

// XXX
//static inline int MAX(int x, int y){ return (x > y) ? x : y; }
//static inline int MIN(int x, int y){ return (x < y) ? x : y; }

///Search Operators:
//Find match for rectified image pairs
// Where I click automaticallt the region is set around the click.
// And the siz of the region is by default
BestMatch StereoCal::findMatchedRegion(QProgressBar* progress, QGraphicsRectItem* target, int u, int v, const std::string& imgPath, bool fullscreen, int interval){
    cv::Point updatedPoint=checkPoint(u, v);
    int xa = updatedPoint.x;
    int ya = updatedPoint.y;

    std::vector<double> errorVect;

    size_t x_start, x_end;

    if(fullscreen)
    {
        x_start = MAX(user_x_start-1, km);
        x_end   = MIN(user_x_end-1,   currentImages.getB().getBitmap().size().width-km);
    }
    else
    {
        x_start = xa-200;
        x_end = xa+interval-km;
    }

    if(progress != NULL)
        progress->setRange(x_start, x_end - 1);

    for(size_t i=x_start; i<x_end; i++){
        double error;
        // I am only changing x coordinate in B plot the error vector
        error=getError(xa, ya, i, ya);
        errorVect.push_back(error);
        std::cout<< i << std::endl;
        std::cout << currentImages.getB().getBitmap().size().width-km << std::endl;

        if(progress != NULL)
            progress->setValue(i);

        target->setPos(QPointF(i, target->pos().y()));
        QApplication::processEvents();

    }

    if(progress != NULL)
        progress->setValue(progress->value()+1);

    int best, errIndex;
    if(fullscreen)
    {
        best=getMin1D(errorVect, xa)+x_start;
        errIndex = best;
    }
    else
    {
        errIndex=getMin1D(errorVect, xa); /*+km*/ //+x_start;
        best = errIndex + (xa-200);
    }
    int disparity = xa-best;

    std::cout <<"  Best match position: " <<best<<std::endl;
    std::cout <<"  Best match value: " <<errorVect[errIndex]<<std::endl;
    std::cout <<"  Disparity: " <<disparity<<std::endl;

    cv::Point2f ptA, ptB;
    ptA.x=xa; ptA.y=ya;
    ptB.x=best; ptB.y=ya;
    std::vector<cv::Point2f> vA, nvA, vB, nvB;
    //std::vector<cv::Point2f> vA, vB;

    vA.push_back(ptA);vB.push_back(ptB);
    cropMatches(xa, ya, best, ya, imgPath);
    cv::Vec3d adjpoint = triangulatePoints(vA,vB);

    BestMatch returnMatch;
    returnMatch.best = best;
    returnMatch.errvec = errorVect[errIndex];
    returnMatch.disparity = disparity;
    returnMatch.fullError = errorVect;
    returnMatch.calculatedPoint = adjpoint;
    return returnMatch;
}

BestMatch StereoCal::findMatchedSpectralRegion(QProgressBar *progressSpectral, int u, int v)
{
    // find the matching region between CamC and the result of CamR
}


//Calculate SSD for pixel-centered regions
double StereoCal::getError(int xa, int ya, int xb /* xb is the only changing for now*/, int yb){
    double error=0.0;
    Image aT,bT;
    cv::Mat a,b;
    aT=currentImages.getA();
    if(aT.getBitmap().channels() > 2) {
        aT.toGrey();
    }
    // the underneath line represents the conversion to a float
    aT.getBitmap().convertTo(a, CV_32F);
    bT=currentImages.getB();
    if(bT.getBitmap().channels() > 2) {
        bT.toGrey();
    }
    bT.getBitmap().convertTo(b, CV_32F);

//    cv::Mat b=bT.getBitmap();

//    for(int c=0; c< currentI.getChansA().size(); c++){
    // This loop will convolve the images
        for (int kx = -km; kx <= km; kx++){
            for(int ky = -km; ky <= km; ky++){
                float tx = a.at<float>(ya+kx,xa+ky);
                float ty = b.at<float>(yb+kx,xb+ky);
                error += std::pow(tx-ty,2);
            }
        }
//    }
    return error;
}

// Min error along epipolar line
// this happens after we populate the errors: which menas find the
// minimum of the errors vector
int StereoCal::getMin1D(std::vector<double> vec, int x){
    int pos=0;
    double min = vec[0];
    for(int i=1; i< vec.size(); i++){
        if(vec[i]<min){
//            if(x-(i+km)<dispTol && x-(i+km)>0){
                pos=i;
                min =vec[i];
//            }
        }
    }
    return pos;
}

// to make sure the user is not clicking in a bad spot
// use the same philosophy for the bounding box
cv::Point StereoCal::checkPoint(int x, int y){
    cv::Point out;
    std::cout<<"x, y raw: "<<x<<", "<<y<<std::endl;
    if(x+km>currentImages.getA().getBitmap().size().width)
        x=currentImages.getA().getBitmap().size().width-km;
    if(y+km>currentImages.getA().getBitmap().size().height)
        y=currentImages.getA().getBitmap().size().height-km;
    if(x-km<0)
        x=km;
    if(y-km<0)
        y=km;
    out.x=x; out.y=y;
    //std::cout<<"x, y checked: "<<x<<", "<<y<<std::endl;
    return out;
}

void StereoCal::cropMatches(int xa, int ya, int xb, int yb, const std::string& pathImg){
    cv::Point ptA=cv::Point(xa, ya);
    cv::Point ptB=cv::Point(xb, yb);
    cv::Size sz;
    sz.height=regionSize;
    sz.width=regionSize;
    cv::Mat regionA, regionB;
    cv::getRectSubPix(currentImages.getA().get8Bitmap(),sz,ptA,regionA);
    cv::getRectSubPix(currentImages.getB().get8Bitmap(),sz,ptB,regionB);
    std::string outA = pathImg+"/cropA_"+std::to_string(counterA++)+".tiff";
    cv::imwrite(outA,regionA);
    std::string outB = pathImg+"/cropB_"+std::to_string(counterB++)+".tiff";
    cv::imwrite(outB,regionB);
}


// first triangulate points tp give xyz vector plus a conversion
cv::Vec3d StereoCal::triangulatePoints(std::vector<cv::Point2f> a, std::vector<cv::Point2f> b){
    cv::Mat triangulatedPts;
    cv::triangulatePoints(P1, P2, a, b, triangulatedPts);
    cv::Vec3d coords3D;
// this loop will give us xyz divided by the conversion factor
    for(int i=0; i<triangulatedPts.size().width;i++){
        cv::Vec4d triangCoords =  triangulatedPts.col(i);
        for (unsigned int j = 0; j < 3; j++) {
            coords3D[j] = triangCoords[j] / triangCoords[3];
            std::cout<<coords3D[j] <<std::endl; // depth is shown here
        }
    }
    return(coords3D);
}
