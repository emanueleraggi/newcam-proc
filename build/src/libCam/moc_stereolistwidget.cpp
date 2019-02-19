/****************************************************************************
** Meta object code from reading C++ file 'stereolistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/libCam/qtinclude/stereolistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stereolistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StereoListWidget_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StereoListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StereoListWidget_t qt_meta_stringdata_StereoListWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "StereoListWidget"
QT_MOC_LITERAL(1, 17, 10), // "imgChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "on_a_list_imgChanged"
QT_MOC_LITERAL(4, 50, 6), // "Image*"
QT_MOC_LITERAL(5, 57, 3), // "img"
QT_MOC_LITERAL(6, 61, 20), // "on_b_list_imgChanged"
QT_MOC_LITERAL(7, 82, 11) // "sendSignals"

    },
    "StereoListWidget\0imgChanged\0\0"
    "on_a_list_imgChanged\0Image*\0img\0"
    "on_b_list_imgChanged\0sendSignals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StereoListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void StereoListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StereoListWidget *_t = static_cast<StereoListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imgChanged(); break;
        case 1: _t->on_a_list_imgChanged((*reinterpret_cast< Image*(*)>(_a[1]))); break;
        case 2: _t->on_b_list_imgChanged((*reinterpret_cast< Image*(*)>(_a[1]))); break;
        case 3: _t->sendSignals(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StereoListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StereoListWidget::imgChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject StereoListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StereoListWidget.data,
      qt_meta_data_StereoListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StereoListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StereoListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StereoListWidget.stringdata0))
        return static_cast<void*>(const_cast< StereoListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int StereoListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void StereoListWidget::imgChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
