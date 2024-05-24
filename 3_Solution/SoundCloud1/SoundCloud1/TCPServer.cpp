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

#include <sqltypes.h>
#include <sql.h>			/// for the sql query connection
#include <sqlext.h>

#include "Utilis.h"

#include "YouTubeAPI.h"

///			CODES FOR INSTRUCTIONS
// 
// login = 1								1 # UserMail # Password
// register = 0								0 # UserName # UserMail # Password
// upload = 2								2 # FileName # UserName # FilePath
// search song in youtube = 3				3 # SearchString
// delete user = 4							4 # UserMail # Password 
// search song in local = 5					5 # UserName # searchQuery			
// print songs from local = 6				6 # UserName
// get path from song = 7					7 # UserName # SongName
// add song to liked = 8					8 # SongName # Url # UserName
// 
///			CODES FOR INSTRUCTIONS




void TCPServer::start(int port)
{
	if (!createSocket(port) || !CUtils::bindSocket(port) || !listenForConnections())
	{
		std::cerr << "Failed to start server" << std::endl;
		return;
	}

	/*
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
	*/
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
	CUtils::serverSocket = serverSocket;
	if (serverSocket == -1) {
		std::cerr << "Error: Could not create socket\n";
		return false;
	}
	return true;
}

//bool TCPServer::bindSocket(int port)
//{
//	sockaddr_in serverAddr;
//	serverAddr.sin_family = AF_INET;
//	serverAddr.sin_port = htons(port); // Port number
//	serverAddr.sin_addr.s_addr = INADDR_ANY; // Any incoming interface
//
//
//	if (bind(serverSocket, reinterpret_cast<sockaddr*>(&serverAddr), sizeof(serverAddr)) == -1) {
//		std::cerr << "Error: Bind failed\n";
//		return false;
//	}
//	std::cout << "Server started and listening on port " << port << std::endl;
//	return true;
//}

bool TCPServer::listenForConnections() {
	// Listen for incoming connections

	if (listen(serverSocket, SOMAXCONN) == -1) {
		std::cerr << "Error: Listen failed\n";
		return false;
	}
	std::cout << "Waiting for incoming connection...\n";
	// Accept incoming connections
	while (true) {
		std::cout << "Listening for Clients!\n";
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

	char delimiter = '#';

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

			//connectionTest();

			printf("%s", buffer);

			std::vector<std::string> data = CUtils::understandData(buffer, delimiter);
			int instrCode = std::stoi(data[0]);

			switch (instrCode)
			{
			case 1:
				verifyLogin(clientSocket, data);
				break;
			case 0:
				registerUser(clientSocket, data);
				break;
			case 3:
				uploadFile(clientSocket, data);
				break;
			case 2:
				searchSong(clientSocket,data);
				break;
			case 4:
				deleteUser(clientSocket, data);
				break;
			case 5:
				searchLocalSongs(clientSocket, data);
				break;
			case 6:
				printLocalSongs(clientSocket, data);
				break;
			case 7:
				getPathForSong(clientSocket, data);
				break;

			default:
				printf("Instruction Error. Check code!\n");
				break;
			}

			memset(buffer, 0, sizeof(buffer));

			//std::cout << "Received data from client: " << buffer << std::endl;
		}
	}


	// Close client socket
	closesocket(clientSocket);
}

void TCPServer::verifyLogin(int clientSocket, std::vector<std::string> data)		/// email # password
{
	if (DataBase::getInstance().verifyLogin(data)) {
		send(clientSocket, "true", 4, 0);
		if(logFile.is_open())
			logFile << clientSocket << ": " << DataBase::getInstance().getName(data[1]) << "has logged in into the app!\n";
	}
	else
	{
		send(clientSocket, "false", 5, 0);
		if (logFile.is_open())
			logFile << clientSocket << ": has FAILED to log into the app!\n";
	}
}

void TCPServer::registerUser(int clientSocket, std::vector<std::string> data)
{
	if (DataBase::getInstance().verifyLogin(data))
	{
		send(clientSocket, "false", 5, 0);
		logFile << clientSocket << ": " << data[1] << "has registered to the app!\n";
	}
	else
	{
		if (DataBase::getInstance().registerUser(data))
			send(clientSocket, "true", 4, 0);
		else
			send(clientSocket, "false", 5, 0);
	}
}

void TCPServer::searchSong(int clientSocket, std::vector<std::string> data)
{
	std::string apiKey = "AIzaSyBSA55J8hRw8rj-UHtKtQ2WMPGwyEf2QfA";
	std::string query = data[1];

	// Create an instance of YouTubeAPI
	YouTubeAPI youtubeAPI(apiKey);

	// Call the search method
	nlohmann::json result = youtubeAPI.search(query);

	std::string formattedResult;

	// Print the result
	if (!result.is_null()) {
		std::cout << result.dump(4) << std::endl;

		// Process the JSON data to extract titles, URLs, and thumbnails
		int count = 0;
		for (const auto& item : result["items"]) {
			if (count >= 5) break; // Limit to 5 results

			std::string title = item["snippet"]["title"];
			std::string videoId = item["id"]["videoId"];
			std::string url = "https://www.youtube.com/watch?v=" + videoId;
			std::string thumbnail = item["snippet"]["thumbnails"]["default"]["url"];

			// Append to the formatted result
			if (!formattedResult.empty()) {
				formattedResult += "#"; // Add separator
			}
			formattedResult += title + "#" + url + "#" + thumbnail;
			count++;
		}
	}
	else {
		std::cerr << "No results found." << std::endl;
	}

	// Output the formatted result for debugging
	std::cout << formattedResult << std::endl;
	send(clientSocket, formattedResult.c_str(), formattedResult.size(), 0);
}

void TCPServer::likedSongs(int clientSocket, std::vector<std::string> data)
{
	DataBase::getInstance().likedSong(data);
	send(clientSocket,"true",4,0);
}

void TCPServer::deleteUser(int clientSocket, std::vector<std::string> data)
{
	DataBase::getInstance().deleteUser(data);
	if (DataBase::getInstance().verifyLogin(data))
		send(clientSocket, "false", 5, 0);
	else
		send(clientSocket, "true", 4, 0);
}

void TCPServer::uploadFile(int clientSocket, std::vector<std::string> data)
{
	DataBase::getInstance().addSong(data);
	send(clientSocket, "true", 4, 0);
}

void TCPServer::searchLocalSongs(int clientSocket, std::vector<std::string> data)
{
	std::string results = DataBase::getInstance().searchSong(data);
	send(clientSocket, results.c_str(), results.size(), 0);
}

void TCPServer::printLocalSongs(int clientSocket, std::vector<std::string> data)
{
	std::string results = DataBase::getInstance().printSongs(data);
	send(clientSocket, results.c_str(), results.size(), 0);
}

void TCPServer::getPathForSong(int clientSocket, std::vector<std::string> data)
{
	std::string results = DataBase::getInstance().getPath(data);
	send(clientSocket, results.c_str(), results.size(), 0);
}
