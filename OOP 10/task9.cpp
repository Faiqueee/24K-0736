#include "FileHandler.h"

void FileHandler::createLargeLog() {
    std::ofstream file("large_log.txt");
    if (file.is_open()) {
        file << "This is the first part of the log.\n";
        file << "This is the second part of the log.\n";
        file << "And the third part.\n";
        file.close();
        std::cout << "Log created\n";
    } else {
        std::cout << "Create failed\n";
    }
}

void FileHandler::checkReadPosition() {
    std::ifstream file("large_log.txt");
    if (file.is_open()) {
        char buf[11]={};
        file.read(buf,10);
        std::cout << buf << "\n";
        std::cout << file.tellg() << "\n";
        file.read(buf,10);
        std::cout << buf << "\n";
        std::cout << file.tellg() << "\n";
        file.close();
    } else {
        std::cout << "Open failed\n";
    }
}

int main() {
    FileHandler handler;
    handler.createLargeLog();
    handler.checkReadPosition();
    return 0;
}
