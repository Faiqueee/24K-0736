#include <iostream>
using namespace std;

class Device {
private:
   int deviceID;
   bool status;
public:
    Device() {
        cout<<"Enter Device ID:"<<endl;
        cin>>deviceID;
        cout<<"Enter Status (1 for on 0 for off):"<<endl;
        cin>>status;
    }
    void displayDetails() {
      cout<<"Device ID: "<<deviceID<<endl;
      cout<<"Status: ";
        if(status==1) cout<<"ON"<<endl;
    else cout<<"OFF"<<endl;
    }
};

class SmartPhone: public Device {
private:
    float screenSize;
public:
SmartPhone() {
     cout<<"Enter Screen Size:"<<endl;
   cin>>screenSize;
    }
    void displayDetails() {
        Device::displayDetails();
        cout<<"Screen Size: "<<screenSize<<" inches"<<endl;
    }
};
class SmartWatch: public SmartPhone {
private:
   
    bool heartRateMonitor;

public:
    SmartWatch() {
        cout<<"Has Heart Rate Monitor {1 for on 0 for off}:"<<endl;
        cin>>heartRateMonitor;
    }

    void displayDetails() {
        SmartPhone::displayDetails();
        cout<<"Heart Rate Monitor: ";
        if(heartRateMonitor==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
};

class SmartWearable: public SmartWatch {
private:
    int stepCounter;

public:
 SmartWearable() {
        cout<<"Enter Step Counter Value:"<<endl;
        cin>>stepCounter;
    }

    void displayDetails() {
        SmartWatch::displayDetails();
        cout<<"Step Counter: "<<stepCounter<<endl;
    }
};

int main() {
    SmartWearable sw;
    cout<<endl<<"Smart Wearable Details:"<<endl;
    sw.displayDetails();
    return 0;
}