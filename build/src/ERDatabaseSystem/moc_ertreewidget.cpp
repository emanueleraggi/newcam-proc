/****************************************************************************
** Meta object code from reading C++ file 'ertreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ERDatabaseSystem/src/ertreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ertreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ERTreeWidget_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ERTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ERTreeWidget_t qt_meta_stringdata_ERTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ERTreeWidget"
QT_MOC_LITERAL(1, 13, 8), // "newTable"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 17), // "newReferenceTable"
QT_MOC_LITERAL(4, 41, 11), // "removeTable"
QT_MOC_LITERAL(5, 53, 14), // "removeDatabase"
QT_MOC_LITERAL(6, 68, 10), // "selectFrom"
QT_MOC_LITERAL(7, 79, 9) // "editTable"

    },
    "ERTreeWidget\0newTable\0\0newReferenceTable\0"
    "removeTable\0removeDatabase\0selectFrom\0"
    "editTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ERTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ERTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ERTreeWidget *_t = static_cast<ERTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newTable(); break;
        case 1: _t->newReferenceTable(); break;
        case 2: _t->removeTable(); break;
        case 3: _t->removeDatabase(); break;
        case 4: _t->selectFrom(); break;
        case 5: _t->editTable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ERTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ERTreeWidget::newTable)) {
                *result = 0;
            }
        }
        {
            typedef void (ERTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ERTreeWidget::newReferenceTable)) {
                *result = 1;
            }
        }
        {
            typedef void (ERTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ERTreeWidget::removeTable)) {
                *result = 2;
            }
        }
        {
            typedef void (ERTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ERTreeWidget::removeDatabase)) {
                *result = 3;
            }
        }
        {
            typedef void (ERTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ERTreeWidget::selectFrom)) {
                *result = 4;
            }
        }
        {
            typedef void (ERTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ERTreeWidget::editTable)) {
                *result = 5;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ERTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_ERTreeWidget.data,
      qt_meta_data_ERTreeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ERTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ERTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ERTreeWidget.stringdata0))
        return static_cast<void*>(const_cast< ERTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int ERTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ERTreeWidget::newTable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ERTreeWidget::newReferenceTable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ERTreeWidget::removeTable()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ERTreeWidget::removeDatabase()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void ERTreeWidget::selectFrom()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void ERTreeWidget::editTable()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
