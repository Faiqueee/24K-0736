#include <iostream>
using namespace std;

class Doctor {
private:
    string name, specialization;
    int experience;

public:
    Doctor() {
        cout<<"Enter Doctor Name:"<<endl;
        cin>>name;
        cout<<"Enter Specialization:"<<endl;
        cin>>specialization;
        cout<<"Enter Years of Experience:"<<endl;
        cin>>experience;
    }

    void displayDetails() {
        cout<<"Doctor Name: "<<name<<endl;
        cout<<"Specialization: "<<specialization<<endl;
        cout<<"Experience: "<<experience<<" years"<<endl;
    }
};

class Hospital {
private:
    string hospitalName;
    Doctor *doctors;
    int numDoctors;

public:
    Hospital() {
        cout<<"Enter Hospital Name:"<<endl;
        cin>>hospitalName;
        cout<<"Enter Number of Doctors:"<<endl;
        cin>>numDoctors;
        doctors=new Doctor[numDoctors];
    }

    ~Hospital() {
        delete[] doctors;
    }

    void displayDetails() {
        cout<<endl<<"Hospital Name: "<<hospitalName<<endl;
        cout<<"Doctors Working:"<<endl;
        for(int i=0;i<numDoctors;i++) {
            cout<<endl<<"Doctor "<<i+1<<":"<<endl;
            doctors[i].displayDetails();
        }
    }
};

int main() {
    Hospital h;
    cout<<endl<<"Hospital and Doctors Details:"<<endl;
    h.displayDetails();
    return 0;
}
