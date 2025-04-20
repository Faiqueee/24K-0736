#ifndef COURSE
#define COURSE

#include <string>
using namespace std;

class course{

protected:

string coursecode;
int credits;

public:

virtual void calculategrade()=0;
virtual void displayinfo()=0;
};

class lecturecourse : public course{
public:

lecturecourse(string x,int a);
void calculategrade();
void displayinfo();
// lecturecourse(){
    
// }

// void calculategrade(){
//     cout<<"Calculating grade for "<<credits<<"course.\n";
// }
// void displayinfo(){
//     cout<<"Course code : "<<coursecode<<endl;
//     cout<<"Credits hour of course : "<<credits<<endl;
// }
};



#endif
