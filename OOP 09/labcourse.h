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

class labcourse : public course{
public:

lecturecourse(string xx,int aa);
void calculategrade();
void displayinfo();

};



#endif
