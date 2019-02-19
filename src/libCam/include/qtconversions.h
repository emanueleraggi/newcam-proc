#ifndef QTCONVERSIONS_H
#define QTCONVERSIONS_H

#include <../libCam/include/image.h>
#include <QLabel>

namespace libcam {
    namespace qtconversions {
        /*!
         * \brief Converts a cv::Mat to a QImage
         * \param src a cv::Mat
         * \return QImage corresponding to your src Mat
         */
        QImage mat2QImage(cv::Mat const& src);
        /*!
         * \brief Converts a libcam Image to a QPixmap
         * \param src an Image that you wish to convert
         * \return a QPixmap corresponding to your src Image
         */
        QPixmap image2QPixmap(Image & src);
        /*!
         * \brief Converts a cv::Mat to a QPixmap
         * \param src a cv:Mat that you wish to convert
         * \return a QPixmap corresponding to your src image
         */
        QPixmap mat2QPixmap(const cv::Mat &src);
    }
}


#endif
