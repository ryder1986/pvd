/****************************************************************************
** Meta object code from reading C++ file 'playerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/playerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlayerWidget_t {
    QByteArrayData data[16];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerWidget_t qt_meta_stringdata_PlayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PlayerWidget"
QT_MOC_LITERAL(1, 13, 8), // "selected"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "PlayerWidget*"
QT_MOC_LITERAL(4, 37, 1), // "w"
QT_MOC_LITERAL(5, 39, 12), // "rect_changed"
QT_MOC_LITERAL(6, 52, 13), // "QList<QPoint>"
QT_MOC_LITERAL(7, 66, 15), // "set_layout_data"
QT_MOC_LITERAL(8, 82, 4), // "data"
QT_MOC_LITERAL(9, 87, 10), // "check_rate"
QT_MOC_LITERAL(10, 98, 21), // "mouseDoubleClickEvent"
QT_MOC_LITERAL(11, 120, 12), // "QMouseEvent*"
QT_MOC_LITERAL(12, 133, 15), // "mousePressEvent"
QT_MOC_LITERAL(13, 149, 1), // "e"
QT_MOC_LITERAL(14, 151, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(15, 169, 14) // "mouseMoveEvent"

    },
    "PlayerWidget\0selected\0\0PlayerWidget*\0"
    "w\0rect_changed\0QList<QPoint>\0"
    "set_layout_data\0data\0check_rate\0"
    "mouseDoubleClickEvent\0QMouseEvent*\0"
    "mousePressEvent\0e\0mouseReleaseEvent\0"
    "mouseMoveEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   60,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      12,    1,   67,    2, 0x0a /* Public */,
      14,    1,   70,    2, 0x0a /* Public */,
      15,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,   13,
    QMetaType::Void, 0x80000000 | 11,   13,
    QMetaType::Void, 0x80000000 | 11,   13,

       0        // eod
};

void PlayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerWidget *_t = static_cast<PlayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< PlayerWidget*(*)>(_a[1]))); break;
        case 1: _t->rect_changed((*reinterpret_cast< QList<QPoint>(*)>(_a[1]))); break;
        case 2: _t->set_layout_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->check_rate(); break;
        case 4: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlayerWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPoint> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlayerWidget::*_t)(PlayerWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerWidget::selected)) {
                *result = 0;
            }
        }
        {
            typedef void (PlayerWidget::*_t)(QList<QPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerWidget::rect_changed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject PlayerWidget::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_PlayerWidget.data,
      qt_meta_data_PlayerWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerWidget.stringdata0))
        return static_cast<void*>(const_cast< PlayerWidget*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int PlayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PlayerWidget::selected(PlayerWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlayerWidget::rect_changed(QList<QPoint> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
