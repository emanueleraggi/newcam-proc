/****************************************************************************
** Meta object code from reading C++ file 'roi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ERDatabaseSystem/ui/roi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_roi_t {
    QByteArrayData data[13];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_roi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_roi_t qt_meta_stringdata_roi = {
    {
QT_MOC_LITERAL(0, 0, 3), // "roi"
QT_MOC_LITERAL(1, 4, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 25), // "on_action_Close_triggered"
QT_MOC_LITERAL(4, 51, 32), // "on_actionOpen_Database_triggered"
QT_MOC_LITERAL(5, 84, 31), // "on_actionNew_Database_triggered"
QT_MOC_LITERAL(6, 116, 27), // "on_actionAdd_Item_triggered"
QT_MOC_LITERAL(7, 144, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(8, 165, 5), // "index"
QT_MOC_LITERAL(9, 171, 20), // "on_acceptBtn_clicked"
QT_MOC_LITERAL(10, 192, 21), // "on_connectBtn_clicked"
QT_MOC_LITERAL(11, 214, 24), // "on_disconnectBtn_clicked"
QT_MOC_LITERAL(12, 239, 30) // "on_actionRemove_Item_triggered"

    },
    "roi\0on_closeBtn_clicked\0\0"
    "on_action_Close_triggered\0"
    "on_actionOpen_Database_triggered\0"
    "on_actionNew_Database_triggered\0"
    "on_actionAdd_Item_triggered\0"
    "on_tableView_clicked\0index\0"
    "on_acceptBtn_clicked\0on_connectBtn_clicked\0"
    "on_disconnectBtn_clicked\0"
    "on_actionRemove_Item_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_roi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void roi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        roi *_t = static_cast<roi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_closeBtn_clicked(); break;
        case 1: _t->on_action_Close_triggered(); break;
        case 2: _t->on_actionOpen_Database_triggered(); break;
        case 3: _t->on_actionNew_Database_triggered(); break;
        case 4: _t->on_actionAdd_Item_triggered(); break;
        case 5: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_acceptBtn_clicked(); break;
        case 7: _t->on_connectBtn_clicked(); break;
        case 8: _t->on_disconnectBtn_clicked(); break;
        case 9: _t->on_actionRemove_Item_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject roi::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_roi.data,
      qt_meta_data_roi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *roi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *roi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_roi.stringdata0))
        return static_cast<void*>(const_cast< roi*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int roi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
