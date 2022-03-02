#ifndef MYSERIAL_H
#define MYSERIAL_H

#include <QWidget>
#include <QDebug>
#include <QtSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QString>
#include <QSettings>    //ini读写
#include <QFile>

namespace Ui {
class Myserial;
}

class Myserial : public QWidget
{
    Q_OBJECT

public:
    explicit Myserial(QWidget *parent = 0);
    ~Myserial();

private slots:
    void serial_back_click();

    void on_refresh_Button_clicked();

    void on_clear_receive_button_clicked();

    void on_clear_send_button_clicked();

    void on_send_button_clicked();

    void on_open_button_port_clicked();

    void serial_read_slot();

    void on_save_para_clicked();

signals:
    void serial_signal_response();

private:
    void serial_init();
    bool SaveUartParam();
    void IniParamInit();

private:
    Ui::Myserial *ui;
    QSerialPort *serial;            //全局的串口对象
    QSettings *configIni;           //配置文件
};

#endif // MYSERIAL_H
