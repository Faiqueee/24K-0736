#include "iostream"
using namespace std;

class device
{
protected: 
    int deviceid;
    string devicename;
    bool status;
    string location;

public:

device(string location){
    cout<<"Enter device id : ";
    cin>>deviceid;
    
    cout<<"Enter device name : ";
    cin>>devicename;
    
    cout<<"Enter device status : ";
    cin>>status;
    this->location=location;
    /*
    cout<<"Enter device location : ";
    cin>>location:
    */
}

    virtual void turnon()
    {
        status = true;
    }
    virtual void turnoff()
    {
        status = false;
    }
    virtual void getstatus()
    {
        cout << "Status : " << status << endl;
    }
    virtual void displayinfo()
    {
        cout << " Device id : " << deviceid << endl;
        cout << " Device name : " << devicename << endl;
        cout << " Status : " << status << endl;
        cout << " Location : " << location << endl;
    }
};

class light : public device
{

    int brilvl;
    string colormode;

public:

    void turnon()
    {
        status = false;
    }
    void turnoff()
    {
        status = true;
    }

light(string location) : device(location) {
    cout<<"Enter brightness level : ";
    cin>>brilvl;
    
    cout<<"Enter color mode : ";
    cin>>colormode;
    
    }
    void displayinfo() override 
    {
        cout<<"---------------\n";
        cout << "Brightness level : " << brilvl << endl;
        cout << "Color mode : " << colormode << endl;
   /*     device::displayinfo();
   */ }
};

class thermostat : public device
{

    float temp;
    string mode;
    float targettemp;

public:
    void displayinfo()
    {
        cout << "temperature : " << temp << endl;
        cout << "Mode : " << mode << endl;
        cout << "target Temperature : " << temp << endl;
    }
};

class seccam : public device
{

    float resolution;
    bool recordingstatus;
    bool nightvision;

public:
    void displayinfo()
    {
        cout << "Resolution : " << resolution << endl;
        cout << "recording status  : " << recordingstatus << endl;
        cout << " Night vision : " << nightvision << endl;
    }
};

class smartplug : public device
{
    int powerconsumption;
    int timersetting;

public:
    void display()
    {
        cout << "Power consumtion : " << powerconsumption << endl;
        cout << "Timer setting : " << timersetting << endl;
    }
};

int main(){

//applying base class pointer to light class. Same method will be used for other classes.

device *d1= new light("FAST-nuces");
d1->displayinfo();

    return 0;
}