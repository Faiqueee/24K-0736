#include <iostream>
using namespace std;

class person{
  protected:
  string name;
  int age;
  int contactno;
  
  public:
  
  person(){
      cout<<"Enter name of person : ";
      cin>>name;
      cout<<"Enter age of person : ";
      cin>>age;
      cout<<"Enter contact number of person : ";
      cin>>contactno;
  }
    
    void display(){
  
      cout<<"Name of person : "<<name<<endl;
      cout<<"Age of person : "<<age<<endl;
      cout<<"Contact number of person : "<<contactno<<endl;
  
    }
    void update(){
        cout<<"UPDATING-----"<<endl;
      cout<<"Enter name of person : ";
      cin>>name;
      cout<<"Enter age of person : ";
      cin>>age;
      cout<<"Enter contact number of person : ";
      cin>>contactno;
        
    }
    
};

class patient : public person{
  
  int patientID;
  string medicalhistory;
  string doctorassigned;
    
    public:
    
    patient(){
        cout<<"Enter Patients ID : ";
        cin>>patientID;
        
        cout<<"Enter medical history : ";
        cin>>medicalhistory;
        
        cout<<"Enter name of doctor assigned : ";
        cin>>doctorassigned;
        
    }
    
    void display(){
        
        person::display();
        cout<<"Patient Id : "<<patientID<<endl;
        cout<<"Medical history : "<<medicalhistory<<endl;
        cout<<"Doctor Assigned : "<<doctorassigned<<endl;
        
    }
};

class doctor : public person{
  
  string specialization;
  float consultfee;
  patient *patientsList;
  int count;
  
  public:
  
  doctor(){
      cout<<"Enter specialization of doctor : ";
      cin>>specialization;
      
      cout<<"Enter consultation fee of doctor : ";
      cin>>consultfee;
      
      cout<<"Enter number of patient assigned to doctor : ";
      cin>>count;
      
      for(int i=0;i<count;i++){
          cout<<"Details of patient no."<<i+1<<" assigned to doctor "<<name<<" : "<<endl;
      patientsList=new patient[count];
     
      }
      
  }
  
  void update(){
      cout<<"Specialization of doctor : "<<specialization<<endl;
      cout<<"Consultation fee of doctor : "<<consultfee<<endl;
      
      for(int i=0;i<count;i++){
          cout<<"Details of patient no."<<i+1<<" assigned to doctor "<<name<<" : "<<endl;
          patientsList[i]::display();
      }
      
  }
};



int main() {



    return 0;
}
