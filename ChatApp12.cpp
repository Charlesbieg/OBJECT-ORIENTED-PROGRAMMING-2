std::vector<int> clients;

void broadcast(const std::string& message) {
    for (int client : clients) {
        send(client, message.c_str(), message.size() + 1, 0);
    }
}
