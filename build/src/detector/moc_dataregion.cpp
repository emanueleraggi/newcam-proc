/****************************************************************************
** Meta object code from reading C++ file 'dataregion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/detector/src/dataregion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataregion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataRegion_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataRegion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataRegion_t qt_meta_stringdata_DataRegion = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DataRegion"
QT_MOC_LITERAL(1, 11, 12), // "setBoxHidden"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "newstate"
QT_MOC_LITERAL(4, 34, 20), // "setBoxHiddenOverride"
QT_MOC_LITERAL(5, 55, 14), // "setActiveState"
QT_MOC_LITERAL(6, 70, 9), // "newactive"
QT_MOC_LITERAL(7, 80, 10) // "setVisible"

    },
    "DataRegion\0setBoxHidden\0\0newstate\0"
    "setBoxHiddenOverride\0setActiveState\0"
    "newactive\0setVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataRegion[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void DataRegion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataRegion *_t = static_cast<DataRegion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setBoxHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setBoxHiddenOverride((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setActiveState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DataRegion::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataRegion.data,
      qt_meta_data_DataRegion,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataRegion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataRegion::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataRegion.stringdata0))
        return static_cast<void*>(const_cast< DataRegion*>(this));
    return QObject::qt_metacast(_clname);
}

int DataRegion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
