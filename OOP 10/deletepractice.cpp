// #include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class filing {
    ifstream fin;

public:
    filing() {
        fin.open("vehicles.txt");
        if (!fin) cout << "Error occurred while opening file\n";
        else cout << "File opened successfully\n";
    }

    void readata() {
        string line;
        while (getline(fin, line)) {
            istringstream iss(line);
            string type, id, name, year, extradata, cert;

            getline(iss, type, ',');
            getline(iss, id, ',');
            getline(iss, name, ',');
            getline(iss, year, ',');
            getline(iss, extradata, ',');
            getline(iss, cert, ',');

            cout << "Type: " << type << endl;
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Year: " << year << endl;
            cout << "Extra Data: " << extradata << endl;
            cout << "Certification: " << cert << endl;
            cout << "-----------------------------\n";
        }
    }
};

int main() {
    filing f1;
    f1.readata();
    return 0;
}
