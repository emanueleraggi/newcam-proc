#ifndef IMAGELIST_HPP
#define IMAGELIST_HPP

#include "imagelist.h"

template <class T>
bool comparePtr(std::shared_ptr<T> a, std::shared_ptr<T> b) { return (*a < *b); }

template <class T>
ImageList<T>::ImageList()
{
    _selectedIndex=0;
    _bufferSize=10;
    _readOnly=true;
}


template<class T>
void ImageList<T>::setReadOnly(bool x){
    std::lock_guard<std::mutex> lock(mtx);
    _readOnly=x;
    for(size_t i=0; i<_list.size() ; i++){
        _list[i]->setReadOnly(x);
    }
}

template <class T>
void ImageList<T>::setName(std::string name){
    _name=name;
}

template <class T>
void ImageList<T>::setSaveDir(boost::filesystem::path p){
    _saveDir=p;
    setReadOnly(false);
    for(size_t i=0; i<size(); i++){
        _list[i]->setSavePath(p);
    }
}

template <class T>
bool ImageList<T>::addImage(cv::Mat img){
    if(img.data){
        std::shared_ptr<T> temp = std::make_shared<T>();
//        T * temp=new T;
        temp->setBitmap(img);
        temp->setSavePath(_saveDir);
        temp->setReadOnly(_readOnly);
        _list.push_back(*temp);
        return true;
    }
    else{
        std::cerr << "Error: image contained no data!  Not adding to list!" << std::endl;
        return false;
    }
}

template <class T>
bool ImageList<T>::addImage(cv::Mat img, unsigned int index){
    if(index > _list.size()-1){
        std::cerr << "Error: index: "<< index << " out of range.  Not adding to list!" << std::endl;
        return false;
    }
    else if(img.data){
        std::shared_ptr<T> temp = std::make_shared<T>();
        temp->setBitmap(img);
        temp->setSavePath(_saveDir);
        temp->setReadOnly(_readOnly);
        _list.insert(_list.begin() + index, temp);
        return true;
    }

    std::cerr << "Error: image contained no data!  Not adding to list!" << std::endl;
    return false;
}

template <class T>
bool ImageList<T>::addImageFromFile(std::string fName, ColorSpace cs){
    std::lock_guard<std::mutex> lock(mtx);  // we are modifying the list so we need to lock
    std::shared_ptr<T> temp = std::make_shared<T>();
    if (temp->readFromFile(fName,cs)){
        temp->setSavePath(_saveDir);
        temp->setReadOnly(_readOnly);
        _list.push_back(temp);
        temp->unload();
        return true;
    }
    else
        return false;

}

template <class T>
bool ImageList<T>::addImagesFromDir(boost::filesystem::path p,ColorSpace cs){
    boost::filesystem::directory_iterator end_itr;

   // cycle through the directory
   int i = 0;
   for (boost::filesystem::directory_iterator itr(p); itr != end_itr; ++itr)
   {
       // If it's not a directory, list it. If you want to list directories too, just remove this check.
       if (is_regular_file(itr->path())) {
           i++;
           // assign current file name to current_file and echo it out to the console.
           std::string current_file = itr->path().string();
           std::string ext =itr-> path().extension().string();
           boost::algorithm::to_lower(ext);
           if(ext==".tiff"||ext==".tif"||ext==".jpg"||ext==".jpeg"||ext==".png"||ext==".pgm"){
                if(!addImageFromFile(current_file, cs)){
                    std::cout<<"couldn't load image: " << i <<std::endl;
                }

           }
           else{
               std::cout<< "failed ext test" << std::endl;
           }
       }
       else{
           std::cout<< "failed regular file" << std::endl;
       }
   }
    mtx.lock();
    std::sort (_list.begin(), _list.end(),comparePtr<T>);
    mtx.unlock();
    setReadOnly(_readOnly);

}

//template <class T>
//bool ImageList<T>::addImagesFromDir(std::string p, ColorSpace cs){
//  boost::filesystem::path path(p);
//  addImagesFromDir(path,cs);
//}

template <class T>
size_t ImageList<T>::size() const{
    return _list.size();
}

template <class T>
T &ImageList<T>::getImage(unsigned int index){
    std::lock_guard<std::mutex> lock(mtx);
    // I don't think we need a check for negative index with the unsigned int but I may be proved wrong later...
    if(_list.size()==0){
        throw std::out_of_range( "Tried to access item from empty list" );
    }
    if(index > _list.size()-1){ // if index is outside of range return last image in the list and throw errror
        throw std::out_of_range( "Index outside list range" );
    }
    else{
        addToBuffer(index);
//        _buffer.push(index);
//        if(_buffer.size()>_bufferSize){
//            _list[_buffer.front()].setSavePath(_saveDir);
//            _list[_buffer.front()].unload();
//            _buffer.pop();
//        }
        return *_list[index];
    }
}

template <class T>
T &ImageList<T>::getImage(){
    return getImage(_selectedIndex);
}


