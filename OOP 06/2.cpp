#include <iostream>
using namespace std;

class Vehicle {
private:
    string brand;
    int speed;

public:
    Vehicle() {
        cout<<"Enter Brand:"<<endl;
        cin>>brand;
        cout<<"Enter Speed:"<<endl;
        cin>>speed;
    }

    void displayDetails() {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<" km/h"<<endl;
    }
};

class Car:public Vehicle {
private:
    int seats;

public:
    Car() {
        cout<<"Enter Number of Seats:"<<endl;
        cin>>seats;
    }

    void displayDetails() {
        Vehicle::displayDetails();
        cout<<"Seats: "<<seats<<endl;
    }
};

class ElectricCar:public Car {
private:
    int batteryLife;

public:
    ElectricCar() {
        cout<<"Enter Battery Life (hours):"<<endl;
        cin>>batteryLife;
    }

    void displayDetails() {
        Car::displayDetails();
        cout<<"Battery Life: "<<batteryLife<<" hours"<<endl;
    }
};

int main() {
    ElectricCar e;
    cout<<endl<<"Electric Car Details:"<<endl;
    e.displayDetails();
    return 0;
}
