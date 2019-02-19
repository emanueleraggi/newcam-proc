#include "image.h"
#include "../detector/src/dataleftcamera.h"
#include "../detector/src/leftcamparameters.h"

Image::Image()
{
    std::lock_guard<std::mutex> lock(mtx);
    _name="untitled.tif";
    _preLoadOn=false;
    _readOnly=false;
    _tiffTag.loaded=false;
    version=1;
}

///
/// \brief initialize an image with a specified ColorSpace
/// \param cs the ColorSpace you wish to set
///
void Image::initialize(ColorSpace cs){
    _colorSpace=cs;
}

///
/// \brief Load an image from a file on disk
/// \param fName std::string specifying the filename
/// \param cs the colorspace you wish to initialize
/// \return
///
bool Image::readFromFile(std::string fName, ColorSpace cs){
    boost::filesystem::path path(fName);
    return readFromFile(path,cs);

}

///
/// \brief Load an image from a file on disk
/// \param filePath the filepath in the form of a boost::filesystem::path
/// \param cs the ColorSpace you wish to use
/// \return
///
bool Image::readFromFile(boost::filesystem::path filePath, ColorSpace cs){
    initialize(cs);
    _loadPath=filePath;
    //_filename=getLoadPath().filename();
    _name=filePath.filename().string();
    parseTime();
    //readTiffTags();
    onFileSet();
    if(_preLoadOn){
        return load();
    }
    else{
        return true;
    }

}

//bool Image::readFromDB(QDir imgDir)
//{
//}

/// \brief Set the bitmap of the Image
/// \param cv::Mat that that you want to set as your bitmap
/// \return
///
bool Image::setBitmap(cv::Mat bmp){
    std::lock_guard<std::mutex> lock(mtx);
    bmp.copyTo(_bitmap);
    if(!_bitmap.data)
        std::cerr << "unable to read image" << std::endl;
    return _bitmap.data;
}

///
/// \brief loads a an image into RAM
/// \return true if operation was successfull
///
bool Image::load(){
    if(isLoaded()){
        return true;
    }
    else{
        if(!loadFromFile()){
            return false;
        }

//        if(!loadFromDB()){
//            return false;
//        }
    }

    //
    // We have to load as BGR then convert to the proper color space
    //if we load directly as anything other than BGR we see weird
    // artifacts in the image
    //
    if(_colorSpace==Grey)
        cvtColor(getBitmap(), getBitmap(),CV_BGR2GRAY);
    if(_colorSpace==RGB)
        cvtColor(getBitmap(), getBitmap(),CV_BGR2RGB);
    if(_colorSpace==HSV)
        cvtColor(getBitmap(), getBitmap(),CV_BGR2HSV);
    return true;
}

bool Image::loadFromFile(){

        std::string str;
        boost::filesystem::path saveP(_savePath.string()+"/"+getName());
        if(boost::filesystem::exists( saveP )){
            str =saveP.string();
        }
        else if(boost::filesystem::exists( _loadPath )){
            str =_loadPath.string();
        }
        else{
//            std::cerr << "No filename set, can not load " <<  std::endl;
            return false;
        }
        _bitmap=cv::imread(str,CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_COLOR);


        if(!_bitmap.data){
            std::cerr << "unable to read " << str << std::endl;
            return false;
        }

        return true;
}

///
/// \brief Removes an image from RAM and stores (caches) it to the _savePath.
///
/// \note NOTE: this function will not save if the image is read only!
///
void Image::unload(){
    save();
    std::lock_guard<std::mutex> lock(mtx);
    _bitmap.release();
    return;
}

///
/// \brief save an image to the save path set by Image::setSavePath
///
void Image::save(){
    if(!_readOnly){
        load();
        std::lock_guard<std::mutex> lock(mtx);

        saveToFile();
        // saveToDB();
    }
}

void Image::saveToFile(){
    if(!boost::filesystem::exists(_savePath)){
        boost::filesystem::create_directory(_savePath);
    }

    std::string fname =_savePath.string()+"/"+getName();
    if(_bitmap.data){
        cv::imwrite( fname, _bitmap );
    }
}


cv::Mat & Image::getBitmap(){
    load();
    return _bitmap;
}

