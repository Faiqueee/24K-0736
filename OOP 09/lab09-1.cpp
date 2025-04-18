#include"iostream"
using namespace std;

class patient{

protected:
string name;
string id;

public:

virtual void displaytreatment()=0;
virtual void calculatecost()=0;


};

class inpatient : public patient{

public:

void displaytreatment(){
cout<<"Displaying treatment for inpatient .."<<endl;
}
void calculatecost(){
cout<<"Calculating cost ....."<<endl;
}

};

class outpatient : public patient{

public:

outpatient(){
    cin>>name>>id;
    
}

void displaytreatment(){
    cout<<"Displaying treatment for "<<name<<endl;
}
void calculatecost(){
    cout<<"Displaying cost for "<<name<<" Having id : "<<id <<endl;

}


};


int main(){
inpatient i1;
i1.calculatecost();
i1.displaytreatment();

outpatient o1;
o1.calculatecost();
o1.displaytreatment();


}
