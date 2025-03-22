int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
if (serverSocket == -1) {
    std::cerr << "Failed to create server socket." << std::endl;
}
