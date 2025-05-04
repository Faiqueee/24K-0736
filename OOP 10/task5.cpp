#include "iostream"
#include "fstream"
#include "sstream"
#include "string"

using namespace std;

class filing {

ifstream fin;

public:

filing() {
fin.open("vehicles.txt");
if(!fin) {
cerr<<"Error opening file.\n";
}
}

void readdata() {
string x;
cout<<"-------------------------\n";

while(getline(fin,x)) {
istringstream iss(x);
string type,id,name,year,extra,cert;
float version;
int battery,cargo;

getline(iss,type,',');
getline(iss,id,',');
getline(iss,name,',');
getline(iss,year,',');
getline(iss,extra,',');
getline(iss,cert,',');

if(type=="AutonomousCar") {
size_t colonPos=extra.find(':');
if(colonPos!=string::npos) {
string versionStr=extra.substr(colonPos+1);
version=stof(versionStr);
cout<<"Type:"<<type<<endl;
cout<<"ID:"<<id<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Year:"<<year<<endl;
cout<<"Software Version:"<<version<<endl;
cout<<"Certification:"<<cert<<endl;
}
}

else if(type=="ElectricVehicle") {
size_t colonPos=extra.find(':');
if(colonPos!=string::npos) {
string batteryStr=extra.substr(colonPos+1);
battery=stoi(batteryStr);
cout<<"Type:"<<type<<endl;
cout<<"ID:"<<id<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Year:"<<year<<endl;
cout<<"Battery Capacity:"<<battery<<endl;
cout<<"Certification:"<<cert<<endl;
}
}

else if(type=="HybridTruck") {
size_t colonPos=extra.find(':');
size_t pipePos=extra.find('|');
if(colonPos!=string::npos&&pipePos!=string::npos) {
string cargoStr=extra.substr(colonPos+1,pipePos-colonPos-1);
size_t batteryPos=extra.find("Battery:");
string batteryStr=extra.substr(batteryPos+8);
cargo=stoi(cargoStr);
battery=stoi(batteryStr);
cout<<"Type:"<<type<<endl;
cout<<"ID:"<<id<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Year:"<<year<<endl;
cout<<"Cargo Capacity:"<<cargo<<endl;
cout<<"Battery Capacity:"<<battery<<endl;
cout<<"Certification:"<<cert<<endl;
}
}

else {
cout<<"Unknown vehicle type:"<<type<<endl;
}

cout<<"-------------------------\n";
}
}
};

int main() {
filing f1;
f1.readdata();
return 0;
}
