/****************************************************************************
** Meta object code from reading C++ file 'sendthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sendthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendThread_t {
    QByteArrayData data[15];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendThread_t qt_meta_stringdata_SendThread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SendThread"
QT_MOC_LITERAL(1, 11, 11), // "threadError"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "error"
QT_MOC_LITERAL(4, 30, 1), // "t"
QT_MOC_LITERAL(5, 32, 3), // "Set"
QT_MOC_LITERAL(6, 36, 7), // "mSender"
QT_MOC_LITERAL(7, 44, 3), // "mTo"
QT_MOC_LITERAL(8, 48, 8), // "mSubject"
QT_MOC_LITERAL(9, 57, 5), // "mData"
QT_MOC_LITERAL(10, 63, 3), // "USR"
QT_MOC_LITERAL(11, 67, 3), // "PSW"
QT_MOC_LITERAL(12, 71, 8), // "SetError"
QT_MOC_LITERAL(13, 80, 6), // "mError"
QT_MOC_LITERAL(14, 87, 2) // "mT"

    },
    "SendThread\0threadError\0\0error\0t\0Set\0"
    "mSender\0mTo\0mSubject\0mData\0USR\0PSW\0"
    "SetError\0mError\0mT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       1,    1,   39,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       5,    6,   42,    2, 0x0a /* Public */,
      12,    2,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   13,   14,

       0        // eod
};

void SendThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendThread *_t = static_cast<SendThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->threadError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->threadError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Set((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 3: _t->SetError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SendThread::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendThread::threadError)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SendThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SendThread.data,
      qt_meta_data_SendThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SendThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SendThread.stringdata0))
        return static_cast<void*>(const_cast< SendThread*>(this));
    return QThread::qt_metacast(_clname);
}

int SendThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SendThread::threadError(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
