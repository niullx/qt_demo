/****************************************************************************
** Meta object code from reading C++ file 'myserial.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "myserial.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myserial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Myserial[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,    9,    9,    9, 0x08,
      55,    9,    9,    9, 0x08,
      83,    9,    9,    9, 0x08,
     117,    9,    9,    9, 0x08,
     148,    9,    9,    9, 0x08,
     173,    9,    9,    9, 0x08,
     203,    9,    9,    9, 0x08,
     222,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Myserial[] = {
    "Myserial\0\0serial_signal_response()\0"
    "serial_back_click()\0on_refresh_Button_clicked()\0"
    "on_clear_receive_button_clicked()\0"
    "on_clear_send_button_clicked()\0"
    "on_send_button_clicked()\0"
    "on_open_button_port_clicked()\0"
    "serial_read_slot()\0on_save_para_clicked()\0"
};

void Myserial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Myserial *_t = static_cast<Myserial *>(_o);
        switch (_id) {
        case 0: _t->serial_signal_response(); break;
        case 1: _t->serial_back_click(); break;
        case 2: _t->on_refresh_Button_clicked(); break;
        case 3: _t->on_clear_receive_button_clicked(); break;
        case 4: _t->on_clear_send_button_clicked(); break;
        case 5: _t->on_send_button_clicked(); break;
        case 6: _t->on_open_button_port_clicked(); break;
        case 7: _t->serial_read_slot(); break;
        case 8: _t->on_save_para_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Myserial::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Myserial::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Myserial,
      qt_meta_data_Myserial, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Myserial::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Myserial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Myserial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Myserial))
        return static_cast<void*>(const_cast< Myserial*>(this));
    return QWidget::qt_metacast(_clname);
}

int Myserial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Myserial::serial_signal_response()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
