#pragma once

#include <vector>
#include <string>
#include <fstream>

class TCPServer
{
public:
	TCPServer(int port)
	{
		logFile.open("LogFile.txt", std::ios::app);
		start(port);
	}

	void start(int port);
	//int receive(char* receive, const int size) const;
private:
	int serverSocket;
	std::ofstream logFile;

	bool createSocket(int port);
	//bool bindSocket(int port);
	bool listenForConnections();
	void handleClient(int);

	//int bind_plus(SOCKET s, const sockaddr* name, int namelen);


	void verifyLogin(int clientSocket, std::vector<std::string> data);
	void registerUser(int clientSocket, std::vector<std::string> data);
	void searchSong(int clientSocket, std::vector<std::string> data);
	void deleteUser(int clientSocket, std::vector<std::string> data);
	void uploadFile(int clientSocket, std::vector<std::string> data);
	void searchLocalSongs(int clientSocket, std::vector<std::string> data);
	void printLocalSongs(int clientSocket, std::vector<std::string> data);
	void getPathForSong(int clientSocket, std::vector<std::string> data);

};