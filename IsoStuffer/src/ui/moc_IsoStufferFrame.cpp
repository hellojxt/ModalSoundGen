/****************************************************************************
** Meta object code from reading C++ file 'IsoStufferFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "IsoStufferFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IsoStufferFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IsoStufferFrame_t {
    QByteArrayData data[10];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IsoStufferFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IsoStufferFrame_t qt_meta_stringdata_IsoStufferFrame = {
    {
QT_MOC_LITERAL(0, 0, 15), // "IsoStufferFrame"
QT_MOC_LITERAL(1, 16, 9), // "next_step"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "show_params"
QT_MOC_LITERAL(4, 39, 9), // "load_mesh"
QT_MOC_LITERAL(5, 49, 9), // "save_mesh"
QT_MOC_LITERAL(6, 59, 17), // "export_to_stellar"
QT_MOC_LITERAL(7, 77, 18), // "convert_to_tetmesh"
QT_MOC_LITERAL(8, 96, 10), // "check_mesh"
QT_MOC_LITERAL(9, 107, 11) // "reload_mesh"

    },
    "IsoStufferFrame\0next_step\0\0show_params\0"
    "load_mesh\0save_mesh\0export_to_stellar\0"
    "convert_to_tetmesh\0check_mesh\0reload_mesh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IsoStufferFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IsoStufferFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IsoStufferFrame *_t = static_cast<IsoStufferFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->next_step(); break;
        case 1: _t->show_params(); break;
        case 2: _t->load_mesh(); break;
        case 3: _t->save_mesh(); break;
        case 4: _t->export_to_stellar(); break;
        case 5: _t->convert_to_tetmesh(); break;
        case 6: _t->check_mesh(); break;
        case 7: _t->reload_mesh(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject IsoStufferFrame::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_IsoStufferFrame.data,
      qt_meta_data_IsoStufferFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IsoStufferFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IsoStufferFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IsoStufferFrame.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int IsoStufferFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
