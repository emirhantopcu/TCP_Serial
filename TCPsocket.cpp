#define _HAS_STD_BYTE 0

#include "TCPsocket.h"

#include <winsock2.h>
#include <ws2tcpip.h>
#include <thread>
#include <stdio.h>

#pragma comment(lib, "Ws2_32.lib")

TCPsocket::TCPsocket(string ip, string port)
{
	this->ip = ip;
	this->port = port;
}

TCPsocket::~TCPsocket()
{
}

void TCPsocket::send_msg(string msg)
{
	int iResult;
	WSADATA wsaData;
	struct addrinfo* result, * ptr, hints;




	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed: %d\n", iResult);
		ExitProcess(0);
	}

	SOCKET ConnectSocket;

	result = NULL;
	ptr = NULL;


	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;

	const char* ip_c = ip.c_str();
	const char* port_c = port.c_str();

	iResult = getaddrinfo(ip_c, port_c, &hints, &result);
	if (iResult != 0) {
		printf("getaddrinfo failed: %d\n", iResult);
		WSACleanup();
		ExitProcess(0);
	}

	ConnectSocket = INVALID_SOCKET;

	// Attempt to connect to the first address returned by
// the call to getaddrinfo
	ptr = result;

	// Create a SOCKET for connecting to server
	ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol);

	if (ConnectSocket == INVALID_SOCKET) {
		printf("Error at socket(): %ld\n", WSAGetLastError());
		freeaddrinfo(result);
		WSACleanup();
		ExitProcess(0);
	}

	iResult = connect(ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
	if (iResult == SOCKET_ERROR) {
		closesocket(ConnectSocket);
		ConnectSocket = INVALID_SOCKET;
	}

	freeaddrinfo(result);
	if (ConnectSocket == INVALID_SOCKET) {
		printf("Unable to connect to server!\n");
		WSACleanup();
	}

	const char* msg_c = msg.c_str();

	iResult = send(ConnectSocket, msg_c, (int)strlen(msg_c), 0);
	if (iResult == SOCKET_ERROR) {
		printf("send failed: %d\n", WSAGetLastError());
		closesocket(ConnectSocket);
		WSACleanup();
	}

	iResult = shutdown(ConnectSocket, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		printf("shutdown failed: %d\n", WSAGetLastError());
		closesocket(ConnectSocket);
		WSACleanup();
	}

	closesocket(ConnectSocket);
}

