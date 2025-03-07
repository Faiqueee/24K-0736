#include <iostream>
using namespace std;

class alarmsystem{
  string Slevel;
  
  public:
  alarmsystem(string x){
      Slevel=x;
  }
  void display(){
      cout<<"Alarm system level of smart home : "<<Slevel<<endl;
  }
  
};

class smarthome{
  alarmsystem as;
  
  public:
  smarthome(string Slevel) : as(Slevel){
  }
  void display(){
      as.display();
  }
  
};

int main() {
smarthome sh("High");
sh.display();
    return 0;
}