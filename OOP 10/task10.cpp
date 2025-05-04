#include "FileHandler.h"

void FileHandler::createDataRecords() {
    std::ofstream file("data_records.txt");
    if (file.is_open()) {
        file << "Record 1\n";
        file << "Record 2\n";
        file << "Record 3\n";
        file << "Record 4\n";
        file.close();
        std::cout << "File created\n";
    } else {
        std::cout << "Create failed\n";
    }
}

void FileHandler::seekSpecificRecord() {
    std::ifstream file("data_records.txt");
    if (file.is_open()) {
        file.seekg(18);
        std::string line;
        std::getline(file,line);
        std::cout << "Third: " << line << "\n";
        file.close();
    } else {
        std::cout << "Open failed\n";
    }
}

int main() {
    FileHandler handler;
    handler.createDataRecords();
    handler.seekSpecificRecord();
    return 0;
}
