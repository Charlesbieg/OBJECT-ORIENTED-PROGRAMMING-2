if (send(clientSocket, message.c_str(), message.size(), 0) == -1) {
    std::cerr << "Failed to send message." << std::endl;
}
