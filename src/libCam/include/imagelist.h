#ifndef IMAGELIST_H
#define IMAGELIST_H

#include "image.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "stdlib.h"
#include <opencv2/opencv.hpp>
#include "boost/filesystem.hpp"
#include <boost/algorithm/string.hpp>
#include <queue>
#include <algorithm>
#include <mutex>
#include <memory>


template <class T>
class ImageList
{
public:
    typedef std::shared_ptr<ImageList> Ptr;
    typedef std::shared_ptr<const ImageList> ConstPtr;

    ImageList();

    //
    // setup stuff
    //
    void setReadOnly(bool x);
    void setName(std::string name);
    void setSaveDir(boost::filesystem::path p);
    bool addImage(cv::Mat img);                          // adds image to end of the list
    bool addImage(cv::Mat img, unsigned int index);      // adds and image at the index
    bool addImageFromFile(std::string fName,ColorSpace cs=BGR);            // returns true if successfull
    bool addImagesFromDir(boost::filesystem::path p,ColorSpace cs=BGR);    // add all the images in a directory
    //bool addImagesFromDir(std::string p,ColorSpace cs=BGR);

    void loadAll();                                      // this function will load all images into memory after their path has been set  (this will change the buffer size)
    size_t size() const;
    T & getImage(unsigned int index);                   // if image is unavailable the image with the nearest index will be returned and error thrown
    T & getImage();
    std::shared_ptr<ImageList<T>> getSubList(size_t begin, size_t end);
    T & operator[](unsigned int index);                 // overloading [] operator.  Used to access the list of images
    unsigned int & getIndex();
    void setIndex(unsigned int i){_selectedIndex=i;}
    bool nextImage();
    bool prevImage();
    void resize(size_t size);
    void save(std::string dir);
    void save();
    void saveBuffer();                  // this function will only save images that are currently buffered!
    void clear();
    void pushBack(Image img,std::string name="untitled.tif");
    void setBufferSize(size_t size);


    ImageList<T>& operator=(const ImageList &other);


private:
    void addToBuffer(unsigned int index);
    std::vector<std::shared_ptr<T> > _list;                                // the actual list of images
    std::string _name;                                   // the name of the list
    unsigned int _selectedIndex;                         // used for QT.   Allows you to tell what image is selected by qt images viewers
    boost::filesystem::path _saveDir;
    std::deque<unsigned int> _buffer;
    size_t _bufferSize;
    bool _readOnly;
    std::mutex mtx;

};

#endif // IMAGELIST_H
