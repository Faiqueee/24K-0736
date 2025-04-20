#include "iostream"
#include "labcourse.h"

using namespace std;

labcourse::labcourse(string x,int a){
credits=a;
coursecode=x;
}

void labcourse:: calculategrade(){
cout<<"Calculating grade for "<<credits<<" hourse course.\n";
}
void labcourse ::displayinfo(){
    cout<<"Lab Course code : "<<coursecode<<endl;
    cout<<"Lab Credits hour of course : "<<credits<<endl;
}


int main(){
    labcourse c1("S1003",3);
    c1.calculategrade();
    c1.displayinfo();
    return 0;
}