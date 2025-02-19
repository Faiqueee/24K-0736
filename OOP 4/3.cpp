#include <iostream>
using namespace std;

class car{

string *model;
string name;
int regno;
float price;

public:

car(string model,string name,int regno,float price){
    
    this->model=new string(model);
    this->name=name;
    this->regno=regno;
    this->price=price;

}

car(const car &object){
    
   model=new string(*object.model);
//    *model=*object.model;
    name=object.name;
    regno=object.regno;
    price=object.price;
}

void display(){
    
    cout<<"Model : "<<*model<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"Registeration number  : "<<regno<<endl;
    cout<<"---------------\n";
}

void modify(string m,string n,int rn,float p){

    *model=m;
    name=n;
    price=p;
    regno=rn;

}
~car(){
    delete model;
}
    
};

int main() {

car c1("X","Tesla",3123,20000);
c1.display();

car c2(c1);
c2.display();
//c2 = car("Camry","Honda",6666,7000);..creating temp var??
c2.modify("Camry","Honda",6666,7000);
c1.display();
c2.display();
    
return 0;
}
