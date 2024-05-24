#include "Utilis.h"


std::vector<std::string> m_data;
int CUtils::serverSocket;


std::vector<std::string> CUtils::understandData(std::string data, char delimiter)
{
	std::string tmp{}; // stocheaza temporar fiecare cuvant inteles
	std::vector<std::string> words; // vom returna cuvintele separate

	for (int i = 0; i < data.size(); i++) // verificam byte cu byte daca este delimitator sau nu
	{
		if (data[i] != delimiter)
		{
			tmp += data[i];
		}
		else
		{
			words.push_back(tmp);
			tmp = "";
		}
	}
	words.push_back(tmp); // adaug ultimul cuvant deoarece la final nu mai are #

	return words;
}

bool CUtils::bindSocket(int port)
{
	sockaddr_in serverAddr;
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(port); // Port number
	serverAddr.sin_addr.s_addr = INADDR_ANY; // Any incoming interface


	if (bind(serverSocket, reinterpret_cast<sockaddr*>(&serverAddr), sizeof(serverAddr)) == -1) {
		std::cerr << "Error: Bind failed\n";
		return false;
	}
	std::cout << "Server started and listening on port " << port << std::endl;
	return true;
}