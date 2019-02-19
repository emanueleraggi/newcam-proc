/****************************************************************************
** Meta object code from reading C++ file 'imagemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/libCam/qtinclude/imagemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageManager_t {
    QByteArrayData data[17];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageManager_t qt_meta_stringdata_ImageManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ImageManager"
QT_MOC_LITERAL(1, 13, 18), // "on_loadBtn_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "on_ImLiWi_imgChanged"
QT_MOC_LITERAL(4, 54, 6), // "Image*"
QT_MOC_LITERAL(5, 61, 3), // "img"
QT_MOC_LITERAL(6, 65, 7), // "loadAll"
QT_MOC_LITERAL(7, 73, 17), // "on_runBtn_clicked"
QT_MOC_LITERAL(8, 91, 18), // "on_saveBtn_clicked"
QT_MOC_LITERAL(9, 110, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(10, 142, 5), // "index"
QT_MOC_LITERAL(11, 148, 25), // "on_outputPath_btn_clicked"
QT_MOC_LITERAL(12, 174, 26), // "on_upperBound_valueChanged"
QT_MOC_LITERAL(13, 201, 4), // "arg1"
QT_MOC_LITERAL(14, 206, 26), // "on_lowerBound_valueChanged"
QT_MOC_LITERAL(15, 233, 19), // "on_cropList_clicked"
QT_MOC_LITERAL(16, 253, 20) // "on_savteToDB_clicked"

    },
    "ImageManager\0on_loadBtn_clicked\0\0"
    "on_ImLiWi_imgChanged\0Image*\0img\0loadAll\0"
    "on_runBtn_clicked\0on_saveBtn_clicked\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_outputPath_btn_clicked\0"
    "on_upperBound_valueChanged\0arg1\0"
    "on_lowerBound_valueChanged\0"
    "on_cropList_clicked\0on_savteToDB_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,
      15,    0,   86,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImageManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageManager *_t = static_cast<ImageManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_loadBtn_clicked(); break;
        case 1: _t->on_ImLiWi_imgChanged((*reinterpret_cast< Image*(*)>(_a[1]))); break;
        case 2: _t->loadAll(); break;
        case 3: _t->on_runBtn_clicked(); break;
        case 4: _t->on_saveBtn_clicked(); break;
        case 5: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_outputPath_btn_clicked(); break;
        case 7: _t->on_upperBound_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_lowerBound_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_cropList_clicked(); break;
        case 10: _t->on_savteToDB_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ImageManager::staticMetaObject = {
    { &ImagingWindow::staticMetaObject, qt_meta_stringdata_ImageManager.data,
      qt_meta_data_ImageManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageManager.stringdata0))
        return static_cast<void*>(const_cast< ImageManager*>(this));
    return ImagingWindow::qt_metacast(_clname);
}

int ImageManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ImagingWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