cv::Mat Image::get8Bitmap(){
    std::lock_guard<std::mutex> lock(mtx);
    cv::Mat output;
    if(getBitmap().depth()==CV_16U){
        getBitmap().convertTo(output, CV_8U, 0.00390625);
    }
    else{
        getBitmap().copyTo(output);
    }
    return output;
}

cv::Mat Image::get16Bitmap(){
    //std::lock_guard<std::mutex> lock(mtx);
    cv::Mat output;
    if(getBitmap().depth()==CV_8U){
        getBitmap().convertTo(output, CV_16U, 255);
    }
    else{
        getBitmap().copyTo(output);
    }
    return output;
}

/*
const cv::Mat & Image::getBitmap() const{
    if(!_isLoaded)
        load();
    return _bitmap;
}
*/
//boost::filesystem::path &Image::getFilePath(){
//    //std::lock_guard<std::mutex> lock(mtx);
//    return _filePath;
//}




std::string Image::getName() const{
    return _name;
}

void Image::setName(std::string str){
    std::lock_guard<std::mutex> lock(mtx);
    if(_name=="untitled"){
        std::string test;
    }
    _name=str;
}

///
/// \brief This function returns a Histogram inf the form of a cv::Mat
/// \return the cv::Mat histogram
///
cv::Mat Image::generateHist(){
    cv::Mat src;
    src=get8Bitmap();
    std::lock_guard<std::mutex> lock(mtx);
    // Load image

    // Separate the image in 3 places ( B, G and R )
    std::vector<cv::Mat> bgr_planes;
    cv::split( src, bgr_planes );

    // Establish the number of bins
    int histSize = 256;

    // Set the ranges ( for B,G,R) )
    float range[] = { 0, 256 } ;
    const float* histRange = { range };

    bool uniform = true; bool accumulate = false;

    cv::Mat b_hist, g_hist, r_hist;

    // Compute the histograms:
    cv::calcHist( &bgr_planes[0], 1, 0, cv::Mat(), b_hist, 1, &histSize, &histRange, uniform, accumulate );
    cv::calcHist( &bgr_planes[1], 1, 0, cv::Mat(), g_hist, 1, &histSize, &histRange, uniform, accumulate );
    cv::calcHist( &bgr_planes[2], 1, 0, cv::Mat(), r_hist, 1, &histSize, &histRange, uniform, accumulate );

    // Draw the histograms for B, G and R
    int hist_w = 512; int hist_h = 400;
    int bin_w = cvRound( (double) hist_w/histSize );

    cv::Mat histImage( hist_h, hist_w, CV_8UC3, cv::Scalar( 0,0,0) );

    // Normalize the result to [ 0, histImage.rows ]
    cv::normalize(b_hist, b_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat() );
    cv::normalize(g_hist, g_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat() );
    cv::normalize(r_hist, r_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat() );

    // Draw for each channel
    for( int i = 1; i < histSize; i++ )
    {
      cv::line( histImage, cv::Point( bin_w*(i-1), hist_h - cvRound(b_hist.at<float>(i-1)) ) ,
                       cv::Point( bin_w*(i), hist_h - cvRound(b_hist.at<float>(i)) ),
                       cv::Scalar( 255, 0, 0), 2, 8, 0  );
      cv::line( histImage, cv::Point( bin_w*(i-1), hist_h - cvRound(g_hist.at<float>(i-1)) ) ,
                       cv::Point( bin_w*(i), hist_h - cvRound(g_hist.at<float>(i)) ),
                       cv::Scalar( 0, 255, 0), 2, 8, 0  );
      cv::line( histImage, cv::Point( bin_w*(i-1), hist_h - cvRound(r_hist.at<float>(i-1)) ) ,
                       cv::Point( bin_w*(i), hist_h - cvRound(r_hist.at<float>(i)) ),
                       cv::Scalar( 0, 0, 255), 2, 8, 0  );
    }

    return histImage;
}

void Image::displayHist(std::string windowName){
    //std::lock_guard<std::mutex> lock(mtx);
    cv::namedWindow(windowName, CV_WINDOW_AUTOSIZE );
    cv::imshow(windowName, generateHist() );
}



