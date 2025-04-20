#include "iostream"
#include "lecturecourse.h"

using namespace std;

lecturecourse::lecturecourse(string xx,int aa){
credits=aa;
coursecode=xx;
}

void lecturecourse:: calculategrade(){
    cout<<"Calculating grade for "<<credits<<" hourse course.\n";
}
void lecturecourse ::displayinfo(){
    cout<<"Course code : "<<coursecode<<endl;
    cout<<"Credits hour of course : "<<credits<<endl;
}


int main(){
    lecturecourse c1("S1003",3);
    c1.calculategrade();
    c1.displayinfo();
    return 0;
}