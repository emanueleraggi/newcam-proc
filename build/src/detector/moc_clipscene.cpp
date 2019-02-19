/****************************************************************************
** Meta object code from reading C++ file 'clipscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/detector/ui/clipscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clipscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_clipScene_t {
    QByteArrayData data[9];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clipScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clipScene_t qt_meta_stringdata_clipScene = {
    {
QT_MOC_LITERAL(0, 0, 9), // "clipScene"
QT_MOC_LITERAL(1, 10, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "on_acceptBtn_clicked"
QT_MOC_LITERAL(4, 52, 9), // "showEvent"
QT_MOC_LITERAL(5, 62, 11), // "QShowEvent*"
QT_MOC_LITERAL(6, 74, 20), // "load_classifiedImage"
QT_MOC_LITERAL(7, 95, 25), // "on_toolButtonPath_clicked"
QT_MOC_LITERAL(8, 121, 22) // "on_loadBtnBBox_clicked"

    },
    "clipScene\0on_closeBtn_clicked\0\0"
    "on_acceptBtn_clicked\0showEvent\0"
    "QShowEvent*\0load_classifiedImage\0"
    "on_toolButtonPath_clicked\0"
    "on_loadBtnBBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clipScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void clipScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        clipScene *_t = static_cast<clipScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_closeBtn_clicked(); break;
        case 1: _t->on_acceptBtn_clicked(); break;
        case 2: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 3: _t->load_classifiedImage(); break;
        case 4: _t->on_toolButtonPath_clicked(); break;
        case 5: _t->on_loadBtnBBox_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject clipScene::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_clipScene.data,
      qt_meta_data_clipScene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *clipScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clipScene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_clipScene.stringdata0))
        return static_cast<void*>(const_cast< clipScene*>(this));
    return QDialog::qt_metacast(_clname);
}

int clipScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