std::vector<std::string> & Image::getChannels(){
    std::lock_guard<std::mutex> lock(mtx);
    switch(_colorSpace){
        case BGR:
        _channels.clear();
        _channels.push_back("blue");
        _channels.push_back("green");
        _channels.push_back("red");
        break;
    case RGB:
            _channels.clear();
            _channels.push_back("red");
            _channels.push_back("green");
            _channels.push_back("blue");
            break;
    case Grey:
            _channels.clear();
            _channels.push_back("Grey");
            break;
    case HSV:
            _channels.clear();
            _channels.push_back("hue");
            _channels.push_back("saturation");
            _channels.push_back("balance");
    }
    return _channels;
}

Image Image::getCopy(){
    std::lock_guard<std::mutex> lock(mtx);
    Image out=*this;
    Image out2=out;
    return out;
}

bool Image::isLoaded(){
    return _bitmap.data;
}


void Image::toGrey(){
    std::lock_guard<std::mutex> lock(mtx);
    switch(_colorSpace){
        case BGR: cvtColor(getBitmap(), getBitmap(),CV_BGR2GRAY); break;
        case RGB: cvtColor(getBitmap(), getBitmap(),CV_RGB2GRAY); break;
        case HSV:{
            cvtColor(getBitmap(), getBitmap(),CV_HSV2BGR);
            cvtColor(getBitmap(), getBitmap(),CV_BGR2GRAY);
        } break;
    }

    _colorSpace=Grey;
}

void Image::toBGR(){
    std::lock_guard<std::mutex> lock(mtx);
    switch(_colorSpace){
        case Grey: cvtColor(getBitmap(), getBitmap(),CV_GRAY2BGR); break;
        case RGB: cvtColor(getBitmap(), getBitmap(),CV_RGB2BGR);break;
        case HSV: cvtColor(getBitmap(), getBitmap(),CV_HSV2BGR);break;
    }

    _colorSpace=BGR;
}

void Image::toRGB(){
    int test1=getBitmap().depth();
    int test2=CV_16U;

    switch(_colorSpace){
        case BGR: cvtColor(getBitmap(), getBitmap(),CV_BGR2RGB);break;
        case Grey: cvtColor(getBitmap(), getBitmap(),CV_GRAY2RGB);break;
        case HSV: cvtColor(getBitmap(), getBitmap(),CV_HSV2RGB);break;
    }
    _colorSpace=RGB;

}

void Image::toHSV(){
    std::lock_guard<std::mutex> lock(mtx);
    switch(_colorSpace){

        case BGR: cvtColor(getBitmap(), getBitmap(),CV_BGR2HSV); break;
        case Grey: {
            cvtColor(getBitmap(), getBitmap(),CV_GRAY2RGB);
            cvtColor(getBitmap(), getBitmap(),CV_RGB2HSV);
        }break;
        case RGB: cvtColor(getBitmap(), getBitmap(),CV_RGB2HSV);break;

    }
    _colorSpace=HSV;
}

void Image::to8Bit(){
    int test=getBitmap().depth();
    if(getBitmap().depth()==CV_16U){
        getBitmap().convertTo(getBitmap(), CV_8U, 0.00390625);
    }

}

/*
 * operators
 */

//Image::Image(Image&& other) {
//    std::lock_guard<std::mutex> lock(other.mtx);
////    value = std::move(other.value);
////    other.value = 0;
//}

Image::Image(const Image& other) {
    //std::lock_guard<std::mutex> lock(other.mtx);
    other._bitmap.copyTo(_bitmap);
    _preLoadOn=other._preLoadOn;
    _name=other._name;
    _loadPath=other._loadPath;
    _colorSpace=other._colorSpace;
    _channels=other._channels;
    _readOnly=other._readOnly;
    _imgTime=other._imgTime;
    _imgFloatTime=other._imgFloatTime;
    _imageNum=other._imageNum;
    _tiffTag=other._tiffTag;
}

Image& Image::operator =(const Image& other){

    //std::lock(mtx, other.mtx);
    //std::lock_guard<std::mutex> self_lock(mtx);
    //std::lock_guard<std::mutex> other_lock(other.mtx);


    other._bitmap.copyTo(_bitmap);
    _preLoadOn=other._preLoadOn;
    _name=other._name;
    _loadPath=other._loadPath;
    _colorSpace=other._colorSpace;
    _channels=other._channels;
    _readOnly=other._readOnly;
    _imgTime=other._imgTime;
    _imgFloatTime=other._imgFloatTime;
    _imageNum=other._imageNum;
    _tiffTag=other._tiffTag;

    return *this;

}

