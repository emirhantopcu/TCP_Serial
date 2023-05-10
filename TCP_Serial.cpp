#include "TCP_Serial.h"
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <locale>
#include <codecvt>
#include <string>




TCP_Serial::TCP_Serial(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}


void TCP_Serial::on_radioButton_toggled(bool checked)  //serial radio
{
    if (checked) {
       
        ui.pushButton_2->setEnabled(true);
        ui.comboBox->setEnabled(true);
        if (ui.radioButton_2->isChecked()) {
            ui.radioButton_2->toggle();
        }
    }
    else {
        ui.pushButton_2->setEnabled(false);
        ui.comboBox->setEnabled(false);
        
    }

}

void TCP_Serial::on_radioButton_2_toggled(bool checked)  //tcp radio
{
    if (checked) {
        ui.lineEdit_2->setEnabled(true);
        ui.lineEdit_3->setEnabled(true);
        ui.pushButton_3->setEnabled(true);
        if (ui.radioButton->isChecked()) {
            ui.radioButton->toggle();
        }
    }
    else {
        ui.lineEdit_2->setEnabled(false);
        ui.lineEdit_3->setEnabled(false);
        ui.pushButton_3->setEnabled(false);
    }

}

void TCP_Serial::on_pushButton_2_clicked() //serial connect
{
    if (ui.comboBox->currentText().toStdString()._Equal("COM#")) {
        ui.label_6->setText("Please choose a port.");
        return;
    }
    ui.label_6->setText("");
    ui.pushButton_2->setEnabled(false);
    ui.pushButton->setEnabled(true);
    ui.groupBox_2->setEnabled(false);
    ui.comboBox->setEnabled(false);
    ui.pushButton_4->setEnabled(true);
    ui.label_5->setText("Serial");
    ui.radioButton_2->setEnabled(false);

}

void TCP_Serial::on_pushButton_3_clicked()  //tcp conect
{
    ui.pushButton_3->setEnabled(false);
    ui.pushButton->setEnabled(true);
    ui.groupBox->setEnabled(false);
    ui.pushButton_4->setEnabled(true);
    ui.label_5->setText("TCP/IP");
    ui.radioButton->setEnabled(false);

}

void TCP_Serial::on_pushButton_4_clicked()
{
    ui.pushButton_2->setEnabled(false);
    ui.pushButton->setEnabled(false);
    ui.groupBox_2->setEnabled(true);
    ui.comboBox->setEnabled(false);
    ui.pushButton_3->setEnabled(false);
    ui.pushButton_4->setEnabled(false);
    ui.groupBox->setEnabled(true);
    ui.label_5->setText("-------");

    ui.radioButton->setEnabled(true);
    ui.radioButton->setChecked(false);
    ui.radioButton_2->setEnabled(true);
    ui.radioButton_2->setChecked(false);
}

void TCP_Serial::on_pushButton_clicked()   //send
{
    if (ui.radioButton->isChecked()) {
        QString qs = ui.comboBox->currentText();
        string port_str = qs.toStdString();
        LPCWSTR port;
        wstring_convert<codecvt_utf8_utf16<wchar_t>> converter;
        wstring port_w = converter.from_bytes(port_str);
        port = port_w.c_str();
        Serial* ser = new Serial(port);

        QString send_qs = ui.lineEdit->text();
        ser->send(send_qs.toStdString());
        delete ser;
    }
    else if(ui.radioButton_2->isChecked()) {
        QString qs_ip = ui.lineEdit_2->text();
        QString qs_port = ui.lineEdit_3->text();
        QString qs_msg = ui.lineEdit->text();
        
        string ip_tcp = qs_ip.toStdString();
        string port_tcp = qs_port.toStdString();
        string msg_tcp = qs_msg.toStdString();
        
        TCPsocket * socket1 = new TCPsocket(ip_tcp, port_tcp);

        socket1->send_msg(msg_tcp);

    }
    
    ui.lineEdit->clear();
}



