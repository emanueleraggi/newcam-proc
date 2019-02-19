#ifndef IMAGE_H
#define IMAGE_H


#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "stdlib.h"
#include <stdexcept>
#include "abstractdata.h"
#include "prosilicaDrvTags.h"
#include <boost/filesystem.hpp>
#include <thread>
#include <mutex>
#include <ctime>
#include <tiffio.h>
#include <atomic>
#include "boost/date_time/posix_time/posix_time.hpp"
#include <stdexcept>
#include "../detector/src/dataleftcamera.h"


#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QObject>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlRecord>
#include <QDebug>
#include <QMessageBox>
#include <QStringList>
#include <QSqlDatabase>


///
/// \brief the colorspace options for Image
///
enum ColorSpace{BGR,Grey,RGB,HSV};

class Image: public AbstractData{
public:
    Image();
    ~Image(){return;}
    void initialize(ColorSpace cs);
    void setReadOnly(bool x){_readOnly=x;}
    bool setBitmap(cv::Mat bmp);           // sets the image data via a Deep Copy
    bool readFromFile(std::string fName,ColorSpace cs=BGR);  // true if success
    bool readFromFile(boost::filesystem::path filePath,ColorSpace cs=BGR);

    /*!
     * \brief set the parameters for the image so that I can find it in the DB
     * \brief basically the columns field values
     * \return true if success
     * \todo implement this
     */
    //bool readFromDB(QDir imgDir);

    cv::Mat & getBitmap();                 // returns the image data
    cv::Mat get8Bitmap();                  // returns a COPY of the bitmap in 8 bits
    cv::Mat get16Bitmap();                 // returns a COPY of the bitmap in 16 bits
    /// \brief loads stored filename into memory.   Will NOT reload if image was already loaded
    bool load();

    /*!
     * \brief populates the _bitmap
     * \return
     * \todo Implement
     */
    bool loadFromDB();
    bool loadFromFile();

    void unload();

    void save();
    void saveToDB();
    void saveToFile();
    boost::filesystem::path getLoadPath(){return _loadPath;}
    boost::filesystem::path getSavePath(){std::lock_guard<std::mutex> lock(mtx); return _savePath;}


    void setSavePath(boost::filesystem::path p){mtx.lock();_savePath=p;mtx.unlock();}

    void setSaveDBParam(/* params that specify where we should save to DB */);

    std::string getName() const;
    unsigned long/*void*/ getUTime();

    void setName(std::string str);
    cv::Mat generateHist();
    void displayHist(std::string windowName);

    std::vector<std::string> & getChannels();
    Image getCopy();
    bool isLoaded();

    void to8Bit();


    /*
     * colorspace changes
     */
    void toGrey();
    void toBGR();
    void toRGB();
    void toHSV();
    void to8BitGrey();

    ColorSpace & getColorSpace() {return _colorSpace;}

    /*
     * operators and copy
     */

//    Image(Image&& other);
    Image(const Image& other);
    Image& operator=(const Image &other);
    bool operator <(Image const & rhs) const{
        return _name < rhs._name;
    }
    /// \brief the values pulled from the proscillica tifftags
    /// \todo  all this stuff in the db
    struct TiffTag_t{
            bool loaded;  ///>  is the tifftag loaded or not
            u_int32_t binX;
            u_int32_t binY;
            u_int32_t exposureVal;
            float framerate;
            u_int32_t gainVal;
            u_int32_t offsetX;
            u_int32_t offsetY;
    };

    TiffTag_t getTiffTag();

    time_t time(){return _imgTime;}
    long double imgFloatTime(){return _imgFloatTime;}

    virtual void onFileSet(){return;}


    /*
     * Override abstract data members
     */

    virtual void writeDB(std::string table, QSqlDatabase mDatabase, leftCamParameters *leftCamItem);
    virtual QStringList readDBTables(QSqlDatabase mDatabase);
    virtual std::string getDBTableDescription(QSqlDatabase mDatabase);


    // New template for the detector
//    virtual void writeToDBDetector(std::string table, QSqlDatabase mDatabase);
//    virtual void readFromDBDetector(QSqlDatabase mDatabase);
//    virtual std::string getDetectorTableDescription(QSqlDatabase mDatabase);



protected:
    std::mutex _childMutex;
    std::mutex mtx;
    ColorSpace _colorSpace;  //

    void parseTime();
    void readTiffTags();
    std::vector<std::string> _channels;
    //ColorSpace _colorSpace;
    cv::Mat _bitmap;
    bool _preLoadOn;
    std::string _name;
    std::string _filename;
    boost::filesystem::path _loadPath;  ///< the location were we load the image when needed
    boost::filesystem::path _savePath;  ///< the location where the image will be saved when save is called or when an image is cleared from the buffer
    std::string _fileType;

    bool _readOnly;
    time_t _imgTime;  ///< ctime the image was taken
    long double _imgFloatTime;  ///< time the image was taken as a double (stored in DB)
    unsigned int _imageNum;  ///< image id
    TiffTag_t _tiffTag;  ///< metadata stored in tiff tags of image









};

#endif // IMAGE_H
