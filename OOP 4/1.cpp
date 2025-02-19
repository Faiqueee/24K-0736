#include <iostream>
using namespace std;

class car{
  
  string brand;
  string model;
  float price;
  bool avalstatus;
  
  public: 
  
  car(){
      brand="unknown";
      model="generic";
      price=0.0;
      avalstatus=true;
    
  }
  
  void checkavalstatus(){
      if(avalstatus)
      cout<<"This car is currently rented"<<endl;
      else cout<<"This car is avalible for rent"<<endl;
      
  }
  void update(string b,string m,float p,bool as){
      brand=b;
      model=m;
      price=p;
      avalstatus=as;
  }
  void rent(){
      if (avalstatus==true){
          cout<<"Car is out for rent cant rent it."<<endl;
          }
          else if(avalstatus==false){
              cout<<"You have successfully rented the car."<<endl;
              
          }
      
  }
  
    
};

int main() {
car c1;
c1.checkavalstatus();
c1.update("toyota","camry",9999.99,false);
c1.rent();


    return 0;
}