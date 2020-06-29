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
    QByteArrayData data[23];
    char stringdata0[242];
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
QT_MOC_LITERAL(10, 86, 20), // "recvNewFriendRequest"
QT_MOC_LITERAL(11, 107, 20), // "recvNewFriendConfirm"
QT_MOC_LITERAL(12, 128, 11), // "recvMsgFrom"
QT_MOC_LITERAL(13, 140, 6), // "sender"
QT_MOC_LITERAL(14, 147, 3), // "msg"
QT_MOC_LITERAL(15, 151, 13), // "connectServer"
QT_MOC_LITERAL(16, 165, 7), // "receive"
QT_MOC_LITERAL(17, 173, 16), // "getUserInfoBrief"
QT_MOC_LITERAL(18, 190, 3), // "uid"
QT_MOC_LITERAL(19, 194, 16), // "requestNewFriend"
QT_MOC_LITERAL(20, 211, 16), // "confirmNewFriend"
QT_MOC_LITERAL(21, 228, 6), // "sendTo"
QT_MOC_LITERAL(22, 235, 6) // "recver"

    },
    "SockHandler\0searchedUsr\0\0UsrInfo*\0"
    "info\0initUsrList\0signupResult\0id\0"
    "signinResult\0cmd_1\0recvNewFriendRequest\0"
    "recvNewFriendConfirm\0recvMsgFrom\0"
    "sender\0msg\0connectServer\0receive\0"
    "getUserInfoBrief\0uid\0requestNewFriend\0"
    "confirmNewFriend\0sendTo\0recver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SockHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       8,    1,   88,    2, 0x06 /* Public */,
      10,    1,   91,    2, 0x06 /* Public */,
      11,    1,   94,    2, 0x06 /* Public */,
      12,    2,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      19,    1,  107,    2, 0x0a /* Public */,
      20,    1,  110,    2, 0x0a /* Public */,
      21,    2,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   13,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   18,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   22,   14,

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
        case 4: _t->recvNewFriendRequest((*reinterpret_cast< UsrInfo*(*)>(_a[1]))); break;
        case 5: _t->recvNewFriendConfirm((*reinterpret_cast< UsrInfo*(*)>(_a[1]))); break;
        case 6: _t->recvMsgFrom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 7: _t->connectServer(); break;
        case 8: _t->receive(); break;
        case 9: _t->getUserInfoBrief((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: _t->requestNewFriend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->confirmNewFriend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sendTo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
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
        {
            typedef void (SockHandler::*_t)(UsrInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SockHandler::recvNewFriendRequest)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SockHandler::*_t)(UsrInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SockHandler::recvNewFriendConfirm)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SockHandler::*_t)(int , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SockHandler::recvMsgFrom)) {
                *result = 6;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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

// SIGNAL 4
void SockHandler::recvNewFriendRequest(UsrInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SockHandler::recvNewFriendConfirm(UsrInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SockHandler::recvMsgFrom(int _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
