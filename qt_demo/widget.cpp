#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //支持Qt中文字库
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    system_info_init();

    connect(ui->serial_button,SIGNAL(clicked()),this,SLOT(serial_button_click()));
    Pser = new Myserial();
    connect(Pser,SIGNAL(serial_signal_response()),this,SLOT(page_back_response()));

    connect(ui->system_button,SIGNAL(clicked()),this,SLOT(system_button_click()));
    Psystem = new Mysystem();
    connect(Psystem,SIGNAL(back_system_signal()),this,SLOT(page_back_response()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::page_back_response()
{
    this->show();
}

void Widget::serial_button_click()
{
    Pser->show();
    this->hide();

}

void Widget::system_button_click()
{
    Psystem->show();
    this->hide();
}

void Widget::system_info_init()
{
    get_system_info();
    get_cpu_use();
    get_mem_use();
    get_system_uptime();
}

void Widget::get_system_info()
{
    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();
    foreach (QNetworkInterface info, list) {
        qDebug()<<"name:"<<info.name();
        qDebug()<<info.allAddresses();
        QList<QNetworkAddressEntry>entryList = info.addressEntries();
        foreach (QNetworkAddressEntry enlist, entryList)
        {

            if(enlist.ip().protocol() == QAbstractSocket::IPv4Protocol)
            {
                 qDebug()<<"IP:"<<enlist.ip().toString();
                 ui->lineEdit_name->setText(info.name());
                 ui->lineEdit_ip->setText(enlist.ip().toString());
            }
        }
    }
}

void Widget::get_cpu_use()
{    
    //获得CPU占用信息
    QString info_file_name("/proc/stat");
    QFileInfo file_info(info_file_name);
    //判断文件是否存在
    if(file_info.isFile())
    {
        //提取文件中的数据
        FILE *cpu_fd = fopen(info_file_name.toLatin1().data(),"r");
        if(fscanf(cpu_fd,"cpu  %lld %lld %lld %lld %lld %lld %lld %lld",\
                    &cpu_info_data.usr,&cpu_info_data.nic,&cpu_info_data.sys, \
                    &cpu_info_data.idle,&cpu_info_data.iowait, \
                    &cpu_info_data.irq,&cpu_info_data.softirq, \
                    &cpu_info_data.steal) < 4)
        {
            qDebug() << "failed to read " << info_file_name;
        }
        fclose(cpu_fd);
        //计算CPU总资源数
        cpu_info_data.total = cpu_info_data.usr + cpu_info_data.nic + cpu_info_data.sys + cpu_info_data.idle + cpu_info_data.iowait + cpu_info_data.irq + cpu_info_data.softirq + cpu_info_data.steal;
        //获取CPU占用率
        cpu_info_data.rate = static_cast<double>(1.0 - ((double)cpu_info_data.idle/(double)cpu_info_data.total)) * 100.0;
//        qDebug() << QString("cpu usage rate : %1%").arg(QString::number(cpu_info_data.rate, 'f', 2));
        ui->lineEdit_cpu_use->setText(QString("%1%").arg(QString::number(cpu_info_data.rate, 'f', 2)));

    }
    else
    {
        qDebug() << "No file named : " << info_file_name;
        return;
    }

}

void Widget::get_mem_use()
{
    QProcess process;
    QStringList memlist;
    QByteArray array;
    QStringList tem1,tem2;
    QFile file("/proc/meminfo");//指定文件路径
    bool isOk = file.open(QIODevice::ReadOnly);//检查文件打开情况
    if(isOk == true)
    {
        array = file.readAll();//读文件 内容放到字节组
        memlist = QString(array).split('\n');        //通过“\n”将整个文件内容按字符串进行存储
    }
    else
    {
        qDebug()<<"文件打开错误";
        return ;
    }
    file.close();//文件关闭
    tem1 = memlist.at(0).split(QRegExp("\\s+"), QString::SkipEmptyParts);//按一个或多个空格分割
    tem2 = memlist.at(1).split(QRegExp("\\s+"), QString::SkipEmptyParts);//按一个或多个空格分割
    float mem_usage=(1-(tem2.at(1).toFloat()/tem1.at(1).toFloat()))*100;
    ui->lineEdit_mem_use->setText(QString("%1%").arg(QString::number(mem_usage, 'f', 2)));
//    qDebug()<<tem1<<"获取CPU信息\n"<<tem2<<"获取CPU信息\n"<<mem_usage;

}

void Widget::get_system_uptime()
{

    QStringList uplist;
    QByteArray array;
    QStringList tem1;
    QFile file("/proc/uptime");//指定文件路径
    bool isOk = file.open(QIODevice::ReadOnly);//检查文件打开情况
    if(isOk == true)
    {
        array = file.readAll();//读文件 内容放到字节组
        uplist = QString(array).split('\n');        //通过“\n”将整个文件内容按字符串进行存储
        qDebug()<<"memlist"<<uplist;
    }
    else
    {
        qDebug()<<"文件打开错误";
        return ;
    }
    file.close();//文件关闭
    tem1 = uplist.at(0).split(QRegExp("\\s+"), QString::SkipEmptyParts);//按一个或多个空格分割
    ui->lineEdit_time->setText(tem1.at(0)+" sec");
    float num1 = tem1.at(0).toFloat();
    float num2 = tem1.at(1).toFloat();
    float num3 = num2/num1;
    ui->lineEdit_load->setText(QString::number(num3));
//    qDebug()<<tem1.at(0)<<"tem\n"<<tem1.at(1)<<"tem\n";
}
