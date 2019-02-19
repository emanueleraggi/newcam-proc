#ifndef STEREOCAL_H
#define STEREOCAL_H

#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "include/abstractdata.h"
#include "stereoimage.h"
#include "stereolist.h"
#include <QProgressBar>
#include <QGraphicsRectItem>
#include <QApplication>

typedef struct BestMatch
{
    double best, errvec, disparity;
    std::vector<double> fullError;
    cv::Vec3d calculatedPoint;
} BestMatch;


typedef struct BestMatchRight
{
    double bestRight, disparityRight, errvectRight;
} BestMatchRight;


class StereoCal : public AbstractData
{
public:
    StereoCal();
    void readFile(std::string filename);
    void writeFile(std::string filename);
    float reprojectionError;
    cv::Mat cameraMatrixA;
    cv::Mat cameraMatrixB;
    cv::Mat distortionCoeffA;
    cv::Mat distortionCoeffB;
    cv::Mat rotation;
    cv::Mat translation;
    cv::Mat essential;
    cv::Mat fundamental;
    cv::Mat R1, R2, P1, P2, Q;

    // this function is used for the point click
    // When the box is introduced the ky
    void setRegionSize(int sz){regionSize=sz; km = (regionSize-1)/2;}
    StereoImage getRectImages(){return currentImages;}

    StereoImage rectifySpectralImages(StereoImage in);

    void rectifyImages(StereoImage in);

    BestMatch findMatchedRegion(QProgressBar* progress, QGraphicsRectItem* target, int u, int v, const std::string& imgPath, bool fullscreen, int interval);

    BestMatch findMatchedSpectralRegion(QProgressBar* progressSpectral, int u, int v);

    //    /* get error represents the calculation of SSD for pixel-centered regions
    //     * and will be useful getting the best match
    //     * */
        double getError(int xa, int ya, int xb, int yb);

    //    /* findMatchedRegion represents the function that
    //     * Find match for rectified image pairs
    //    */
    //    int findMatchedRegion(int xa, int ya);

        void cropMatches(int xa, int ya, int xb, int yb, const std::string& path);

    //    /* getMin1D represent the Min error along epipolar line
    //     * therfore is needed for reducing computation efforts
    //     */
        int getMin1D(std::vector<double> vec, int x);

    //    /* this function will Click selected pixel
    //     * */
//        void runClick();
//        static void CallBackFunc(int event, int x, int y, int, void *ptr);

        cv::Point checkPoint(int x, int y);

        cv::Vec3d triangulatePoints(std::vector<cv::Point2f>  a, std::vector<cv::Point2f>  b);

    //    /* We will draw the disparity map with this function
    //     * */
    //    void drawDisparityMap(StereoImage img);

    //    MatchData getMinError(std::vector<std::vector<double> >vec, int xtol);
    //    MatchData getBestMatch();

        cv::Point clickPoint;

        void clearCount() {counterA = counterB = 0; }

    private:
        std::vector<std::vector<int> > disparityMap;
    //    /// \denseMatches
    //    /// \remove from stereoCal?
    //    std::vector<std::vector<MatchData> > denseMatches;
        std::vector<cv::Mat> imgAChans;
        std::vector<cv::Mat> imgBChans;
        int regionSize;
        int km;

        int counterA=0;
        int counterB=0;

        // 1-based (top left =>(1, 1))
        int user_x_start;
        int user_x_end;

     public:
        // FIXME call this
        // get the value from the spin boxes
        inline void controlXY(int new_x_start, int new_x_end)
        {
            user_x_start = new_x_start;
            user_x_end   = new_x_end;
        }





        StereoImage currentImages;

};

#endif // STEREOCAL_H
