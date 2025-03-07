#include <iostream>
using namespace std;

class agency{
  
  private:
  
  int id;
  string address;
  string *name;
  
  public:
  
  agency(){
      name= new string;
      
      cout<<"Enter unique id : ";
      cin>>id;
      cout<<"Enter address to apartment : ";
      cin>>address;
      cout<<"Enter name of apartments owner : ";
      cin>>*name;
      
  }
    void display(){
        cout<<"Name of apartments owner : "<<*name<<endl;
        cout<<"Address of apartments owner : "<<address<<endl;
        cout<<"Unique ID of apartments owner : "<<id<<endl;
    }
    agency(const agency &obj){
        id=obj.id;
        address=obj.address;
        name= new string(*obj.name);
        /*this->name=;*/
    }
    void modify(){
     cout<<"Re-enter unique id : ";
      cin>>id;
      cout<<"Re-enter address to apartment : ";
      cin>>address;
      cout<<"Re-enter name of apartments owner : ";
      cin>>*name;
     
        
    }
    ~agency(){
        delete name;
    }
};



int main() {
    agency a1;
    a1.display();
    
    agency a2(a1);
    a2.display();
    a2.modify();
    a1.display();
    a2.display();
    
    return 0;
}