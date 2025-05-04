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

    while(getline(fin,x)){

        istringstream iss(x);
        string type,id,name,year,extra,cert;

        getline(iss,type,',');
        getline(iss,id,',');
        getline(iss,name,',');
        getline(iss,year,',');
        getline(iss,extra,',');
        getline(iss,cert,',');
        bool flag;
        string text = x;
        size_t pos = text.find(",");
        if(pos == string::npos){
       // cout << "Found at : none " << endl;
        flag=0;
        }
        else{
           // cout << "Found at: " << pos;
            flag=1;
        }
    if(flag){
        int yr= stoi(year);
      cout<<"Year: "<<year<<endl;
    }
}
}
};


int main(){

 filing f1;
 f1.readdata();
    return 0;
}