#include <iostream>
using namespace std;


class project{
  string title;
  string deadline;
  
  public:
  void enter(){
      cout<<"Enter title : ";
      cin>>title;
      cout<<"Enter deadline : ";
      cin>>deadline;
  }
  void display(){
      cout<<"Title : "<<title<<endl;
      cout<<"Deadline : "<<deadline<<endl;
  }
};
//end pro;
class employee{
  string name;
  string designation;
  project *pro;
  int n;
  public:
  
   employee(){
       string x;
       cout<<"Enter name : ";
       cin>>x;
       name=x;
       
       string z;
       cout<<"Enter designation : ";
       cin>>z;
       designation=z;

       //int n;
       cout<<"How many projects you want to be involved in : ";
       cin>>n;
       pro=new project[n];

   }
   void add(){
       for(int i=0;i<n;i++){
  cout<<"\nFOR PROJECT No. "<<i+1<<" : \n\n";
           pro[i].enter();
       }
   }
   void display(){
       cout<<"Employee : "<<name<<endl;
       cout<<"Designation : "<<designation<<endl;
   for(int i=0;i<n;i++){
  cout<<"\nAssigned project "<<i+1<<" : \n";
           pro[i].display();
       }
       
   }
};
//end emp;
int main() {
employee e1;
e1.add();
e1.display();

    return 0;
}