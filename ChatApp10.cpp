send(clientSocket, "Hello, Server!", 14, 0);
char buffer[4096];
recv(clientSocket, buffer, sizeof(buffer), 0);
