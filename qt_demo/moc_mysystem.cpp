/****************************************************************************
** Meta object code from reading C++ file 'mysystem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mysystem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mysystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Mysystem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,    9,    9,    9, 0x08,
      58,   53,    9,    9, 0x08,
      92,    9,    9,    9, 0x08,
     116,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Mysystem[] = {
    "Mysystem\0\0back_system_signal()\0"
    "back_button_clicked()\0arg1\0"
    "on_ip_comboBox_activated(QString)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
};

void Mysystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Mysystem *_t = static_cast<Mysystem *>(_o);
        switch (_id) {
        case 0: _t->back_system_signal(); break;
        case 1: _t->back_button_clicked(); break;
        case 2: _t->on_ip_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Mysystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Mysystem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Mysystem,
      qt_meta_data_Mysystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Mysystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Mysystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Mysystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mysystem))
        return static_cast<void*>(const_cast< Mysystem*>(this));
    return QWidget::qt_metacast(_clname);
}

int Mysystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Mysystem::back_system_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