template <class T>
///
/// \brief returns a sublist of images.  The returned list will
/// is a shalow copy of the origional so you will have access to the origional images
/// in the sublist.
///
/// This function is intended to be use where you want to work on a small section
/// of a larger list.   For example: trimming ends of an image survey or breaking into
/// several lists for multithreading.
/// \param begin the fist image index you want to return
/// \param end the index of the last image you want in your list
/// \return a sublist with refrences to the images in the origional list[];'
///
std::shared_ptr<ImageList<T> > ImageList<T>::getSubList(size_t begin, size_t end){
    std::shared_ptr<ImageList<T> > out(new ImageList<T>);
    for(size_t i=begin; i<=end ;i++){
        out->_list.push_back(_list[i]);
    }
    //out->_saveDir=_saveDir;
    out->setSaveDir(_saveDir);
    out->_bufferSize=_bufferSize;
    out->_readOnly=_readOnly;
    return out;
}
/*
 *
 */
template <class T>
T & ImageList<T>::operator [](unsigned int index){

    return getImage(index);
}


template <class T>
unsigned int & ImageList<T>::getIndex(){
    return _selectedIndex;
}

template <class T>
bool ImageList<T>::nextImage(){
    bool out=false;
    if(_selectedIndex<size()-1){
        _selectedIndex++;
        out= true;
    }
    return out;
}

template <class T>
bool ImageList<T>::prevImage(){
    bool out=false;
    if(_selectedIndex>0){
        _selectedIndex--;
        out = true;
    }
    return out;

}

template<typename T>
void ImageList<T>::loadAll(){
    setBufferSize(size());
    for(size_t i=0; i<size();i++){
        //if(!getImage(i)._currentlyLoading){
        getImage(i).load();
        //}
    }
}

template<typename T>
void ImageList<T>::resize(size_t size){
    _list.resize(size);
    for(size_t i=0; i<_list.size(); i++){
        _list[i].reset(new T);
    }
}

template<typename T>
void ImageList<T>::save(std::string dir){
    boost::filesystem::path root(dir);
    setSaveDir(root);
    save();

//    boost::filesystem::path root(dir);
//    for(size_t i=0 ; i<size() ;i++){
//        getImage(i).getFilePath()=root/getImage(i).getFilePath().filename();
//        getImage(i).save();
//    }

}

template<typename T>
void ImageList<T>::save(){
    if(_readOnly){
        return;
    }
    for(size_t i=0 ; i<size() ;i++){
        getImage(i).setSavePath(_saveDir);
        getImage(i).save();
    }
}

template<typename T>
void ImageList<T>::saveBuffer(){
    while(_buffer.size()>0){
        _list[_buffer.front()]->setSavePath(_saveDir);
        _list[_buffer.front()]->setReadOnly(_readOnly);
        _list[_buffer.front()]->unload();
        _buffer.pop_front();
    }
}

template<typename T>
void ImageList<T>::clear(){
    _list.clear();
}

template<typename T>
void ImageList<T>::pushBack(Image img, std::string name){
    //Image out;
    int size=_list.size();
    if(img.getName()!="untitled.tif"){
        name=img.getName();
    }
    if(name=="untitled.tif"){
        //int size=_list.size();
        std::string num=std::to_string(size);
        name="untitled"+num+".tif";
    }
    img.setReadOnly(_readOnly);
    img.setSavePath(_saveDir);
    img.setName(name);

    std::shared_ptr<T> temp = std::make_shared<T>();
    *temp=img.getCopy();
    _list.push_back(temp);
    addToBuffer(size);
//    _buffer.push(size);
//    if(_buffer.size()>_bufferSize){
//        _list[_buffer.front()].setSavePath(_saveDir);
//        _list[_buffer.front()].unload();
//        _buffer.pop();
//    }
}


template<typename T>
ImageList<T>& ImageList<T>::operator=(const ImageList&other){
    for(size_t i = 0; i<other.size() ;i++){
        std::shared_ptr<Image> temp(new Image);
        std::shared_ptr<Image> otherImage= other._list[i];
        *temp=*otherImage;
        _list[i]=temp;
        //_list.push_back(temp);
        //_list[i]=other._list[i];
    }
    //_list=other._list;
    _name=other._name;
    _selectedIndex=other._selectedIndex;
    _buffer=other._buffer;
    _bufferSize=other._bufferSize;


    setReadOnly(_readOnly);
    setSaveDir(_saveDir);
    return *this;

}

template<typename T>
void ImageList<T>::setBufferSize(size_t size){
    _bufferSize=size;
    return;
}


/*
 * Private funcitons
 */
template<typename T>
void ImageList<T>::addToBuffer(unsigned int index){
    bool inBuffer=false;
    for(size_t i=0;i<_buffer.size();i++){
        if(index==_buffer[i]){
            //inBuffer=true;
            _buffer.erase(_buffer.begin()+i);
            break;
        }
    }
    if(!inBuffer){
        _buffer.push_back(index);
    }
    if(_buffer.size()>_bufferSize){
        _list[_buffer.front()]->setSavePath(_saveDir);
        _list[_buffer.front()]->setReadOnly(_readOnly);
        _list[_buffer.front()]->unload();
        _buffer.pop_front();
    }
}


#endif // IMAGELIST_HPP
