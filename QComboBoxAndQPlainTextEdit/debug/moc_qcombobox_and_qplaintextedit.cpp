/****************************************************************************
** Meta object code from reading C++ file 'qcombobox_and_qplaintextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcombobox_and_qplaintextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcombobox_and_qplaintextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QComboBox_And_QPlainTextEdit_t {
    QByteArrayData data[10];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QComboBox_And_QPlainTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QComboBox_And_QPlainTextEdit_t qt_meta_stringdata_QComboBox_And_QPlainTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QComboBox_And_QPlainTextEdit"
QT_MOC_LITERAL(1, 29, 22), // "on_btnInitItem_clicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 19), // "on_btnInit2_clicked"
QT_MOC_LITERAL(4, 73, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(5, 105, 4), // "arg1"
QT_MOC_LITERAL(6, 110, 33), // "on_comboBox_2_currentIndexCha..."
QT_MOC_LITERAL(7, 144, 24), // "on_btnToComboBox_clicked"
QT_MOC_LITERAL(8, 169, 43), // "on_plainTextEdit_customContex..."
QT_MOC_LITERAL(9, 213, 3) // "pos"

    },
    "QComboBox_And_QPlainTextEdit\0"
    "on_btnInitItem_clicked\0\0on_btnInit2_clicked\0"
    "on_comboBox_currentIndexChanged\0arg1\0"
    "on_comboBox_2_currentIndexChanged\0"
    "on_btnToComboBox_clicked\0"
    "on_plainTextEdit_customContextMenuRequested\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QComboBox_And_QPlainTextEdit[] = {

 // content:
       8,       // revision
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
       6,    1,   49,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    9,

       0        // eod
};

void QComboBox_And_QPlainTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QComboBox_And_QPlainTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnInitItem_clicked(); break;
        case 1: _t->on_btnInit2_clicked(); break;
        case 2: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_comboBox_2_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_btnToComboBox_clicked(); break;
        case 5: _t->on_plainTextEdit_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QComboBox_And_QPlainTextEdit::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_QComboBox_And_QPlainTextEdit.data,
    qt_meta_data_QComboBox_And_QPlainTextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QComboBox_And_QPlainTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboBox_And_QPlainTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBox_And_QPlainTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QComboBox_And_QPlainTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
