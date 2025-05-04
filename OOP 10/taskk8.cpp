#include<iostream>
#include<fstream>
using namespace std;

int main() {
fstream file("config.txt", ios::out);
file<<"AAAAA"<<"BBBBB"<<"CCCCC";
file.close();

file.open("config.txt", ios::in|ios::out);
file.seekp(5); // start of second block
file<<"XXXXX";
file.close();

file.open("config.txt");
string data;
getline(file, data);
cout<<data<<endl;
file.close();
return 0;
}
