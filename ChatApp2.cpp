class User {
public:
    std::string username;

    User(const std::string& name) : username(name) {}

    void display() const {
        std::cout << "User: " << username << std::endl;
    }
};
