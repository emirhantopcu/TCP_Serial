#ifndef TCPSOCKET_H
#define TCPSOCKET_H

#include <stdio.h>
#include <string>

using namespace std;

class TCPsocket
{
public:
	TCPsocket(string ip, string port);
	~TCPsocket();
	void send_msg(string msg);
private:
	string ip;
	string port;
};

#endif