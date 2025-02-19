#include <iostream>
using namespace std;

class car{
  
  string brand;
  string model;
  float price;
  bool avalstatus;
  
  public: 
  
  car(string brand,string model,float price,bool avalstatus){
      
      this->brand=brand;
      this->model=model;
      this->price=price;
      this->avalstatus=avalstatus;
      
  }
  
  
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
            int x;
  cout<<"Enter number of days for car renting : ";
  cin>>x;
              cout<<"You have successfully rented the car."<<endl;
          if(x>5&&x<10) cout<<"With an applied disount of 5 percent."<<endl;
          else if(x>10)
          cout<<"With an applied disount of 10 percent."<<endl;
          
              
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