/****************************************************************************
** Meta object code from reading C++ file 'demo0.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../demo0.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_demo0_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_demo0_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_demo0_t qt_meta_stringdata_demo0 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "demo0"
QT_MOC_LITERAL(1, 6, 21), // "on_checkBox_1_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "checked"
QT_MOC_LITERAL(4, 37, 21), // "on_checkBox_2_clicked"
QT_MOC_LITERAL(5, 59, 21), // "on_checkBox_3_clicked"
QT_MOC_LITERAL(6, 81, 16) // "setTextFontColor"

    },
    "demo0\0on_checkBox_1_clicked\0\0checked\0"
    "on_checkBox_2_clicked\0on_checkBox_3_clicked\0"
    "setTextFontColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_demo0[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void demo0::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<demo0 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_checkBox_1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_checkBox_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkBox_3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setTextFontColor(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject demo0::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_demo0.data,
    qt_meta_data_demo0,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *demo0::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *demo0::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_demo0.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int demo0::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
