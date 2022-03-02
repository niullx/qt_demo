/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QLabel *label_4;
    QLineEdit *lineEdit_ip;
    QLabel *label_2;
    QLineEdit *lineEdit_load;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEdit_mem_use;
    QLabel *label_6;
    QLineEdit *lineEdit_cpu_use;
    QLineEdit *lineEdit_time;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *serial_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *bluetooth_button;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *system_button;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(480, 320);
        Widget->setMinimumSize(QSize(480, 320));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 50, 471, 105));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setReadOnly(true);

        gridLayout->addWidget(lineEdit_name, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 2);

        lineEdit_ip = new QLineEdit(widget);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setReadOnly(true);

        gridLayout->addWidget(lineEdit_ip, 0, 4, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_load = new QLineEdit(widget);
        lineEdit_load->setObjectName(QString::fromUtf8("lineEdit_load"));
        lineEdit_load->setReadOnly(true);

        gridLayout->addWidget(lineEdit_load, 1, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_mem_use = new QLineEdit(widget);
        lineEdit_mem_use->setObjectName(QString::fromUtf8("lineEdit_mem_use"));
        lineEdit_mem_use->setReadOnly(true);

        gridLayout->addWidget(lineEdit_mem_use, 2, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 2, 1, 2);

        lineEdit_cpu_use = new QLineEdit(widget);
        lineEdit_cpu_use->setObjectName(QString::fromUtf8("lineEdit_cpu_use"));
        lineEdit_cpu_use->setReadOnly(true);

        gridLayout->addWidget(lineEdit_cpu_use, 2, 4, 1, 1);

        lineEdit_time = new QLineEdit(widget);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));
        lineEdit_time->setReadOnly(true);

        gridLayout->addWidget(lineEdit_time, 1, 4, 1, 1);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(20, 173, 441, 101));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        serial_button = new QPushButton(widget_2);
        serial_button->setObjectName(QString::fromUtf8("serial_button"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serial_button->sizePolicy().hasHeightForWidth());
        serial_button->setSizePolicy(sizePolicy);
        serial_button->setMinimumSize(QSize(120, 60));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferDefault);
        serial_button->setFont(font);
//        serial_button->setTabletTracking(false);
        serial_button->setLayoutDirection(Qt::LeftToRight);
        serial_button->setAutoFillBackground(false);
        serial_button->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(serial_button);

        horizontalSpacer = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bluetooth_button = new QPushButton(widget_2);
        bluetooth_button->setObjectName(QString::fromUtf8("bluetooth_button"));
        sizePolicy.setHeightForWidth(bluetooth_button->sizePolicy().hasHeightForWidth());
        bluetooth_button->setSizePolicy(sizePolicy);
        bluetooth_button->setMinimumSize(QSize(120, 60));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        bluetooth_button->setFont(font1);
        bluetooth_button->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(bluetooth_button);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        system_button = new QPushButton(widget_2);
        system_button->setObjectName(QString::fromUtf8("system_button"));
        sizePolicy.setHeightForWidth(system_button->sizePolicy().hasHeightForWidth());
        system_button->setSizePolicy(sizePolicy);
        system_button->setMinimumSize(QSize(120, 60));
        system_button->setFont(font1);
//        system_button->setToolTipDuration(-1);
        system_button->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(system_button);

        horizontalSpacer_3 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        system_button->raise();
        serial_button->raise();
        bluetooth_button->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "IP\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\347\263\273\347\273\237\350\264\237\350\275\275\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "\344\270\212\347\224\265\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "\345\206\205\345\255\230\344\275\277\347\224\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget", "CPU\344\275\277\347\224\250\357\274\232", 0, QApplication::UnicodeUTF8));
        serial_button->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        bluetooth_button->setText(QApplication::translate("Widget", "\350\223\235\347\211\231\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        system_button->setText(QApplication::translate("Widget", "\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
