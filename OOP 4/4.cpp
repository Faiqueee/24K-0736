#include <iostream>
using namespace std;

class car{
  
  string brand;
  string model;
  float price;
  bool avalstatus;
  float *revenue;
  int days;
  
  public: 
  
  car(string brand,string model,float price,bool avalstatus,int days){
      
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
      revenue= new float(0);
      days=0;
      
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
      
  cout<<"Enter number of days for car renting : ";

  cin>>days;
 
  cout<<"You have successfully rented the car."<<endl;
          
  if(days>5&&days<10) cout<<"With an applied disount of 5 percent."<<endl;
 
  else if(days>10) cout<<"With an applied disount of 10 percent."<<endl;
          
              
    }
 }
    
  
  void revenuee(){
 
  if(days>0 && days<5)
  *revenue=price*days;
  
  else if(days>5 && days <10)
  *revenue=price*days*0.95;
  
  else if(days>10)
  *revenue=price*days*0.9;
  
  else cout<<"Error!!"<<endl;

  cout<<"Total revenue generated for this car : "<<*revenue<<endl;
}

~car(){

    delete revenue;
}
    
};

int main() {
car c1;
c1.checkavalstatus();
c1.update("toyota","camry",100,false);
c1.rent();
c1.revenuee();

    return 0;
}