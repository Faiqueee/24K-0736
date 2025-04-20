#include "iostream"
using namespace std;

class weathersensor{

    public:
    virtual void readdata()=0;
    virtual void displayreport()=0;
};

class themometer : public weathersensor{

public:
void readdata(){
cout<<"Reading data for thermometer."<<endl;

}
void displayreport(){
cout<<"Displaying report for themometer."<<endl;
}

};

class barometer : public weathersensor{

    public:
    void readdata(){
    cout<<"Reading data for barometer."<<endl;
    
    }
    void displayreport(){
    cout<<"Displaying report for barometer."<<endl;
    }


};

int main(){
   
    themometer t1;
    barometer b1;
    t1.readdata();
    t1.displayreport();
    b1.readdata();
    b1.displayreport();
    return 0;
}