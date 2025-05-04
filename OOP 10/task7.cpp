#include<iostream>
#include<fstream>
using namespace std;

int main() {
ofstream fout("sensor_log.txt");
if(!fout) {
cerr<<"File error\n";
return 1;
}

fout<<"Temp:25\n";
cout<<"Pos:"<<fout.tellp()<<endl;

fout<<"Hum:60\n";
cout<<"Pos:"<<fout.tellp()<<endl;

fout<<"Press:1012\n";
cout<<"Pos:"<<fout.tellp()<<endl;

fout.close();
return 0;
}
