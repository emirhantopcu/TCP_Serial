#include "Serial.h"

#include <windows.h>
#include <iostream>
#include <stdio.h>

Serial::Serial(LPCWSTR port)
{
    this->port = port;
}

Serial::~Serial()
{
}


void Serial::send(string str)
{
    HANDLE hSerial = CreateFile(port,
        GENERIC_READ | GENERIC_WRITE,
        0,
        0,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        0);

    if (hSerial == INVALID_HANDLE_VALUE) {
        if (GetLastError() == ERROR_FILE_NOT_FOUND) {
            printf("Serial port does not exist.");
        }
        printf("Error1");
    }

    DCB dcbSerialParams = { 0 };
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);
    if (!GetCommState(hSerial, &dcbSerialParams)) {
        //error getting state
    }
    dcbSerialParams.BaudRate = CBR_9600;
    dcbSerialParams.ByteSize = 8;
    dcbSerialParams.StopBits = ONESTOPBIT;
    dcbSerialParams.Parity = NOPARITY;
    if (!SetCommState(hSerial, &dcbSerialParams)) {
        //error setting serial port state


    }

    COMMTIMEOUTS timeouts = { 0 };
    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;
    if (!SetCommTimeouts(hSerial, &timeouts)) {
        //error occureed. Inform 
    }


    char szBuff[1024];
    strcpy(szBuff, str.c_str());
    
    DWORD dwBytesRead = 0;
    WriteFile(hSerial, szBuff, strlen(szBuff), &dwBytesRead, NULL);
    CloseHandle(hSerial);
}
