/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 20), // "on_btHangman_clicked"
QT_MOC_LITERAL(55, 23), // "on_bnSubmitName_clicked"
QT_MOC_LITERAL(79, 23), // "on_bnBackToMain_clicked"
QT_MOC_LITERAL(103, 22), // "on_btHighScore_clicked"
QT_MOC_LITERAL(126, 25), // "on_bnBackToMain_2_clicked"
QT_MOC_LITERAL(152, 8), // "errorBox"
QT_MOC_LITERAL(161, 6), // "string"
QT_MOC_LITERAL(168, 12), // "errorMessage"
QT_MOC_LITERAL(181, 18), // "on_bnGuess_clicked"
QT_MOC_LITERAL(200, 20), // "on_btGetHint_clicked"
QT_MOC_LITERAL(221, 24), // "on_bnBackToMain3_clicked"
QT_MOC_LITERAL(246, 20), // "on_bnNewGame_clicked"
QT_MOC_LITERAL(267, 17) // "on_bnExit_clicked"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "on_btHangman_clicked\0on_bnSubmitName_clicked\0"
    "on_bnBackToMain_clicked\0on_btHighScore_clicked\0"
    "on_bnBackToMain_2_clicked\0errorBox\0"
    "string\0errorMessage\0on_bnGuess_clicked\0"
    "on_btGetHint_clicked\0on_bnBackToMain3_clicked\0"
    "on_bnNewGame_clicked\0on_bnExit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    0 /* Private */,
       3,    0,   87,    2, 0x08,    1 /* Private */,
       4,    0,   88,    2, 0x08,    2 /* Private */,
       5,    0,   89,    2, 0x08,    3 /* Private */,
       6,    0,   90,    2, 0x08,    4 /* Private */,
       7,    0,   91,    2, 0x08,    5 /* Private */,
       8,    1,   92,    2, 0x08,    6 /* Private */,
      11,    0,   95,    2, 0x08,    8 /* Private */,
      12,    0,   96,    2, 0x08,    9 /* Private */,
      13,    0,   97,    2, 0x08,   10 /* Private */,
      14,    0,   98,    2, 0x08,   11 /* Private */,
      15,    0,   99,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_btHangman_clicked(); break;
        case 2: _t->on_bnSubmitName_clicked(); break;
        case 3: _t->on_bnBackToMain_clicked(); break;
        case 4: _t->on_btHighScore_clicked(); break;
        case 5: _t->on_bnBackToMain_2_clicked(); break;
        case 6: _t->errorBox((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 7: _t->on_bnGuess_clicked(); break;
        case 8: _t->on_btGetHint_clicked(); break;
        case 9: _t->on_bnBackToMain3_clicked(); break;
        case 10: _t->on_bnNewGame_clicked(); break;
        case 11: _t->on_bnExit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
