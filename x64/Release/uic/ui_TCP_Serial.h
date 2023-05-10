/********************************************************************************
** Form generated from reading UI file 'TCP_Serial.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCP_SERIAL_H
#define UI_TCP_SERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TCP_SerialClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QLabel *label_6;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *TCP_SerialClass)
    {
        if (TCP_SerialClass->objectName().isEmpty())
            TCP_SerialClass->setObjectName(QString::fromUtf8("TCP_SerialClass"));
        TCP_SerialClass->resize(400, 300);
        centralWidget = new QWidget(TCP_SerialClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(210, 20, 181, 191));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(60, 40, 113, 22));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(60, 80, 113, 22));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 31, 21));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 31, 21));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(50, 140, 81, 41));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 10, 89, 20));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(10, 20, 181, 191));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(false);
        comboBox->setGeometry(QRect(90, 40, 81, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 31, 21));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(50, 140, 81, 41));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setEnabled(true);
        radioButton->setGeometry(QRect(10, 10, 89, 20));
        radioButton->setChecked(false);
        radioButton->setAutoRepeat(false);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 90, 151, 20));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setGeometry(QRect(300, 220, 91, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 230, 41, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 250, 71, 20));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 220, 91, 61));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(160, 250, 81, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 220, 161, 21));
        TCP_SerialClass->setCentralWidget(centralWidget);

        retranslateUi(TCP_SerialClass);

        QMetaObject::connectSlotsByName(TCP_SerialClass);
    } // setupUi

    void retranslateUi(QMainWindow *TCP_SerialClass)
    {
        TCP_SerialClass->setWindowTitle(QCoreApplication::translate("TCP_SerialClass", "TCP_Serial", nullptr));
        groupBox_2->setTitle(QString());
        lineEdit_2->setText(QString());
        label_2->setText(QCoreApplication::translate("TCP_SerialClass", "IPv4:", nullptr));
        label_3->setText(QCoreApplication::translate("TCP_SerialClass", "Port:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TCP_SerialClass", "Select", nullptr));
        radioButton_2->setText(QCoreApplication::translate("TCP_SerialClass", "TCP/IP", nullptr));
        groupBox->setTitle(QString());
        comboBox->setItemText(0, QCoreApplication::translate("TCP_SerialClass", "COM#", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TCP_SerialClass", "COM1", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("TCP_SerialClass", "COM2", nullptr));

        label->setText(QCoreApplication::translate("TCP_SerialClass", "Port:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TCP_SerialClass", "Select", nullptr));
        radioButton->setText(QCoreApplication::translate("TCP_SerialClass", "Serial", nullptr));
        label_6->setText(QCoreApplication::translate("TCP_SerialClass", "<html><head/><body><p><br/></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TCP_SerialClass", "Reset", nullptr));
        label_4->setText(QCoreApplication::translate("TCP_SerialClass", "<html><head/><body><p>Mode:</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("TCP_SerialClass", "<html><head/><body><p>-------</p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("TCP_SerialClass", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TCP_SerialClass: public Ui_TCP_SerialClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCP_SERIAL_H
