#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QNetworkInterface>
#include <QHostAddress>
#include <QHostInfo>
#include <QProcess>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QPalette>
#include <QTextCodec>
#include <stddef.h>

#include "myserial.h"
#include "mysystem.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void page_back_response();
    void serial_button_click();
    void system_button_click();

private:
    void system_info_init();
    void get_system_info();
    void get_system_uptime();
    void get_cpu_use();
    void get_mem_use();



private:
    Myserial *Pser;
    Mysystem *Psystem;

private:
    Ui::Widget *ui;
    QString cpufile="/proc/stat";
    QString memfile="/proc/meminfo";
    double cpu_total = 0;
    double cpu_use = 0;
    struct CpuInfo_data cpu_info_data;
};

#endif // WIDGET_H
