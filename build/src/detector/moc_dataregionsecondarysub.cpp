/****************************************************************************
** Meta object code from reading C++ file 'dataregionsecondarysub.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/detector/src/dataregionsecondarysub.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataregionsecondarysub.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataRegionSecondarySub_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataRegionSecondarySub_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataRegionSecondarySub_t qt_meta_stringdata_DataRegionSecondarySub = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DataRegionSecondarySub"
QT_MOC_LITERAL(1, 23, 6), // "update"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "setIdentify"
QT_MOC_LITERAL(4, 43, 8), // "newstate"
QT_MOC_LITERAL(5, 52, 10), // "setVisible"
QT_MOC_LITERAL(6, 63, 9) // "setActive"

    },
    "DataRegionSecondarySub\0update\0\0"
    "setIdentify\0newstate\0setVisible\0"
    "setActive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataRegionSecondarySub[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       6,    1,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void DataRegionSecondarySub::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataRegionSecondarySub *_t = static_cast<DataRegionSecondarySub *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->setIdentify((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DataRegionSecondarySub::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataRegionSecondarySub.data,
      qt_meta_data_DataRegionSecondarySub,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataRegionSecondarySub::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataRegionSecondarySub::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataRegionSecondarySub.stringdata0))
        return static_cast<void*>(const_cast< DataRegionSecondarySub*>(this));
    return QObject::qt_metacast(_clname);
}

int DataRegionSecondarySub::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