void Image::parseTime(){

    std::tm captureTime;
    std::string str = _loadPath.filename().stem().string();
    std::string parseString;
    unsigned int  idx;
    idx=str.find("-20")+1;
    parseString = str.substr(idx);

    int len=parseString.length();

    if(len>23){
        captureTime.tm_year= std::stoi(parseString.substr(0,4))-1900;
        captureTime.tm_mon=std::stoi(parseString.substr(4,2))-1;
        captureTime.tm_mday=  std::stoi(parseString.substr(6,2));

        parseString = parseString.substr(parseString.find("-") + 1);
        captureTime.tm_hour=std::stoi(parseString.substr(0,2));
        captureTime.tm_min= std::stoi(parseString.substr(2,2));
        captureTime.tm_sec= std::stoi(parseString.substr(4));

        captureTime.tm_gmtoff=0;
        captureTime.tm_zone="GMT";

        parseString = parseString.substr(parseString.find("-") + 1);
        double miliSec=std::stof(parseString.substr(0,6))*pow(10,-6);

        parseString = parseString.substr(parseString.find("-") + 1);
        _imageNum=std::stoi(parseString);

        _imgTime=timegm(&captureTime);
        long double floatTime=_imgTime;
        _imgFloatTime=floatTime+miliSec;
    }
    else{
      std::cerr << "[Error] image time failed to parse" << std::endl;
      return;
    }


    return;
}


unsigned long/*void*/ Image::getUTime(){
    std::string ts = _loadPath.filename().stem().string();

    ts = ts.substr(ts.find("-2")+1);
    std::string year=ts.substr(0,4);
    std::string month= ts.substr(4,2).c_str();
    std::string day=ts.substr(6,2).c_str();
    ts = ts.substr(ts.find("-") + 1);
    std::string hour=ts.substr(0,2).c_str();
    std::string min=ts.substr(2,2).c_str();
    std::string sec=ts.substr(4,2).c_str();
    ts = ts.substr(ts.find("-") + 1);
    std::string msec=ts.substr(0,6).c_str();
    std::string timestamp=year+"-"+month+"-"+day+" "+hour+":"+min+":"+sec+"."+msec;

    boost::posix_time::ptime btime=boost::posix_time::time_from_string(timestamp);
    boost::posix_time::ptime epoch(boost::gregorian::date(1970, 1, 1));
    boost::posix_time::time_duration deltTime = btime - epoch;
    long utime = deltTime.total_microseconds();

    return(utime);
}







Image::TiffTag_t Image::getTiffTag(){
    if(!_tiffTag.loaded){
        readTiffTags();
        _tiffTag.loaded=true;
    }
    return _tiffTag;
}

void Image::readTiffTags(){
    if(_loadPath.extension().string()==".tif"){
        std::string path = _loadPath.string();

        tiff *tif = TIFFOpen(path.c_str(), "rc");   // read tif
        //static ttag_t const TIFFTAG_SOMETAG = 60132; // some custom tag
        if(tif != nullptr) // if the file is open
        {
            float count; // get count
            u_int32_t *intData; // get data
            float *floatData;
            TIFFGetField(tif, PROTIFFTAG_BINNINGX, &count, &intData);
            _tiffTag.binX=*intData;
            TIFFGetField(tif, PROTIFFTAG_BINNINGY, &count, &intData);
            _tiffTag.binY=*intData;
            TIFFGetField(tif, PROTIFFTAG_EXPOSUREVALUE, &count, &intData);
            _tiffTag.exposureVal=*intData;
            TIFFGetField(tif, PROTIFFTAG_FRAMERATE, &count, &floatData);
            _tiffTag.framerate=*floatData;
            TIFFGetField(tif, PROTIFFTAG_GAINVALUE, &count, &intData);
            _tiffTag.gainVal=*intData;
            TIFFGetField(tif, PROTIFFTAG_OFFSETX , &count, &intData);
            _tiffTag.offsetX=*intData;
            TIFFGetField(tif, PROTIFFTAG_OFFSETY, &count, &intData);
            _tiffTag.offsetY=*intData;
            TIFFGetField(tif, PROTIFFTAG_TIME_HI, &count, &intData);
            u_int32_t high= *intData;
            TIFFGetField(tif, PROTIFFTAG_TIME_LO, &count, &intData);
            u_int32_t low= *intData;

            TIFFClose(tif); // close the file
        }
    }
    return;
}


