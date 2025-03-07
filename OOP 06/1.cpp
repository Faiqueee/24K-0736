#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    float salary;

public:
    Employee() {
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter Salary:"<<endl;
        cin>>salary;
    }

    void displayDetails() {
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Manager:public Employee {
private:
    float bonus;

public:
    Manager() {
        cout<<"Enter Bonus:"<<endl;
        cin>>bonus;
    }

    void displayDetails() {
        Employee::displayDetails();
        cout<<"Bonus: "<<bonus<<endl;
    }
};

int main() {
    Manager m;
    cout<<endl<<"Manager Details:"<<endl;
    m.displayDetails();
    return 0;
}
