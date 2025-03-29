std::ofstream logFile("chat.log", std::ios::app);
logFile << "New message: " << message << std::endl;
