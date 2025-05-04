#include "iostream"
#include "fstream"
#include "sstream"
#include "string"

using namespace std;

class filing{

ifstream fin;

public:

filing(){
fin.open("vehicles.txt");
}

void readdata(){
    string x;
float f;
int i;
    while(getline(fin,x)){

        istringstream iss(x);
        string type,id,name,year,extra,cert;
       
        if(type=="AutonomousCar"){
        getline(iss,type,',');
        getline(iss,id,',');
        getline(iss,name,',');
        getline(iss,year,',');
        getline(iss,extra,':');
        getline(iss,cert,',');
    f=stof(extra);  
    }
        else if(type=="ElectricVehicle"){
            getline(iss,type,',');
            getline(iss,id,',');
            getline(iss,name,',');
            getline(iss,year,',');
            getline(iss,extra,':');
            getline(iss,cert,',');
        i=stoi(extra);
        }
        else continue;
        
bool flag;
    
size_t pos = x.find(",");
    if(pos == string::npos){
   // cout << "Found at : none " << endl;
    flag=0;
    }
    else{
       // cout << "Found at: " << pos;
        flag=1;
    }
if(flag){
        cout<<"Type: "<<type<<endl;
        // cout<<"ID: "<<id<<endl;
        // cout<<"Name: "<<name<<endl;
        // cout<<"Year: "<<year<<endl;
        // cout<<"ExtraData: "<<extra<<endl;
        // cout<<"Certification: "<<cert<<endl;
        // cout<<"-------------------------"<<endl;
    if(type=="AutonomousCar"){
    cout<<"Software version : "<<f<<endl;
    }
    else if(type=="ElectricVehicle"){
    
    cout<<"Battery capacity: "<<i<<endl;
    
    }
}
}
}
};


int main(){

 filing f1;
 f1.readdata();
    return 0;
}

