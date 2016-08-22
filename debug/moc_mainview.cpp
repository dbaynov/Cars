/****************************************************************************
** Meta object code from reading C++ file 'mainview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainView_t {
    QByteArrayData data[16];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainView_t qt_meta_stringdata_MainView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MainView"
QT_MOC_LITERAL(1, 9, 12), // "refreshTable"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "Send"
QT_MOC_LITERAL(4, 28, 7), // "Subject"
QT_MOC_LITERAL(5, 36, 3), // "msg"
QT_MOC_LITERAL(6, 40, 16), // "DayToExactlyItem"
QT_MOC_LITERAL(7, 57, 4), // "item"
QT_MOC_LITERAL(8, 62, 6), // "daysTo"
QT_MOC_LITERAL(9, 69, 10), // "closeEvent"
QT_MOC_LITERAL(10, 80, 12), // "QCloseEvent*"
QT_MOC_LITERAL(11, 93, 5), // "event"
QT_MOC_LITERAL(12, 99, 13), // "iconActivated"
QT_MOC_LITERAL(13, 113, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(14, 147, 6), // "reason"
QT_MOC_LITERAL(15, 154, 21) // "on_btnRefresh_clicked"

    },
    "MainView\0refreshTable\0\0Send\0Subject\0"
    "msg\0DayToExactlyItem\0item\0daysTo\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "iconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0on_btnRefresh_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    2,   45,    2, 0x0a /* Public */,
       6,    2,   50,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,
      12,    1,   58,    2, 0x0a /* Public */,
      15,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::LongLong,    7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void MainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainView *_t = static_cast<MainView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshTable(); break;
        case 1: _t->Send((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: { QString _r = _t->DayToExactlyItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 5: _t->on_btnRefresh_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainView::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainView.data,
      qt_meta_data_MainView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainView.stringdata0))
        return static_cast<void*>(const_cast< MainView*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
