/****************************************************************************
** Meta object code from reading C++ file 'firstnestedtable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ERDatabaseSystem/ui/firstnestedtable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firstnestedtable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_firstNestedTable_t {
    QByteArrayData data[15];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_firstNestedTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_firstNestedTable_t qt_meta_stringdata_firstNestedTable = {
    {
QT_MOC_LITERAL(0, 0, 16), // "firstNestedTable"
QT_MOC_LITERAL(1, 17, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "on_New_Database_triggered"
QT_MOC_LITERAL(4, 69, 32), // "on_actionOpen_Database_triggered"
QT_MOC_LITERAL(5, 102, 17), // "on_accept_clicked"
QT_MOC_LITERAL(6, 120, 16), // "on_close_clicked"
QT_MOC_LITERAL(7, 137, 18), // "on_connect_clicked"
QT_MOC_LITERAL(8, 156, 21), // "on_disconnect_clicked"
QT_MOC_LITERAL(9, 178, 27), // "on_action_AddItem_triggered"
QT_MOC_LITERAL(10, 206, 30), // "on_action_RemoveItem_triggered"
QT_MOC_LITERAL(11, 237, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(12, 258, 5), // "index"
QT_MOC_LITERAL(13, 264, 32), // "on_actionAuto_Populate_triggered"
QT_MOC_LITERAL(14, 297, 12) // "autoPopulate"

    },
    "firstNestedTable\0on_actionClose_triggered\0"
    "\0on_New_Database_triggered\0"
    "on_actionOpen_Database_triggered\0"
    "on_accept_clicked\0on_close_clicked\0"
    "on_connect_clicked\0on_disconnect_clicked\0"
    "on_action_AddItem_triggered\0"
    "on_action_RemoveItem_triggered\0"
    "on_tableView_clicked\0index\0"
    "on_actionAuto_Populate_triggered\0"
    "autoPopulate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_firstNestedTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void firstNestedTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        firstNestedTable *_t = static_cast<firstNestedTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionClose_triggered(); break;
        case 1: _t->on_New_Database_triggered(); break;
        case 2: _t->on_actionOpen_Database_triggered(); break;
        case 3: _t->on_accept_clicked(); break;
        case 4: _t->on_close_clicked(); break;
        case 5: _t->on_connect_clicked(); break;
        case 6: _t->on_disconnect_clicked(); break;
        case 7: _t->on_action_AddItem_triggered(); break;
        case 8: _t->on_action_RemoveItem_triggered(); break;
        case 9: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_actionAuto_Populate_triggered(); break;
        case 11: _t->autoPopulate(); break;
        default: ;
        }
    }
}

const QMetaObject firstNestedTable::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_firstNestedTable.data,
      qt_meta_data_firstNestedTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *firstNestedTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *firstNestedTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_firstNestedTable.stringdata0))
        return static_cast<void*>(const_cast< firstNestedTable*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int firstNestedTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
