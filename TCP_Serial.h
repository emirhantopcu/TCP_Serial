#pragma once

#include <windows.h>
#include <iostream>
#include <stdio.h>

#include "Serial.h"
#include "TCPsocket.h"



using namespace std;

#include <QtWidgets/QMainWindow>
#include "ui_TCP_Serial.h"

class TCP_Serial : public QMainWindow
{
    Q_OBJECT

public:
    TCP_Serial(QWidget *parent = Q_NULLPTR);

private slots:
    void on_radioButton_toggled(bool checked);
    void on_radioButton_2_toggled(bool checked);
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_clicked();

private:
    Ui::TCP_SerialClass ui;
};
