/********************************************************************************
** Form generated from reading UI file 'mysystem.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSYSTEM_H
#define UI_MYSYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mysystem
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *cpu_info_text;
    QWidget *tab_2;
    QComboBox *ip_comboBox;
    QLineEdit *ip_lineEdit;
    QTextBrowser *ip_all_info_textBrowser;
    QPushButton *pushButton;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *mem_total_lineEdit;
    QLabel *label_5;
    QLineEdit *disk_total_lineEdit;
    QLabel *label_2;
    QLineEdit *mem_use_lineEdit;
    QLabel *label_6;
    QLineEdit *disk_use_lineEdit;
    QLabel *label_3;
    QLineEdit *mem_free_lineEdit;
    QLabel *label_7;
    QLineEdit *disk_free_lineEdit;
    QLabel *label_4;
    QLineEdit *mem_rate_lineEdit;
    QLabel *label_8;
    QLineEdit *disk_rate_lineEdit;
    QCommandLinkButton *back_button;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Mysystem)
    {
        if (Mysystem->objectName().isEmpty())
            Mysystem->setObjectName(QString::fromUtf8("Mysystem"));
        Mysystem->resize(480, 301);
        Mysystem->setMinimumSize(QSize(480, 300));
        Mysystem->setMaximumSize(QSize(480, 301));
        tabWidget = new QTabWidget(Mysystem);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 471, 241));
        QFont font;
        font.setKerning(true);
        tabWidget->setFont(font);
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setIconSize(QSize(16, 16));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        cpu_info_text = new QTextBrowser(tab);
        cpu_info_text->setObjectName(QString::fromUtf8("cpu_info_text"));
        cpu_info_text->setGeometry(QRect(0, 0, 471, 201));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        ip_comboBox = new QComboBox(tab_2);
        ip_comboBox->setObjectName(QString::fromUtf8("ip_comboBox"));
        ip_comboBox->setGeometry(QRect(0, 150, 111, 41));
        ip_lineEdit = new QLineEdit(tab_2);
        ip_lineEdit->setObjectName(QString::fromUtf8("ip_lineEdit"));
        ip_lineEdit->setGeometry(QRect(120, 150, 161, 41));
        ip_all_info_textBrowser = new QTextBrowser(tab_2);
        ip_all_info_textBrowser->setObjectName(QString::fromUtf8("ip_all_info_textBrowser"));
        ip_all_info_textBrowser->setGeometry(QRect(0, 0, 461, 141));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 150, 91, 41));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 10, 451, 181));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mem_total_lineEdit = new QLineEdit(layoutWidget);
        mem_total_lineEdit->setObjectName(QString::fromUtf8("mem_total_lineEdit"));
        mem_total_lineEdit->setReadOnly(true);

        gridLayout->addWidget(mem_total_lineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        disk_total_lineEdit = new QLineEdit(layoutWidget);
        disk_total_lineEdit->setObjectName(QString::fromUtf8("disk_total_lineEdit"));
        disk_total_lineEdit->setReadOnly(true);

        gridLayout->addWidget(disk_total_lineEdit, 0, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mem_use_lineEdit = new QLineEdit(layoutWidget);
        mem_use_lineEdit->setObjectName(QString::fromUtf8("mem_use_lineEdit"));
        mem_use_lineEdit->setReadOnly(true);

        gridLayout->addWidget(mem_use_lineEdit, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        disk_use_lineEdit = new QLineEdit(layoutWidget);
        disk_use_lineEdit->setObjectName(QString::fromUtf8("disk_use_lineEdit"));
        disk_use_lineEdit->setReadOnly(true);

        gridLayout->addWidget(disk_use_lineEdit, 1, 3, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        mem_free_lineEdit = new QLineEdit(layoutWidget);
        mem_free_lineEdit->setObjectName(QString::fromUtf8("mem_free_lineEdit"));
        mem_free_lineEdit->setReadOnly(true);

        gridLayout->addWidget(mem_free_lineEdit, 2, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        disk_free_lineEdit = new QLineEdit(layoutWidget);
        disk_free_lineEdit->setObjectName(QString::fromUtf8("disk_free_lineEdit"));
        disk_free_lineEdit->setReadOnly(true);

        gridLayout->addWidget(disk_free_lineEdit, 2, 3, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        mem_rate_lineEdit = new QLineEdit(layoutWidget);
        mem_rate_lineEdit->setObjectName(QString::fromUtf8("mem_rate_lineEdit"));
        mem_rate_lineEdit->setReadOnly(true);

        gridLayout->addWidget(mem_rate_lineEdit, 3, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        disk_rate_lineEdit = new QLineEdit(layoutWidget);
        disk_rate_lineEdit->setObjectName(QString::fromUtf8("disk_rate_lineEdit"));
        disk_rate_lineEdit->setReadOnly(true);

        gridLayout->addWidget(disk_rate_lineEdit, 3, 3, 1, 1);

        tabWidget->addTab(tab_3, QString());
        back_button = new QCommandLinkButton(Mysystem);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(0, 240, 331, 41));
        pushButton_2 = new QPushButton(Mysystem);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 240, 101, 41));

        retranslateUi(Mysystem);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Mysystem);
    } // setupUi

    void retranslateUi(QWidget *Mysystem)
    {
        Mysystem->setWindowTitle(QApplication::translate("Mysystem", "Form", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Mysystem", "CPU", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Mysystem", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Mysystem", "IP", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Mysystem", "memory total:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Mysystem", "disk total:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Mysystem", "memory use:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Mysystem", "disk use:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Mysystem", "memory free:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Mysystem", "disk free:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Mysystem", "memory rate:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Mysystem", "disk rate:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Mysystem", "memory", 0, QApplication::UnicodeUTF8));
        back_button->setText(QApplication::translate("Mysystem", "\350\277\224\345\233\236\344\270\273\347\233\256\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Mysystem", "\345\210\267\346\226\260\351\241\265\351\235\242", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Mysystem: public Ui_Mysystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSYSTEM_H
