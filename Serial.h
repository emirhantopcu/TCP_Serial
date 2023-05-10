#ifndef SERIAL_H
#define SERIAL_H


#include <windows.h>
#include <iostream>
#include <stdio.h>

using namespace std;


class Serial
{	
public:
	Serial(LPCWSTR port);
	~Serial();
	void send(string str);

private: 
	LPCWSTR port;
	//HANDLE hSerial;
};

#endif
