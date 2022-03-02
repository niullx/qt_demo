/********************************************************************************
** Form generated from reading UI file 'myserial.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSERIAL_H
#define UI_MYSERIAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Myserial
{
public:
    QWidget *widget;
    QCommandLinkButton *commandLinkButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_port;
    QLabel *label_2;
    QComboBox *comboBox_rate;
    QLabel *label_3;
    QComboBox *comboBox_data;
    QLabel *label_4;
    QComboBox *comboBox_check;
    QLabel *label_5;
    QComboBox *comboBox_stop;
    QHBoxLayout *horizontalLayout;
    QPushButton *open_button_port;
    QPushButton *refresh_Button;
    QPushButton *save_para;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit_received;
    QTextEdit *textEdit_send;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *send_button;
    QVBoxLayout *verticalLayout;
    QPushButton *clear_send_button;
    QPushButton *clear_receive_button;

    void setupUi(QWidget *Myserial)
    {
        if (Myserial->objectName().isEmpty())
            Myserial->setObjectName(QString::fromUtf8("Myserial"));
        Myserial->resize(480, 320);
        Myserial->setMinimumSize(QSize(480, 320));
        Myserial->setMaximumSize(QSize(480, 320));
        widget = new QWidget(Myserial);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 475, 281));
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(4800, 3000));
        commandLinkButton = new QCommandLinkButton(widget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 240, 453, 41));
        commandLinkButton->setLayoutDirection(Qt::RightToLeft);
        commandLinkButton->setIconSize(QSize(30, 30));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 0, 461, 231));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_port = new QComboBox(widget1);
        comboBox_port->setObjectName(QString::fromUtf8("comboBox_port"));

        gridLayout->addWidget(comboBox_port, 0, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_rate = new QComboBox(widget1);
        comboBox_rate->setObjectName(QString::fromUtf8("comboBox_rate"));

        gridLayout->addWidget(comboBox_rate, 1, 1, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox_data = new QComboBox(widget1);
        comboBox_data->setObjectName(QString::fromUtf8("comboBox_data"));

        gridLayout->addWidget(comboBox_data, 2, 1, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBox_check = new QComboBox(widget1);
        comboBox_check->setObjectName(QString::fromUtf8("comboBox_check"));

        gridLayout->addWidget(comboBox_check, 3, 1, 1, 1);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBox_stop = new QComboBox(widget1);
        comboBox_stop->setObjectName(QString::fromUtf8("comboBox_stop"));

        gridLayout->addWidget(comboBox_stop, 4, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        open_button_port = new QPushButton(widget1);
        open_button_port->setObjectName(QString::fromUtf8("open_button_port"));
        open_button_port->setMinimumSize(QSize(80, 60));
        open_button_port->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(open_button_port);

        refresh_Button = new QPushButton(widget1);
        refresh_Button->setObjectName(QString::fromUtf8("refresh_Button"));
        refresh_Button->setMinimumSize(QSize(80, 60));
        refresh_Button->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(refresh_Button);


        verticalLayout_2->addLayout(horizontalLayout);

        save_para = new QPushButton(widget1);
        save_para->setObjectName(QString::fromUtf8("save_para"));

        verticalLayout_2->addWidget(save_para);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEdit_received = new QTextEdit(widget1);
        textEdit_received->setObjectName(QString::fromUtf8("textEdit_received"));
        textEdit_received->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_received);

        textEdit_send = new QTextEdit(widget1);
        textEdit_send->setObjectName(QString::fromUtf8("textEdit_send"));

        verticalLayout_3->addWidget(textEdit_send);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        send_button = new QPushButton(widget1);
        send_button->setObjectName(QString::fromUtf8("send_button"));
        send_button->setMinimumSize(QSize(80, 80));
        send_button->setMaximumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(send_button);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        clear_send_button = new QPushButton(widget1);
        clear_send_button->setObjectName(QString::fromUtf8("clear_send_button"));

        verticalLayout->addWidget(clear_send_button);

        clear_receive_button = new QPushButton(widget1);
        clear_receive_button->setObjectName(QString::fromUtf8("clear_receive_button"));

        verticalLayout->addWidget(clear_receive_button);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(Myserial);

        QMetaObject::connectSlotsByName(Myserial);
    } // setupUi

    void retranslateUi(QWidget *Myserial)
    {
        Myserial->setWindowTitle(QApplication::translate("Myserial", "Form", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("Myserial", "\350\277\224\345\233\236\344\270\273\347\233\256\345\275\225", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Myserial", "\344\270\262\345\217\243\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Myserial", "\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Myserial", "\346\225\260\346\215\256\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Myserial", "\346\240\241\351\252\214\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Myserial", "\345\201\234\346\255\242\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        open_button_port->setText(QApplication::translate("Myserial", "\346\211\223\345\274\200\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        refresh_Button->setText(QApplication::translate("Myserial", "\345\210\267\346\226\260\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        save_para->setText(QApplication::translate("Myserial", "\344\277\235\345\255\230\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        textEdit_send->setHtml(QApplication::translate("Myserial", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        send_button->setText(QApplication::translate("Myserial", "\345\217\221\351\200\201\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        clear_send_button->setText(QApplication::translate("Myserial", "\346\270\205\351\231\244\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        clear_receive_button->setText(QApplication::translate("Myserial", "\346\270\205\351\231\244\346\216\245\346\224\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Myserial: public Ui_Myserial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSERIAL_H
