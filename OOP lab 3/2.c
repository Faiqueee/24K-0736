#include <iostream>
using namespace std;
class fitnesstracker{
  
  string username;
  int dailystepgoal;
  int steptaken;
  float caloriesburned;
  
  public:
  
  void method(string name,int goal){
      username =name;
      dailystepgoal=goal;
  }
  fitnesstracker(){
      steptaken=0;
      caloriesburned=0.0;
      
  }
  void logsteps(int steps) {
        steptaken += steps;
        caloriesburned += steps * 0.04;
      
  }
  void progressoverall(){
      cout<<"Name : "<<username<<endl<<"You walked : "<<steptaken<<" steps"<<endl<<"Your goal was : "<<dailystepgoal<<endl<<"You burned : "<<caloriesburned<<" calories"<<endl;
  }
  
};
int main() {
fitnesstracker f1;
f1.method("Faique",323);
f1.logsteps(123);
f1.progressoverall();

    return 0;
}