//void Image::writeDB(std::string table, QSqlDatabase mDatabase){
//    qDebug() << "Bing" << endl;
//    std::vector< uchar > byteArray;
//    cv::imencode(".tif",getBitmap(),byteArray);
//    QByteArray* qByte = new QByteArray(reinterpret_cast<const char*>(byteArray.data()), byteArray.size());

//    // Preparing the QSqlQuery where to send the information
//    QSqlQuery qry(mDatabase);
//    qry.prepare(QString::fromStdString("INSERT INTO " + table + " (floatTime, version, encoding, bitmap, colorSpace, imageNum, binX, binY, exposureVal, framerate, gainVal, offsetX, offsetY) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?)" ));
//    qry.addBindValue(double(imgFloatTime()));
//    qry.addBindValue(version);
//    qry.addBindValue(".tif");
//    qry.addBindValue(*qByte);
//    qry.addBindValue(getColorSpace());
//    qry.addBindValue(_imageNum);
//    qry.addBindValue(_tiffTag.binX);
//    qry.addBindValue(_tiffTag.binY);
//    qry.addBindValue(_tiffTag.exposureVal);
//    qry.addBindValue(_tiffTag.framerate);
//    qry.addBindValue(_tiffTag.gainVal);
//    qry.addBindValue(_tiffTag.offsetX);
//    qry.addBindValue(_tiffTag.offsetY);

//    delete qByte;
//    bool status = qry.exec();
//    if(status) {
//        //throw std::system_error("unable to write to DB");
//    }
//}

//QStringList Image::readDBTables(QSqlDatabase mDatabase){
//    QStringList output;

//    if(!mDatabase.isOpen())
//        qDebug() << "Panic it didn't open\n";

//    output = mDatabase.tables();
//    return output;
//}

//std::string Image::getDBTableDescription(QSqlDatabase mDatabase){
//    if(version==1){
//        return \
//                " CREATE TABLE IF NOT EXISTS Detail" \
//                " (id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL" \
//                ", floatTime DOUBLE NOT NULL" \
//                ", version INT NOT NULL" \
//                ", encoding TEXT NOT NULL)" \
//                ", bitmap BLOB NOT NULL)" \
//                ", colorSpace INT NOT NULL)" \
//                ", imageNum INT NOT NULL)" \
//                ", binX INT NOT NULL)" \
//                ", binY INT NOT NULL)" \
//                ", exposureVal INT NOT NULL)" \
//                ", framerate DOUBLE NOT NULL)" \
//                ", gainVal INT NOT NULL)" \
//                ", offsetX INT NOT NULL)" \
//                ", offsetY INT NOT NULL)";

//    }
//    return "";
//}


// New template file for the detector system

//bool dataLeftCamera::addItem(leftCamParameters *leftCamItem)
//{
//    QSqlQuery qry;
//    qry.prepare("INSERT INTO leftCamTable (name, latitude, longitude," \
//                " depth, length, primarySubstrate, secondarySubstrate," \
//                " species, additionalParameters, avgRed, avgGreen," \
//                " avgBlue, save, path, ACoord, BCoord, CCoord, DCoord,classImg, dateTime)"\
//                " VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
//    qry.addBindValue(leftCamItem->name());
//    qry.addBindValue(leftCamItem->latitude());
//    qry.addBindValue(leftCamItem->longitude());
//    qry.addBindValue(leftCamItem->depth());
//    qry.addBindValue(leftCamItem->length());
//    qry.addBindValue(leftCamItem->primarysub());
//    qry.addBindValue(leftCamItem->secondarysub());
//    qry.addBindValue(leftCamItem->species());
//    qry.addBindValue(leftCamItem->addparam());
//    qry.addBindValue(leftCamItem->avgRed());
//    qry.addBindValue(leftCamItem->avgGreen());
//    qry.addBindValue(leftCamItem->avgBlue());
//    qry.addBindValue(leftCamItem->save());
//    qry.addBindValue(leftCamItem->path());
//    qry.addBindValue(QString::number(leftCamItem->mACoord().x()) + ":" + QString::number(leftCamItem->mACoord().y()));
//    qry.addBindValue(QString::number(leftCamItem->mBCoord().x()) + ":" + QString::number(leftCamItem->mBCoord().y()));
//    qry.addBindValue(QString::number(leftCamItem->mCCoord().x()) + ":" + QString::number(leftCamItem->mCCoord().y()));
//    qry.addBindValue(QString::number(leftCamItem->mDCoord().x()) + ":" + QString::number(leftCamItem->mDCoord().y()));
//    qry.addBindValue(leftCamItem->classImg());
//    qry.addBindValue(leftCamItem->dateTime());

