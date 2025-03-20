class Client {
public:
    std::string username;

    Client(const std::string& name) : username(name) {}

    void connect() {
        std::cout << username << " connected to the server." << std::endl;
    }
};
