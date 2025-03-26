#include <thread>

void handleClient(int clientSocket) {
    char buffer[4096];
    while (true) {
        recv(clientSocket, buffer, sizeof(buffer), 0);
        std::cout << "Message: " << buffer << std::endl;
    }
}
