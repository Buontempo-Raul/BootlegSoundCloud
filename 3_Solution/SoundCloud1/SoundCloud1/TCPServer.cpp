
#include "TCPServer.h"
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN


#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

//#include "Application.h"
//#include "RequestRegNormalUser.h"
#include "DataBase.h"
//#include "BDComm.h"

#include <iostream>
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>
#include <thread>



void TCPServer::start(int port)
{
	if (!createSocket(port) || !bindSocket(port) || !listenForConnections())
	{
		std::cerr << "Failed to start server" << std::endl;
		return;
	}

	std::cout << "Server started, listening on port " << port << std::endl;

	while (true)
	{
		sockaddr_in clientAddr;
		socklen_t clientAddrLen = sizeof(clientAddr);
		int clientSocket = accept(serverSocket, reinterpret_cast<sockaddr*>(&clientAddr), &clientAddrLen);
		if (clientSocket == -1)
		{
			std::cerr << "Error: Failed to accept connection from client" << std::endl;
			continue;
		}

		//std::cout << "Client connected: " << inet_ntoa(clientAddr.sin_addr) << ":" << ntohs(clientAddr.sin_port) << std::endl;

		// Handle client in a separate thread or process
		return;
		handleClient(clientSocket);
	}
}

//int ServerConnection::receive(char* receive, const int size) const
//{
//	int receive_bytes = ::recv(serverSocket, receive, size, 0);
//	return receive_bytes;
//}

bool TCPServer::createSocket(int port) {

	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);
	// Create a socket
	serverSocket = socket(AF_INET, SOCK_STREAM, 0);
	if (serverSocket == -1) {
		std::cerr << "Error: Could not create socket\n";
		return false;
	}
	return true;
}

bool TCPServer::bindSocket(int port)
{
	sockaddr_in serverAddr;
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(port); // Port number
	serverAddr.sin_addr.s_addr = INADDR_ANY; // Any incoming interface

	if (bind(serverSocket, (sockaddr*)&serverAddr, sizeof(serverAddr)) == -1) {
		std::cerr << "Error: Bind failed\n";
		return false;
	}
	std::cout << "Server started and listening on port " << port << std::endl;
	return true;
}

bool TCPServer::listenForConnections() {
	// Listen for incoming connections

	if (listen(serverSocket, SOMAXCONN) == -1) {
		std::cerr << "Error: Listen failed\n";
		return false;
	}
	std::cout << "Waiting for incoming connection...\n";
	// Accept incoming connections
	while (true) {
		std::cout << "ma aflu in listen for connections!in while\n";
		int clientSocket = accept(serverSocket, nullptr, nullptr);
		if (clientSocket == -1) {
			std::cerr << "Error: Accept failed\n";
			continue;
		}


		std::cout << "Connection accepted from client!\n";
		// Create a new thread to handle the client
		std::thread clientThread(&TCPServer::handleClient, this, clientSocket);
		clientThread.detach(); // Detach the thread so it runs independently
	}
	return true;
}

void TCPServer::handleClient(int clientSocket) {
	// Handle client request
	char buffer[1024];

	while (true)
	{
		std::cout << "(Asteapta interactiune de la client...)\n";
		int bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
		if (bytesReceived == SOCKET_ERROR) {
			std::cerr << "Error: Receive failed\n";
			break;
		}
		else if (bytesReceived == 0) {
			std::cerr << "Client disconnected\n";
			break;
		}
		else {
			buffer[bytesReceived] = '\0'; // Null-terminate the received data
			printf("Acesta este mesajul:%s\n", buffer);


			if (DataBase::getInstance().connect())
			{
				printf("Conectat la baza de date!\n");
				exit(-1);
			}
			else
			{
				printf("Nu se poate realiza conexiunea cu baza de date!\n");
				exit(-1);
			}

			DataBase::getInstance().disconnect();


			memset(buffer, 0, sizeof(buffer));

			//std::cout << "Received data from client: " << buffer << std::endl;
		}
	}


	// Close client socket
	closesocket(clientSocket);
}
