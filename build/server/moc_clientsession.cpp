/****************************************************************************
** Meta object code from reading C++ file 'clientsession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../server/clientsession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientsession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientSession_t {
    QByteArrayData data[37];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientSession_t qt_meta_stringdata_ClientSession = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClientSession"
QT_MOC_LITERAL(1, 14, 17), // "get_server_config"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "char*"
QT_MOC_LITERAL(4, 39, 3), // "buf"
QT_MOC_LITERAL(5, 43, 12), // "socket_error"
QT_MOC_LITERAL(6, 56, 14), // "ClientSession*"
QT_MOC_LITERAL(7, 71, 1), // "c"
QT_MOC_LITERAL(8, 73, 14), // "client_request"
QT_MOC_LITERAL(9, 88, 7), // "request"
QT_MOC_LITERAL(10, 96, 11), // "QByteArray&"
QT_MOC_LITERAL(11, 108, 3), // "ret"
QT_MOC_LITERAL(12, 112, 17), // "session_operation"
QT_MOC_LITERAL(13, 130, 3), // "req"
QT_MOC_LITERAL(14, 134, 4), // "addr"
QT_MOC_LITERAL(15, 139, 3), // "len"
QT_MOC_LITERAL(16, 143, 9), // "cam_index"
QT_MOC_LITERAL(17, 153, 4), // "int&"
QT_MOC_LITERAL(18, 158, 8), // "ret_size"
QT_MOC_LITERAL(19, 167, 14), // "handle_alg_out"
QT_MOC_LITERAL(20, 182, 3), // "out"
QT_MOC_LITERAL(21, 186, 14), // "error_happened"
QT_MOC_LITERAL(22, 201, 18), // "count_begin_symbol"
QT_MOC_LITERAL(23, 220, 2), // "ba"
QT_MOC_LITERAL(24, 223, 16), // "count_end_symbol"
QT_MOC_LITERAL(25, 240, 8), // "find_pos"
QT_MOC_LITERAL(26, 249, 6), // "endpos"
QT_MOC_LITERAL(27, 256, 4), // "left"
QT_MOC_LITERAL(28, 261, 15), // "try_get_obj_buf"
QT_MOC_LITERAL(29, 277, 3), // "src"
QT_MOC_LITERAL(30, 281, 3), // "dst"
QT_MOC_LITERAL(31, 285, 13), // "get_valid_buf"
QT_MOC_LITERAL(32, 299, 10), // "handle_msg"
QT_MOC_LITERAL(33, 310, 12), // "displayError"
QT_MOC_LITERAL(34, 323, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(35, 352, 11), // "socketError"
QT_MOC_LITERAL(36, 364, 2) // "ip"

    },
    "ClientSession\0get_server_config\0\0char*\0"
    "buf\0socket_error\0ClientSession*\0c\0"
    "client_request\0request\0QByteArray&\0"
    "ret\0session_operation\0req\0addr\0len\0"
    "cam_index\0int&\0ret_size\0handle_alg_out\0"
    "out\0error_happened\0count_begin_symbol\0"
    "ba\0count_end_symbol\0find_pos\0endpos\0"
    "left\0try_get_obj_buf\0src\0dst\0get_valid_buf\0"
    "handle_msg\0displayError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "ip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       8,    3,   90,    2, 0x06 /* Public */,
      12,    6,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  110,    2, 0x0a /* Public */,
      21,    0,  113,    2, 0x0a /* Public */,
      22,    1,  114,    2, 0x0a /* Public */,
      24,    1,  117,    2, 0x0a /* Public */,
      25,    3,  120,    2, 0x0a /* Public */,
      28,    2,  127,    2, 0x0a /* Public */,
      31,    2,  132,    2, 0x0a /* Public */,
      32,    0,  137,    2, 0x0a /* Public */,
      33,    1,  138,    2, 0x0a /* Public */,
      36,    0,  141,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Int, QMetaType::QByteArray, 0x80000000 | 10, QMetaType::VoidStar,    9,   11,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::VoidStar, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, 0x80000000 | 17,   13,   14,   15,   16,    4,   18,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,   20,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QByteArray,   23,
    QMetaType::Int, QMetaType::QByteArray,   23,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 17, 0x80000000 | 17,   23,   26,   27,
    QMetaType::Bool, QMetaType::QByteArray, 0x80000000 | 10,   29,   30,
    QMetaType::Bool, 0x80000000 | 10, 0x80000000 | 10,   29,   30,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::QString,

       0        // eod
};

void ClientSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientSession *_t = static_cast<ClientSession *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->get_server_config((*reinterpret_cast< char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->socket_error((*reinterpret_cast< ClientSession*(*)>(_a[1]))); break;
        case 2: { int _r = _t->client_request((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->session_operation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 4: _t->handle_alg_out((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->error_happened(); break;
        case 6: { int _r = _t->count_begin_symbol((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->count_end_symbol((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->find_pos((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: { bool _r = _t->try_get_obj_buf((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->get_valid_buf((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->handle_msg(); break;
        case 12: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 13: { QString _r = _t->ip();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientSession* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (ClientSession::*_t)(char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSession::get_server_config)) {
                *result = 0;
            }
        }
        {
            typedef void (ClientSession::*_t)(ClientSession * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSession::socket_error)) {
                *result = 1;
            }
        }
        {
            typedef int (ClientSession::*_t)(QByteArray , QByteArray & , void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSession::client_request)) {
                *result = 2;
            }
        }
        {
            typedef void (ClientSession::*_t)(int , void * , int , int , char * , int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSession::session_operation)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject ClientSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientSession.data,
      qt_meta_data_ClientSession,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientSession::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientSession.stringdata0))
        return static_cast<void*>(const_cast< ClientSession*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
int ClientSession::get_server_config(char * _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void ClientSession::socket_error(ClientSession * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
int ClientSession::client_request(QByteArray _t1, QByteArray & _t2, void * _t3)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
void ClientSession::session_operation(int _t1, void * _t2, int _t3, int _t4, char * _t5, int & _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
