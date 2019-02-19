/****************************************************************************
** Meta object code from reading C++ file 'graphicsviewbothdrag.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/detector/src/graphicsviewbothdrag.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphicsviewbothdrag.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MGraphicsViewBothDrag_t {
    QByteArrayData data[15];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MGraphicsViewBothDrag_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MGraphicsViewBothDrag_t qt_meta_stringdata_MGraphicsViewBothDrag = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MGraphicsViewBothDrag"
QT_MOC_LITERAL(1, 22, 13), // "mouseReleased"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "point"
QT_MOC_LITERAL(4, 43, 10), // "rightClick"
QT_MOC_LITERAL(5, 54, 8), // "dragMove"
QT_MOC_LITERAL(6, 63, 15), // "QDragMoveEvent*"
QT_MOC_LITERAL(7, 79, 2), // "de"
QT_MOC_LITERAL(8, 82, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(9, 97, 25), // "QGraphicsSceneMouseEvent*"
QT_MOC_LITERAL(10, 123, 10), // "mouseEvent"
QT_MOC_LITERAL(11, 134, 15), // "mousePressEvent"
QT_MOC_LITERAL(12, 150, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(13, 168, 13), // "dragMoveEvent"
QT_MOC_LITERAL(14, 182, 9) // "dragEvent"

    },
    "MGraphicsViewBothDrag\0mouseReleased\0"
    "\0point\0rightClick\0dragMove\0QDragMoveEvent*\0"
    "de\0mouseMoveEvent\0QGraphicsSceneMouseEvent*\0"
    "mouseEvent\0mousePressEvent\0mouseReleaseEvent\0"
    "dragMoveEvent\0dragEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MGraphicsViewBothDrag[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   58,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      13,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 6,   14,

       0        // eod
};

void MGraphicsViewBothDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MGraphicsViewBothDrag *_t = static_cast<MGraphicsViewBothDrag *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseReleased((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->rightClick((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 2: _t->dragMove((*reinterpret_cast< QDragMoveEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseMoveEvent((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mousePressEvent((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->mouseReleaseEvent((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->dragMoveEvent((*reinterpret_cast< QDragMoveEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MGraphicsViewBothDrag::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MGraphicsViewBothDrag::mouseReleased)) {
                *result = 0;
            }
        }
        {
            typedef void (MGraphicsViewBothDrag::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MGraphicsViewBothDrag::rightClick)) {
                *result = 1;
            }
        }
        {
            typedef void (MGraphicsViewBothDrag::*_t)(QDragMoveEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MGraphicsViewBothDrag::dragMove)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject MGraphicsViewBothDrag::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_MGraphicsViewBothDrag.data,
      qt_meta_data_MGraphicsViewBothDrag,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MGraphicsViewBothDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MGraphicsViewBothDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MGraphicsViewBothDrag.stringdata0))
        return static_cast<void*>(const_cast< MGraphicsViewBothDrag*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int MGraphicsViewBothDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MGraphicsViewBothDrag::mouseReleased(QPointF _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MGraphicsViewBothDrag::rightClick(QPointF _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MGraphicsViewBothDrag::dragMove(QDragMoveEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
