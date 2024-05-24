
#pragma once
#include <iostream>
#include <vector>

#include "DataBase.h"
//#include "BDComm.h"
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN


#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

#include <windows.h>
#include <stdio.h>
#include <thread>


class CUtils
{
public:
	static std::vector<std::string> getData() { return m_data; }
	static std::vector<std::string> understandData(std::string, char);
	static bool bindSocket(int port);
	
	static int serverSocket;

private:
	static std::vector<std::string> m_data;

};
