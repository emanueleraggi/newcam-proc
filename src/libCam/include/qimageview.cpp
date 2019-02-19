#include "qimageview.h"
#include <QGraphicsPathItem>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <QWheelEvent>

#include <opencv2/imgproc/imgproc.hpp>

QImage cvMat2QImage(cv::Mat image)
{
  // Convert the image to the RGB888 format
  cv::Mat image_display;
  switch (image.type())
  {
    case CV_8UC1:
      cvtColor(image, image_display, CV_GRAY2RGB);
      break;
    case CV_8UC3:
      cvtColor(image, image_display, CV_BGR2RGB);
      break;
  }
  // QImage needs the data to be stored continuously in memory
  assert(image_display.isContinuous());
  // Assign OpenCV's image buffer to the QImage. Note that the bytesPerLine parameter
  // (http://qt-project.org/doc/qt-4.8/qimage.html#QImage-6) is 3*width because each pixel
  // has three bytes.
  return QImage(image_display.data, image_display.cols, image_display.rows, image_display.cols * 3,
                QImage::Format_RGB888)
      .copy();
}

QPixmap cvMat2QPixmap(cv::Mat image)
{
  return QPixmap::fromImage(cvMat2QImage(image)).copy();
}

QImageView::QImageView(QWidget *parent) : QGraphicsView(parent)
{
  setUp();
}
QImageView::QImageView(QGraphicsScene *scene, QWidget *parent) : QGraphicsView(scene, parent)
{
  setUp();
}

void QImageView::setUp()
{
  setMouseTracking(true);
  setDragMode(QGraphicsView::ScrollHandDrag);

  // Create display for the left imageview
  scene_ = new QGraphicsScene();
  item_ = new QGraphicsPixmapItem();
  setScene(scene_);
  scene_->setBackgroundBrush(QBrush(Qt::gray, Qt::SolidPattern));
  scene_->addItem(item_);
}

void QImageView::wheelEvent(QWheelEvent *event)
{
  // if ctrl pressed, use original functionality
  if (event->modifiers() & Qt::ControlModifier)
    QGraphicsView::wheelEvent(event);
  // otherwise, do yours
  else
  {
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    if (event->delta() > 0)
      scale(1.1, 1.1);
    else
      scale(0.9, 0.9);
  }
}

void QImageView::displayCvMat(cv::Mat image)
{
  // Add to scene
  item_->setPixmap(cvMat2QPixmap(image));
}

void QImageView::displayImage(Image img){
    displayCvMat(img.get8Bitmap());
}

void QImageView::fitInView()
{
  QGraphicsView::fitInView(scene_->sceneRect(), Qt::KeepAspectRatio);
}

void QImageView::mouseReleaseEvent(QMouseEvent* event)
{
    QGraphicsView::mouseReleaseEvent(event);
    emit clickedPoint(mapToScene(event->pos()));
}
