#include "imagelistwidget.h"

ImageListWidget::ImageListWidget(QWidget *parent) :
    QListWidget(parent)
{
    connect(this, SIGNAL(itemSelectionChanged()),
                         this, SLOT(sendImgSig())) ;
}

void ImageListWidget::sendImgSig(){
    Image * img;
    img=&_imList->getImage(this->currentRow());
    _imList->getIndex()=this->currentRow();
    emit imgChanged(img);

    return;

}

void ImageListWidget::setList(ImageList<Image> &list){
    _imList=&list;
}

void ImageListWidget::setList(ImageList<Image> *list){
    _imList=list;
}

void ImageListWidget::update(){
    unsigned int temp = _imList->getIndex();
//    while(count()>0)
//    {
//      takeItem(0);            //handle the item if you don't
//                              //have a pointer to it elsewhere
//    }

    //clear();
    _imList->getIndex()=temp;
    if(_imList!=NULL){
        for(size_t i=0 ; i < _imList->size(); i++){
            if(i>=count())
                addItem(QString::fromStdString(_imList->getImage(i).getName()));
            else
                item(i)->setText(QString::fromStdString(_imList->getImage(i).getName()));
        }
    }
    //item(_imList->getIndex())->setSelected(true);
    setCurrentRow(_imList->getIndex());
    return;
}
