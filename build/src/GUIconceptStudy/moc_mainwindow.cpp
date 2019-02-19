/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/GUIconceptStudy/ui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(4, 56, 30), // "on_loadFromCustomPlotA_clicked"
QT_MOC_LITERAL(5, 87, 30), // "on_loadFromCustomPlotB_clicked"
QT_MOC_LITERAL(6, 118, 30), // "on_substrateIDGuideBtn_clicked"
QT_MOC_LITERAL(7, 149, 18), // "onRubberBandUpdate"
QT_MOC_LITERAL(8, 168, 4), // "rect"
QT_MOC_LITERAL(9, 173, 2), // "st"
QT_MOC_LITERAL(10, 176, 2), // "en"
QT_MOC_LITERAL(11, 179, 25), // "on_menuLeftCamBtn_clicked"
QT_MOC_LITERAL(12, 205, 26), // "on_menuRightCamBtn_clicked"
QT_MOC_LITERAL(13, 232, 22), // "on_leftSidePan_toggled"
QT_MOC_LITERAL(14, 255, 7), // "checked"
QT_MOC_LITERAL(15, 263, 23), // "on_rightSidePan_toggled"
QT_MOC_LITERAL(16, 287, 18), // "on_tiedPan_toggled"
QT_MOC_LITERAL(17, 306, 14), // "onClippedImage"
QT_MOC_LITERAL(18, 321, 6), // "pixmap"
QT_MOC_LITERAL(19, 328, 32), // "on_enablePointerRadioBtn_clicked"
QT_MOC_LITERAL(20, 361, 26) // "on_addNewRecordBtn_clicked"

    },
    "MainWindow\0on_buttonBox_accepted\0\0"
    "on_buttonBox_rejected\0"
    "on_loadFromCustomPlotA_clicked\0"
    "on_loadFromCustomPlotB_clicked\0"
    "on_substrateIDGuideBtn_clicked\0"
    "onRubberBandUpdate\0rect\0st\0en\0"
    "on_menuLeftCamBtn_clicked\0"
    "on_menuRightCamBtn_clicked\0"
    "on_leftSidePan_toggled\0checked\0"
    "on_rightSidePan_toggled\0on_tiedPan_toggled\0"
    "onClippedImage\0pixmap\0"
    "on_enablePointerRadioBtn_clicked\0"
    "on_addNewRecordBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    3,   89,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      15,    1,  101,    2, 0x08 /* Private */,
      16,    1,  104,    2, 0x08 /* Private */,
      17,    1,  107,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, QMetaType::QPointF, QMetaType::QPointF,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QPixmap,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_buttonBox_rejected(); break;
        case 2: _t->on_loadFromCustomPlotA_clicked(); break;
        case 3: _t->on_loadFromCustomPlotB_clicked(); break;
        case 4: _t->on_substrateIDGuideBtn_clicked(); break;
        case 5: _t->onRubberBandUpdate((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3]))); break;
        case 6: _t->on_menuLeftCamBtn_clicked(); break;
        case 7: _t->on_menuRightCamBtn_clicked(); break;
        case 8: _t->on_leftSidePan_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_rightSidePan_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_tiedPan_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onClippedImage((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 12: _t->on_enablePointerRadioBtn_clicked(); break;
        case 13: _t->on_addNewRecordBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
