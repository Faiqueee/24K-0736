#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter Age:"<<endl;
        cin>>age;
    }

    void displayDetails() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Teacher:public Person {
private:
    string subject;

public:
    Teacher() {
        cout<<"Enter Subject:"<<endl;
        cin>>subject;
    }

    void displayDetails() {
        Person::displayDetails();
        cout<<"Subject: "<<subject<<endl;
    }
};

class Researcher:public Person {
private:
    string researchArea;

public:
    Researcher() {
        cout<<"Enter Research Area:"<<endl;
        cin>>researchArea;
    }

    void displayDetails() {
        Person::displayDetails();
        cout<<"Research Area: "<<researchArea<<endl;
    }
};

class Professor:public Teacher,public Researcher {
private:
    int publications;

public:
    Professor() {
        cout<<"Enter Number of Publications:"<<endl;
        cin>>publications;
    }

    void displayDetails() {
        Teacher::displayDetails();
        cout<<"Research Area: "<<Researcher::displayDetails()<<endl;
        cout<<"Publications: "<<publications<<endl;
    }
};

int main() {
    Professor p;
    cout<<endl<<"Professor Details:"<<endl;
    p.displayDetails();
    return 0;
}
