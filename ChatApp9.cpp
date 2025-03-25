int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
sockaddr_in serverAddr;
serverAddr.sin_family = AF_INET;
serverAddr.sin_port = htons(54000);
inet_pton(AF_INET, "127.0.0.1", &serverAddr.sin_addr);

connect(clientSocket, (sockaddr*)&serverAddr, sizeof(serverAddr));
