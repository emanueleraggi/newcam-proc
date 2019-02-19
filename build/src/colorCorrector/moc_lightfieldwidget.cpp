/****************************************************************************
** Meta object code from reading C++ file 'lightfieldwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/colorCorrector/ui/lightfieldwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightfieldwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LightfieldWidget_t {
    QByteArrayData data[11];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LightfieldWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LightfieldWidget_t qt_meta_stringdata_LightfieldWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LightfieldWidget"
QT_MOC_LITERAL(1, 17, 16), // "on_lfBtn_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 35), // "on_horizontalSlider_actionTri..."
QT_MOC_LITERAL(4, 71, 6), // "action"
QT_MOC_LITERAL(5, 78, 34), // "on_intensitySlider_actionTrig..."
QT_MOC_LITERAL(6, 113, 34), // "on_constrastSlider_actionTrig..."
QT_MOC_LITERAL(7, 148, 34), // "on_horizontalSlider_sliderRel..."
QT_MOC_LITERAL(8, 183, 30), // "on_brightnessEdit_valueChanged"
QT_MOC_LITERAL(9, 214, 4), // "arg1"
QT_MOC_LITERAL(10, 219, 28) // "on_contrastEdit_valueChanged"

    },
    "LightfieldWidget\0on_lfBtn_clicked\0\0"
    "on_horizontalSlider_actionTriggered\0"
    "action\0on_intensitySlider_actionTriggered\0"
    "on_constrastSlider_actionTriggered\0"
    "on_horizontalSlider_sliderReleased\0"
    "on_brightnessEdit_valueChanged\0arg1\0"
    "on_contrastEdit_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LightfieldWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void LightfieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LightfieldWidget *_t = static_cast<LightfieldWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lfBtn_clicked(); break;
        case 1: _t->on_horizontalSlider_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_intensitySlider_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_constrastSlider_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_horizontalSlider_sliderReleased(); break;
        case 5: _t->on_brightnessEdit_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_contrastEdit_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LightfieldWidget::staticMetaObject = {
    { &AbstractToolbar::staticMetaObject, qt_meta_stringdata_LightfieldWidget.data,
      qt_meta_data_LightfieldWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LightfieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LightfieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LightfieldWidget.stringdata0))
        return static_cast<void*>(const_cast< LightfieldWidget*>(this));
    return AbstractToolbar::qt_metacast(_clname);
}

int LightfieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractToolbar::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
