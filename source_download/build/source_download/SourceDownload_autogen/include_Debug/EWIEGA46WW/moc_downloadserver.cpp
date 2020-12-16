/****************************************************************************
** Meta object code from reading C++ file 'downloadserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../source_download/downloadserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DownloadServer_t {
    QByteArrayData data[11];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DownloadServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DownloadServer_t qt_meta_stringdata_DownloadServer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DownloadServer"
QT_MOC_LITERAL(1, 15, 17), // "sigAssetsFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "sigHandleFinished"
QT_MOC_LITERAL(4, 52, 16), // "sigProcessUpdate"
QT_MOC_LITERAL(5, 69, 14), // "onHttpFinished"
QT_MOC_LITERAL(6, 84, 15), // "onHttpReadyRead"
QT_MOC_LITERAL(7, 100, 15), // "OnReplyProgress"
QT_MOC_LITERAL(8, 116, 9), // "bytesRead"
QT_MOC_LITERAL(9, 126, 10), // "totalBytes"
QT_MOC_LITERAL(10, 137, 16) // "onImportFinished"

    },
    "DownloadServer\0sigAssetsFinished\0\0"
    "sigHandleFinished\0sigProcessUpdate\0"
    "onHttpFinished\0onHttpReadyRead\0"
    "OnReplyProgress\0bytesRead\0totalBytes\0"
    "onImportFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   54,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    2,   56,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,
    QMetaType::Void,

       0        // eod
};

void DownloadServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadServer *_t = static_cast<DownloadServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigAssetsFinished(); break;
        case 1: _t->sigHandleFinished(); break;
        case 2: _t->sigProcessUpdate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->onHttpFinished(); break;
        case 4: _t->onHttpReadyRead(); break;
        case 5: _t->OnReplyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->onImportFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DownloadServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadServer::sigAssetsFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DownloadServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadServer::sigHandleFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DownloadServer::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadServer::sigProcessUpdate)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DownloadServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DownloadServer.data,
      qt_meta_data_DownloadServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DownloadServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DownloadServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DownloadServer::sigAssetsFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DownloadServer::sigHandleFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DownloadServer::sigProcessUpdate(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