//    bool ok = qry.exec();
//    if(!ok) {
//        mError = qry.lastError().text();
//        qDebug() << mError;
//    }
//    return ok;
//}


void Image::writeDB(std::string table, QSqlDatabase mDatabase, leftCamParameters *leftCamItem){
    qDebug() << "Bing" << endl;

    // in this case the images are not .tiff but are jpg
    std::vector< uchar > byteArray;
    cv::imencode(".tif",getBitmap(),byteArray);
    QByteArray* qByte = new QByteArray(reinterpret_cast<const char*>(byteArray.data()), byteArray.size());

    // Preparing the QSqlQuery where to send the information
    QSqlQuery qry(mDatabase);
    qry.prepare(QString::fromStdString("INSERT INTO " + table + " (name, latitude, longitude, depth, length, primarySubstrate, secondarySubstrate, species, additionalParameters, ACoord, BCoord, CCoord, DCoord, classImg ,avgRed, avgGreen, avgBlue, save, path, dateTime) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)"));
    qry.addBindValue(leftCamItem->name());
    qry.addBindValue(leftCamItem->latitude());
    qry.addBindValue(leftCamItem->longitude());
    qry.addBindValue(leftCamItem->depth());
    qry.addBindValue(leftCamItem->length());
    qry.addBindValue(leftCamItem->primarysub());
    qry.addBindValue(leftCamItem->secondarysub());
    qry.addBindValue(leftCamItem->species());
    qry.addBindValue(leftCamItem->addparam());
    qry.addBindValue(QVariant::fromValue(leftCamItem->mACoord()));
    qDebug() << "PV " << QVariant::fromValue(leftCamItem->mACoord());
    qDebug() << "PP " << leftCamItem->mACoord();
    qry.addBindValue(QVariant::fromValue(leftCamItem->mBCoord()));
    qry.addBindValue(QVariant::fromValue(leftCamItem->mCCoord()));
    qry.addBindValue(QVariant::fromValue(leftCamItem->mDCoord()));
    qry.addBindValue(leftCamItem->classImg());
    qry.addBindValue(leftCamItem->avgRed());
    qry.addBindValue(leftCamItem->avgGreen());
    qry.addBindValue(leftCamItem->avgBlue());
    qry.addBindValue(leftCamItem->save());
    qry.addBindValue(leftCamItem->path());
    qry.addBindValue(leftCamItem->dateTime());

    delete qByte;
    bool status = qry.exec();
////    if(status) {
////        //throw std::system_error("unable to write to DB");
////    }
}

QStringList Image::readDBTables(QSqlDatabase mDatabase){
    QStringList output;

    if(!mDatabase.isOpen())
        qDebug() << "Panic it didn't open\n";

    output = mDatabase.tables();
    return output;
}

std::string Image::getDBTableDescription(QSqlDatabase mDatabase){
    if(version==1){
        return \
                " CREATE TABLE IF NOT EXISTS leftCamTable" \
                " (id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL" \
                ", name TEXT NOT NULL" \
                ", latitude DOUBLE NOT NULL" \
                ", longitude DOUBLE NOT NULL" \
                ", depth DOUBLE NOT NULL" \
                ", length DOUBLE NOT NULL" \
                ", primarySubstrate TEXT NOT NULL" \
                ", secondarySubstrate TEXT NOT NULL" \
                ", species TEXT NOT NULL" \
                ", additionalParameters TEXT NOT NULL" \
                ", ACoord TEXT NOT NULL" \
                ", BCoord TEXT NOT NULL" \
                ", CCoord TEXT NOT NULL" \
                ", DCoord TEXT NOT NULL" \
                ", classImg BLOB " \
                ", avgRed DOUBLE NOT NULL" \
                ", avgGreen DOUBLE NOT NULL" \
                ", avgBlue DOUBLE NOT NULL" \
                ", save BLOB NOT NULL" \
                ", path TEXT NOT NULL" \
                ", dateTime DATETIME NOT NULL)";
    }
    return "";
}

