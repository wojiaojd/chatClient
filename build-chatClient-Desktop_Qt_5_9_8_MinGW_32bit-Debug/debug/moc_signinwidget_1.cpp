/****************************************************************************
** Meta object code from reading C++ file 'signinwidget_1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../chatClient/signinwidget_1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signinwidget_1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_signinWidget_1_t {
    QByteArrayData data[9];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_signinWidget_1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_signinWidget_1_t qt_meta_stringdata_signinWidget_1 = {
    {
QT_MOC_LITERAL(0, 0, 14), // "signinWidget_1"
QT_MOC_LITERAL(1, 15, 18), // "backToSigninWidget"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "signup"
QT_MOC_LITERAL(4, 42, 18), // "handleSignupResult"
QT_MOC_LITERAL(5, 61, 5), // "newId"
QT_MOC_LITERAL(6, 67, 6), // "signin"
QT_MOC_LITERAL(7, 74, 18), // "handleSigninResult"
QT_MOC_LITERAL(8, 93, 5) // "cmd_1"

    },
    "signinWidget_1\0backToSigninWidget\0\0"
    "signup\0handleSignupResult\0newId\0signin\0"
    "handleSigninResult\0cmd_1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_signinWidget_1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x0a /* Public */,
       4,    1,   43,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void signinWidget_1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        signinWidget_1 *_t = static_cast<signinWidget_1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToSigninWidget((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->signup(); break;
        case 2: _t->handleSignupResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->signin(); break;
        case 4: _t->handleSigninResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (signinWidget_1::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&signinWidget_1::backToSigninWidget)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject signinWidget_1::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_signinWidget_1.data,
      qt_meta_data_signinWidget_1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *signinWidget_1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *signinWidget_1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_signinWidget_1.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int signinWidget_1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void signinWidget_1::backToSigninWidget(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
