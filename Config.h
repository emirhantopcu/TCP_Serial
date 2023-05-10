#pragma once

#include <QWidget>
#include "ui_Config.h"

class Config : public QDialog
{
	Q_OBJECT

public:
	Config(QWidget *parent = Q_NULLPTR);
	~Config();

private:
	Ui::Config ui;
};
