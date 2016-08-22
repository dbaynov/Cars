/****************************************************************************
** Meta object code from reading C++ file 'smtpdriver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../smtpdriver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smtpdriver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_smtpDriver_t {
    QByteArrayData data[26];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smtpDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smtpDriver_t qt_meta_stringdata_smtpDriver = {
    {
QT_MOC_LITERAL(0, 0, 10), // "smtpDriver"
QT_MOC_LITERAL(1, 11, 9), // "SmtpError"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "error"
QT_MOC_LITERAL(4, 28, 1), // "t"
QT_MOC_LITERAL(5, 30, 6), // "status"
QT_MOC_LITERAL(6, 37, 8), // "SendMail"
QT_MOC_LITERAL(7, 46, 4), // "from"
QT_MOC_LITERAL(8, 51, 2), // "to"
QT_MOC_LITERAL(9, 54, 7), // "subject"
QT_MOC_LITERAL(10, 62, 3), // "msg"
QT_MOC_LITERAL(11, 66, 9), // "connectTo"
QT_MOC_LITERAL(12, 76, 6), // "server"
QT_MOC_LITERAL(13, 83, 4), // "port"
QT_MOC_LITERAL(14, 88, 9), // "readyRead"
QT_MOC_LITERAL(15, 98, 12), // "stateChanged"
QT_MOC_LITERAL(16, 111, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(17, 140, 11), // "socketState"
QT_MOC_LITERAL(18, 152, 13), // "errorReceived"
QT_MOC_LITERAL(19, 166, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(20, 195, 11), // "socketError"
QT_MOC_LITERAL(21, 207, 12), // "disconnected"
QT_MOC_LITERAL(22, 220, 9), // "connected"
QT_MOC_LITERAL(23, 230, 10), // "setUrField"
QT_MOC_LITERAL(24, 241, 3), // "USR"
QT_MOC_LITERAL(25, 245, 3) // "PSW"

    },
    "smtpDriver\0SmtpError\0\0error\0t\0status\0"
    "SendMail\0from\0to\0subject\0msg\0connectTo\0"
    "server\0port\0readyRead\0stateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "errorReceived\0QAbstractSocket::SocketError\0"
    "socketError\0disconnected\0connected\0"
    "setUrField\0USR\0PSW"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smtpDriver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       1,    1,   84,    2, 0x26 /* Public | MethodCloned */,
       5,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    4,   90,    2, 0x0a /* Public */,
      11,    2,   99,    2, 0x0a /* Public */,
      11,    1,  104,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  107,    2, 0x2a /* Public | MethodCloned */,
      14,    0,  108,    2, 0x0a /* Public */,
      15,    1,  109,    2, 0x0a /* Public */,
      18,    1,  112,    2, 0x0a /* Public */,
      21,    0,  115,    2, 0x0a /* Public */,
      22,    0,  116,    2, 0x0a /* Public */,
      23,    2,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   24,   25,

       0        // eod
};

void smtpDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        smtpDriver *_t = static_cast<smtpDriver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SmtpError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SmtpError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->SendMail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->connectTo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->connectTo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->connectTo(); break;
        case 7: _t->readyRead(); break;
        case 8: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 9: _t->errorReceived((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 10: _t->disconnected(); break;
        case 11: _t->connected(); break;
        case 12: _t->setUrField((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 9:
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
            typedef void (smtpDriver::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&smtpDriver::SmtpError)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (smtpDriver::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&smtpDriver::status)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject smtpDriver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_smtpDriver.data,
      qt_meta_data_smtpDriver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *smtpDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smtpDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_smtpDriver.stringdata0))
        return static_cast<void*>(const_cast< smtpDriver*>(this));
    return QObject::qt_metacast(_clname);
}

int smtpDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void smtpDriver::SmtpError(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void smtpDriver::status(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
