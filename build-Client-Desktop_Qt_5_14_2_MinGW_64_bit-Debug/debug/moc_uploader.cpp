/****************************************************************************
** Meta object code from reading C++ file 'uploader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Client/uploader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uploader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Uploader_t {
    QByteArrayData data[9];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Uploader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Uploader_t qt_meta_stringdata_Uploader = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Uploader"
QT_MOC_LITERAL(1, 9, 11), // "errorHandle"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "error"
QT_MOC_LITERAL(4, 28, 9), // "uploadPDU"
QT_MOC_LITERAL(5, 38, 4), // "PDU*"
QT_MOC_LITERAL(6, 43, 3), // "pdu"
QT_MOC_LITERAL(7, 47, 8), // "finished"
QT_MOC_LITERAL(8, 56, 10) // "uploadFile"

    },
    "Uploader\0errorHandle\0\0error\0uploadPDU\0"
    "PDU*\0pdu\0finished\0uploadFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Uploader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       7,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Uploader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Uploader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorHandle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->uploadPDU((*reinterpret_cast< PDU*(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->uploadFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Uploader::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Uploader::errorHandle)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Uploader::*)(PDU * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Uploader::uploadPDU)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Uploader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Uploader::finished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Uploader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Uploader.data,
    qt_meta_data_Uploader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Uploader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Uploader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Uploader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Uploader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Uploader::errorHandle(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Uploader::uploadPDU(PDU * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Uploader::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
