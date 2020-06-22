/****************************************************************************
** Meta object code from reading C++ file 'sockhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../chatClient/sockhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sockhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SockHandler_t {
    QByteArrayData data[15];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SockHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SockHandler_t qt_meta_stringdata_SockHandler = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SockHandler"
QT_MOC_LITERAL(1, 12, 11), // "searchedUsr"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "UsrInfo*"
QT_MOC_LITERAL(4, 34, 4), // "info"
QT_MOC_LITERAL(5, 39, 11), // "initUsrList"
QT_MOC_LITERAL(6, 51, 12), // "signupResult"
QT_MOC_LITERAL(7, 64, 2), // "id"
QT_MOC_LITERAL(8, 67, 12), // "signinResult"
QT_MOC_LITERAL(9, 80, 5), // "cmd_1"
QT_MOC_LITERAL(10, 86, 13), // "connectServer"
QT_MOC_LITERAL(11, 100, 7), // "receive"
QT_MOC_LITERAL(12, 108, 16), // "getUserInfoBrief"
QT_MOC_LITERAL(13, 125, 3), // "uid"
QT_MOC_LITERAL(14, 129, 16) // "requestNewFriend"

    },
    "SockHandler\0searchedUsr\0\0UsrInfo*\0"
    "info\0initUsrList\0signupResult\0id\0"
    "signinResult\0cmd_1\0connectServer\0"
    "receive\0getUserInfoBrief\0uid\0"
    "requestNewFriend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SockHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   66,    2, 0x0a /* Public */,
      11,    0,   67,    2, 0x0a /* Public */,
      12,    1,   68,    2, 0x0a /* Public */,
      14,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void SockHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SockHandler *_t = static_cast<SockHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchedUsr((*reinterpret_cast< UsrInfo*(*)>(_a[1]))); break;
        case 1: _t->initUsrList((*reinterpret_cast< UsrInfo*(*)>(_a[1]))); break;
        case 2: _t->signupResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->signinResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->connectServer(); break;
        case 5: _t->receive(); break;
        case 6: _t->getUserInfoBrief((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->requestNewFriend((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SockHandler::*_t)(UsrInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SockHandler::searchedUsr)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SockHandler::*_t)(UsrInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SockHandler::initUsrList)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SockHandler::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SockHandler::signupResult)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SockHandler::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SockHandler::signinResult)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SockHandler::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_SockHandler.data,
      qt_meta_data_SockHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SockHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SockHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SockHandler.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int SockHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SockHandler::searchedUsr(UsrInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SockHandler::initUsrList(UsrInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SockHandler::signupResult(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SockHandler::signinResult(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
