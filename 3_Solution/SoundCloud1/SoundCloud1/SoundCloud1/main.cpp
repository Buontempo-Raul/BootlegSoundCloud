#include "TCPServer.h"

int main()
{
    const int PORT = 12345; // Portul pe care serverul va asculta

    TCPServer server(PORT);

    // Serverul va rămâne activ și va accepta conexiuni într-un buclă infinită
    // Pentru a încheia serverul, întrerupeți manual executarea programului

    return 0;
}