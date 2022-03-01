#include "mysystem.h"
#include "ui_mysystem.h"

#include <string.h>

Mysystem::Mysystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mysystem)
{
    ui->setupUi(this);
    this->setWindowTitle("system information");
    this->setWindowFlags(Qt::WindowStaysOnTopHint|Qt::WindowTitleHint| Qt::CustomizeWindowHint);
    connect(ui->back_button,SIGNAL(clicked()),this,SLOT(back_button_clicked()));

    ui->cpu_info_text->setText("cpu"+NULL);
    system_init();
}

Mysystem::~Mysystem()
{
    delete ui;
}

void Mysystem::back_button_clicked()
{
    emit back_system_signal();
    this->hide();
}

void Mysystem::system_init()
{
    get_cpu_info();
    get_mem_info();
    get_disk_info();
    get_ip_info();
}

//获得CPU信息
void Mysystem::get_cpu_info()
{
    //获得CPU占用信息
    QString info_file_name("/proc/stat");
    QFileInfo file_info(info_file_name);
    //判断文件是否存在
    if(file_info.isFile())
    {
        //提取文件中的数据
        std::FILE *cpu_fd = std::fopen(info_file_name.toLatin1().data(),"r");
        if(std::fscanf(cpu_fd,"cpu  %lld %lld %lld %lld %lld %lld %lld %lld",\
                    &cpu_info_data.usr,&cpu_info_data.nic,&cpu_info_data.sys, \
                    &cpu_info_data.idle,&cpu_info_data.iowait, \
                    &cpu_info_data.irq,&cpu_info_data.softirq, \
                    &cpu_info_data.steal) < 4)
        {
            qDebug() << "failed to read " << info_file_name;
        }
        std::fclose(cpu_fd);
        //计算CPU总资源数
        cpu_info_data.total = cpu_info_data.usr + cpu_info_data.nic + cpu_info_data.sys + cpu_info_data.idle + cpu_info_data.iowait + cpu_info_data.irq + cpu_info_data.softirq + cpu_info_data.steal;
        //获取CPU占用率
        cpu_info_data.rate = static_cast<double>(1.0 - ((double)cpu_info_data.idle/(double)cpu_info_data.total)) * 100.0;
        qDebug() << QString("cpu usage rate : %1%").arg(QString::number(cpu_info_data.rate, 'f', 2));

    }
    else
    {
        qDebug() << "No file named : " << info_file_name;
//        return;
    }

    //获取CPU温度
    QString temp_file_name("/sys/class/thermal/thermal_zone0/temp");
    file_info.setFile(temp_file_name);
    if(file_info.isFile())
    {
        QFile temp_file(temp_file_name);
        if(temp_file.open(QFile::ReadOnly))
        {
            QString cpu_temp_str = temp_file.readAll();
            cpu_info_data.temp = static_cast<double>((double)(cpu_temp_str.toDouble()) / 1000.0);

            qDebug() << QString("cpu temp : %1°C").arg(QString::number(cpu_info_data.temp,'f',2));
            temp_file.close();
        }
    }
    else
    {
        qDebug() << "No file named : " << temp_file_name;
//        return;
    }

    QStringList cpulist;
    QByteArray array;
    QStringList temlist;
    QFile file("/proc/stat");//指定文件路径
    bool isOk = file.open(QIODevice::ReadOnly);//检查文件打开情况
    if(isOk == true)
    {
        array = file.readAll();//读文件 内容放到字节组
        cpulist = QString(array).split('\n');       //通过“\n”将整个文件内容按字符串进行存储
        qDebug()<<"cpulist"<<cpulist.at(0);

        ui->cpu_info_text->setText(cpulist.at(0) +"\n" +cpulist.at(1)+"\n" +cpulist.at(2)+"\n" +cpulist.at(3));
    }
    file.close();//文件关闭
    for(int i=0;i<11;i++)
    {
      temlist = cpulist.at(i).split(QRegExp("\\s+"), QString::SkipEmptyParts);//按一个或多个空格分割
//      qDebug()<<"temlist"<<temlist;
    }
}

