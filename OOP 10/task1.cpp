#include "iostream"
#include "fstream"
using namespace std;

class X{

ifstream fin;
string fname;

public:

X(string x) : fname(x){

fin.open(fname);

if(!fin){
    cout<<"File not opened.\n";
}
else cout<<"File opened.\n";

}

void readdata(){

string text;

while(getline(fin,text)){
    cout<<text<<endl;
}
cout<<text;
}

~X(){
    fin.close();
}

};


int main(){

    X x1("vehicles.txt");
    x1.readdata();


    return 0;
}