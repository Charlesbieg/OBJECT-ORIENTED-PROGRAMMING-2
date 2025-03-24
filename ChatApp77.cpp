sockaddr_in serverAddr{};
serverAddr.sin_family = AF_INET;
serverAddr.sin_port = htons(54000);
serverAddr.sin_addr.s_addr = INADDR_ANY;

bind(serverSocket, (sockaddr*)&serverAddr, sizeof(serverAddr));
listen(serverSocket, SOMAXCONN);
