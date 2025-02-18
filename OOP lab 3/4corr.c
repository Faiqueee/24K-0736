#include <iostream>
using namespace std;

class car{
  
  string brand;
  string model;
  double fuelcap;
  double currentfuel;


  public:
  
  void drive(){
      double x;
      cout<<"Enter fuel to be consumed for travelling : ";
        cin>>x;
        while(x>currentfuel){
      
        cout<<"[limit exceeded] Re-nter fuel to be consumed for travelling : ";
        cin>>x;
        }
        currentfuel-=x;
            
  }
  void refuel(){
      double x;
      cout<<"Enter fuel quantity for refill : ";
      cin>>x;
      while((x+currentfuel)>fuelcap){
         
          cout<<"Limit exceeded re-enter :  ";
          cin>>x;
          }
              currentfuel+=x;
  }
  
  void fuelstatus(){
      cout<<"Your current fuel is : "<<currentfuel<<endl;
  }

void set(string b,string m,double fc){
    brand=b;
    model=m;
    fuelcap=fc;
    currentfuel=fc/2;
}  

void displaycardetails(){
    cout<<"Cars brand is : "<<brand<<endl;
    cout<<"Cars model is : "<<model<<endl;
    cout<<"Max capacity for fuel : "<<fuelcap<<endl;
    
}


car(){
    brand="unknown";
    model="unknown";
    fuelcap=0;
    currentfuel=0;

}//check pri/pub??

};


int main() {
    
    car c1;
    c1.set("Porsche","911",500);
    c1.displaycardetails();
    c1.fuelstatus();
    c1.refuel();
    c1.fuelstatus();
    c1.drive();
    c1.fuelstatus();
    
    return 0;
}