/****************************************************************************
** Meta object code from reading C++ file 'sqldriver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sqldriver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqldriver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_sqlDriver_t {
    QByteArrayData data[13];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sqlDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sqlDriver_t qt_meta_stringdata_sqlDriver = {
    {
QT_MOC_LITERAL(0, 0, 9), // "sqlDriver"
QT_MOC_LITERAL(1, 10, 8), // "SqlError"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "error"
QT_MOC_LITERAL(4, 26, 1), // "t"
QT_MOC_LITERAL(5, 28, 12), // "openDataBase"
QT_MOC_LITERAL(6, 41, 8), // "location"
QT_MOC_LITERAL(7, 50, 8), // "getModel"
QT_MOC_LITERAL(8, 59, 25), // "QSqlRelationalTableModel*"
QT_MOC_LITERAL(9, 85, 12), // "refreshModel"
QT_MOC_LITERAL(10, 98, 6), // "Select"
QT_MOC_LITERAL(11, 105, 5), // "table"
QT_MOC_LITERAL(12, 111, 5) // "value"

    },
    "sqlDriver\0SqlError\0\0error\0t\0openDataBase\0"
    "location\0getModel\0QSqlRelationalTableModel*\0"
    "refreshModel\0Select\0table\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sqlDriver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       1,    1,   49,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    2,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    0x80000000 | 8,
    QMetaType::Void,
    QMetaType::QStringList, QMetaType::QString, QMetaType::QString,   11,   12,

       0        // eod
};

void sqlDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sqlDriver *_t = static_cast<sqlDriver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SqlError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SqlError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->openDataBase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QSqlRelationalTableModel* _r = _t->getModel();
            if (_a[0]) *reinterpret_cast< QSqlRelationalTableModel**>(_a[0]) = _r; }  break;
        case 4: _t->refreshModel(); break;
        case 5: { QStringList _r = _t->Select((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (sqlDriver::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sqlDriver::SqlError)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject sqlDriver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sqlDriver.data,
      qt_meta_data_sqlDriver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *sqlDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sqlDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_sqlDriver.stringdata0))
        return static_cast<void*>(const_cast< sqlDriver*>(this));
    return QObject::qt_metacast(_clname);
}

int sqlDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void sqlDriver::SqlError(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
