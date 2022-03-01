#include "myserial.h"
#include "ui_myserial.h"

Myserial::Myserial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Myserial)
{
    ui->setupUi(this);
    this->setWindowTitle("serial");
    this->setWindowFlags(Qt::WindowStaysOnTopHint|Qt::WindowTitleHint| Qt::CustomizeWindowHint);
    connect(ui->commandLinkButton,SIGNAL(clicked()),this,SLOT(serial_back_click()));

    serial_init();
    IniParamInit();
}

Myserial::~Myserial()
{
    delete ui;
}

void Myserial::serial_back_click()
{
    emit serial_signal_response();
    this->hide();
}

void Myserial::serial_init()
{
    //填入串口选项
    ui->comboBox_rate->addItem("9600","9600");
    ui->comboBox_rate->addItem("19200","19200");
    ui->comboBox_rate->addItem("38400","38400");
    ui->comboBox_rate->addItem("57600","57600");
    ui->comboBox_rate->addItem("115200","115200");
    ui->comboBox_rate->addItem("921600","921600");

    ui->comboBox_data->addItem("8",8);
    ui->comboBox_data->addItem("7",7);

    ui->comboBox_check->addItem("无校验",0);
    ui->comboBox_check->addItem("奇校验",1);
    ui->comboBox_check->addItem("偶校验",2);

    ui->comboBox_stop->addItem("1位",1);
    ui->comboBox_stop->addItem("2位",2);

}

void Myserial::on_refresh_Button_clicked()
{
    ui->textEdit_received->moveCursor(QTextCursor::End);        //光标移动到结尾
    ui->textEdit_received->insertPlainText("\r\n串口初始化：\r\n");

    //先清除所有串口列表
     ui->comboBox_port->clear();

   foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
   {
       QSerialPort serial;
       serial.setPort(info);

       if(serial.open(QIODevice::ReadWrite))
       {
           ui->textEdit_received->insertPlainText("可用："+serial.portName()+"\r\n");
           ui->comboBox_port->addItem(serial.portName());
           serial.close();
       }
       else
       {
           ui->textEdit_received->insertPlainText("不可用："+serial.portName()+"\r\n");
       }
   }

   ui->textEdit_received->moveCursor(QTextCursor::End);        //光标移动到结尾
}



void Myserial::on_clear_receive_button_clicked()
{
    ui->textEdit_received->clear();
}

void Myserial::on_clear_send_button_clicked()
{
    ui->textEdit_send->clear();
}

void Myserial::on_send_button_clicked()
{
    if(ui->open_button_port->text() == "打开串口")
    {
        QMessageBox::warning(NULL, "警告", "未打开可用串口，无法发送数据！\r\n\r\n");
        return;
    }
    QString data =ui->textEdit_send->toPlainText();

   serial->write(data.toLatin1());


}

void Myserial::on_open_button_port_clicked()
{
    //尝试打开串口
    if(ui->open_button_port->text() == tr("打开串口"))
    {
        if(ui->comboBox_port->currentText() == "" )
        {
            QMessageBox::warning(NULL, "警告", "无可开启串口！\r\n\r\n");
            return;
        }

        serial = new QSerialPort;
        //设置串口名
        serial->setPortName(ui->comboBox_port->currentText());
        //打开串口
        serial->open(QIODevice::ReadWrite);
        //设置波特率
        serial->setBaudRate(ui->comboBox_rate->currentText().toInt());
        //设置数据位
        switch (ui->comboBox_data->currentData().toInt())
        {
            case 8:
                serial->setDataBits(QSerialPort::Data8);
                break;
            case 7:
                serial->setDataBits(QSerialPort::Data7);
                break;
            default:
                break;
        }
        //设置校验位
        switch (ui->comboBox_check->currentIndex())
        {
            case 0:
                serial->setParity(QSerialPort::NoParity);
                break;
            case 1:
                serial->setParity(QSerialPort::EvenParity);
                break;
            case 2:
                serial->setParity(QSerialPort::OddParity);
                break;
            default:
                break;
        }
        //设置停止位
        switch(ui->comboBox_stop->currentIndex())
        {
            case 0:
                serial->setStopBits(QSerialPort::OneStop);
                break;
            case 1:
                serial->setStopBits(QSerialPort::TwoStop);
                break;
            default:
                break;
        }
        //设置流控制
        serial->setFlowControl(QSerialPort::NoFlowControl); //设置为无流控制

        //关闭设置菜单使能
        ui->comboBox_port->setEnabled(false);
        ui->comboBox_data->setEnabled(false);
        ui->comboBox_check->setEnabled(false);
        ui->comboBox_stop->setEnabled(false);
        ui->comboBox_rate->setEnabled(false);
        ui->open_button_port->setText("关闭串口");

        //连接信号和槽函数，串口有数据可读时，调用ReadData()函数读取数据并处理。
        connect(serial,SIGNAL(readyRead()),this,SLOT(serial_read_slot()));
        ui->open_button_port->setStyleSheet("background-color:red");
    }
    else
    {
        if(serial->isOpen())       //原先串口打开，则关闭串口
        {
            serial->close();
        }

        //释放串口
        delete serial;
        serial = NULL;

        //恢复使能
        ui->comboBox_port->setEnabled(true);
        ui->comboBox_rate->setEnabled(true);
        ui->comboBox_data->setEnabled(true);
        ui->comboBox_check->setEnabled(true);
        ui->comboBox_stop->setEnabled(true);
        ui->open_button_port->setText("打开串口");
        ui->open_button_port->setStyleSheet("");
    }
}

void Myserial::serial_read_slot()
{
    QString buf;
    buf = QString(serial->readAll());
    ui->textEdit_received->append(buf);
}

//保存参数
bool Myserial::SaveUartParam()
{
    if(configIni == NULL)
        return false;

    //串口配置相关

    //波特率
    configIni->setValue("uartParam/BaudRate",ui->comboBox_rate->currentText());
    //数据位
    configIni->setValue("uartParam/DataBit",ui->comboBox_data->currentText());
    //奇偶校验位
    configIni->setValue("uartParam/Parity",ui->comboBox_check->currentText());
    //停止位
    configIni->setValue("uartParam/StopBit",ui->comboBox_stop->currentText());

    return true;
}

//根据配置文件初始化参数
void Myserial::IniParamInit()
{
    if(QFile::exists("/home/niu/project/qt_demo/qss/param.ini"))
    {
       configIni = new QSettings("/home/niu/project/t_demo/qss/param.ini", QSettings::IniFormat);
    }
    else if(QFile::exists("/qss/param.ini"))
    {
       configIni = new QSettings("/qss/param.ini", QSettings::IniFormat);
    }
    else
    {
       configIni = NULL;
       return;
    }

    configIni->setIniCodec("UTF-8");

    //波特率
    QString  baudRate = configIni->value("uartParam/BaudRate").toString();
    ui->comboBox_rate->setCurrentText(baudRate);

    //数据位
    QString  dataBit = configIni->value("uartParam/DataBit").toString();
    ui->comboBox_data->setCurrentText(dataBit);

    //奇偶校验位
    QString  parity = configIni->value("uartParam/Parity").toString();
    qDebug()<<"parity:"<<parity;
    ui->comboBox_check->setCurrentText(parity);

    //停止位
    QString  stopBit = configIni->value("uartParam/StopBit").toString();
    ui->comboBox_stop->setCurrentText(stopBit);

}

void Myserial::on_save_para_clicked()
{
    if(SaveUartParam())
    {
        QMessageBox::information(NULL,"保存参数","保存成功");
    }
}