//获取内存信息
void Mysystem::get_mem_info()
{
    QString file_info_name("/proc/meminfo");
    QFileInfo file_info(file_info_name);
    if(file_info.isFile())
    {
        std::FILE *mem_fd = std::fopen(file_info_name.toLatin1().data(),"r");
        std::fscanf(mem_fd,"MemTotal: %lu kB\n",&mem_info_data.total);
        std::fscanf(mem_fd,"MemFree: %lu kB\n",&mem_info_data.free);
        std::fclose(mem_fd);
        mem_info_data.used = mem_info_data.total - mem_info_data.free;
        mem_info_data.rate = static_cast<double>((double)mem_info_data.used / (double)mem_info_data.total) * 100.0;

        mem_info_data.total = mem_info_data.total / 1024;
        mem_info_data.used  = mem_info_data.used  / 1024;
        mem_info_data.free  = mem_info_data.free  / 1024;

        qDebug() << QString("Mem : %1 / %2 MB    %3%").arg(mem_info_data.used).arg(mem_info_data.total).arg(QString::number(mem_info_data.rate,'f',2));
        ui->mem_total_lineEdit->setText(QString("%2 MB").arg(mem_info_data.total));
        ui->mem_use_lineEdit->setText(QString("%2 MB").arg(mem_info_data.used));
        ui->mem_free_lineEdit->setText(QString("%2 MB").arg(mem_info_data.free));
        ui->mem_rate_lineEdit->setText(QString("%3%").arg(QString::number(mem_info_data.rate,'f',2)));
    }
    else
    {
        qDebug() << "No file named : " << file_info_name;
        return;
    }
}

//获取硬盘中根目录使用情况
void Mysystem::get_disk_info()
{
    struct statfs disk_info;
    QString path = "/";

    if (statfs(path.toLatin1().data(), &disk_info) == -1)
    {
        qDebug() << "Failed to get file disk infomation";
        return;
    }

    disk_info_data.total = disk_info.f_blocks * disk_info.f_bsize;
    disk_info_data.free = disk_info.f_bfree * disk_info.f_bsize;
    disk_info_data.used = disk_info_data.total - disk_info_data.free;
    disk_info_data.rate = static_cast<double>((double)disk_info_data.used / (double)disk_info_data.total) * 100.0;

    disk_info_data.total = disk_info_data.total / 1024 / 1024;
    disk_info_data.free  = disk_info_data.free  / 1024 / 1024;
    disk_info_data.used  = disk_info_data.used  / 1024 / 1024;

    double total = static_cast<double>((double)disk_info_data.total / 1024);
    double used = static_cast<double>((double)disk_info_data.used / 1024);
    double free = static_cast<double>((double)disk_info_data.free / 1024);
    ui->disk_total_lineEdit->setText(QString("%2 GB").arg(QString::number(total,'f',2)));
    ui->disk_use_lineEdit->setText(QString("%1 GB").arg(QString::number(used,'f',2)));
    ui->disk_free_lineEdit->setText(QString("%1 GB").arg(QString::number(free,'f',2)));
    ui->disk_rate_lineEdit->setText(QString("%3%").arg(QString::number(disk_info_data.rate,'f',2)));

//    qDebug() << QString("Disk : %1 / %2 GB    %3%").arg(QString::number(used,'f',2)).arg(QString::number(total,'f',2)).arg(QString::number(disk_info_data.rate,'f',2));

}

void Mysystem::get_ip_info()
{
    QString str;
    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();
    foreach (QNetworkInterface info, list) {
//        qDebug()<<"name:"<<info.name();
//        qDebug()<<info.allAddresses();
        ui->ip_comboBox->addItem(info.name());
        count++;
        QList<QNetworkAddressEntry>entryList = info.addressEntries();
        foreach (QNetworkAddressEntry enlist, entryList)
        {
            if(enlist.ip().protocol() == QAbstractSocket::IPv4Protocol)
            {
                ui->ip_all_info_textBrowser->setText(str+"\n"+"Device:  "+info.name()+"\n"+"HardwareAddress:  "+info.hardwareAddress()+"\n"\
                                                     +"IP address:  "+enlist.ip().toString()+"\n"+"Netmask address:  "+enlist.netmask().toString()+"\n");
                str = ui->ip_all_info_textBrowser->document()->toPlainText();
            }
        }
    }
}



void Mysystem::on_ip_comboBox_activated(const QString &arg1)
{
    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();
    foreach (QNetworkInterface info, list) {
        QString name = info.name();
        if(arg1 == name)
        {
            QList<QNetworkAddressEntry>entryList = info.addressEntries();
            foreach (QNetworkAddressEntry enlist, entryList)
            {
                if(enlist.ip().protocol() == QAbstractSocket::IPv4Protocol)
                {
//                     qDebug()<<"IP:"<<enlist.ip().toString();
                     ui->ip_lineEdit->setText(enlist.ip().toString());
                }
            }

        }
    }
}
