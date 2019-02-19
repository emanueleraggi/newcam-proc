#ifndef QIMAGEVIEW_H
#define QIMAGEVIEW_H

// Qt Includes
#include <QGraphicsView>
#include <QtUiPlugin/QDesignerExportWidget>
#include <../libCam/include/image.h>
#include "../detector/src/ggraphicsview.h"


// OpenCV Includes
#include <opencv2/core.hpp>

/*!
 * \ingroup Ui
 * \brief The QImageView class
 */
class QDESIGNER_WIDGET_EXPORT QImageView : public QGraphicsView
{
  Q_OBJECT
public:
  /*!
   * \brief Constructor
   * \param parent
   */
  QImageView(QWidget* parent = nullptr);

  /*!
   * \brief Constructor
   * \param scene
   * \param parent
   */
  QImageView(QGraphicsScene* scene, QWidget* parent = nullptr);

  /*!
   * \brief Sets up the environment
   */
  void setUp();

signals:

  void clickedPoint(QPointF point);

public slots:

  /*!
   * \brief Displays a new cv::Mat
   * \param img image
   */
  void displayCvMat(cv::Mat img);

  void displayImage(Image img);

  /*!
   * \brief Forces the image to occupy all the view
   */
  void fitInView();

protected:
  /*!
   * \brief Zoom effect
   * \param event
   */
  virtual void wheelEvent(QWheelEvent* event);

  virtual void mouseReleaseEvent(QMouseEvent* event);

  /*!
   * \brief Internal scene
   */
  QGraphicsScene* scene_;

  /*!
   * \brief Internal image to display
   */
  QGraphicsPixmapItem* item_;
};

#endif  // QIMAGEVIEW_H
