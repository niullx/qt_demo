#ifndef MYSYSTEM_H
#define MYSYSTEM_H

#include <QWidget>
#include <QSysInfo>
#include <QLabel>
#include <QVBoxLayout>
#include <QDebug>
#include <QString>
#include <QFileInfo>
#include <QSettings>
#include <QNetworkInterface>
#include <stddef.h>

#include "include.h"

namespace Ui {
class Mysystem;
}

class Mysystem : public QWidget
{
    Q_OBJECT

public:
    explicit Mysystem(QWidget *parent = 0);
    ~Mysystem();

private slots:
    void back_button_clicked();

    void on_ip_comboBox_activated(const QString &arg1);

signals:
    void back_system_signal();

private:
    void system_init();
    void get_cpu_info();
    void get_mem_info();
    void get_disk_info();
    void get_ip_info();
    struct CpuInfo_data cpu_info_data;
    struct MemInfo_data mem_info_data;
    struct DiskInfo_data disk_info_data;
    int count=0;

private:
    Ui::Mysystem *ui;
};

#endif // MYSYSTEM_H
