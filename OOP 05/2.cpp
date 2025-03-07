#include <iostream>
using namespace std;

class uni{
  
  int id;
  string name;
  int *score;
  int n;
  public:
  
  uni(){
      cout<<"Enter name of stduent : ";
      cin>>name;
      
      cout<<"Enter ID of stduent : ";
      cin>>id;
      
      
      cout<<"Enter number of subjects student has :"; 
      cin>>n;
      score =new int[n];
      for(int i=0;i<n;i++){
      cout<<"Enter score of subject "<<i+1<<": ";
      cin>>score[i];
      }
  }//def
  void display(){
      cout<<"Name of student : "<<name<<endl;
      cout<<"ID of student : "<<id<<endl;
      for(int i=0;i<n;i++){
      cout<<"Score of subject "<<i+1<<": "<<score[i]<<endl;
      }
  }
  
  uni(const uni &obj){
      id=obj.id;
      name=obj.name;
      n=obj.n;
      score= new int[obj.n];
      for(int i=0;i<n;i++){
     score[i]=obj.score[i];//check;
      }
  }
  
  
    void modify(){
     cout<<"Re-enter students unique id : ";
      cin>>id;
      cout<<"Re-enter students name : ";
      cin>>name;
       
      for(int i=0;i<n;i++){
     cout<<"Re-enter score of subject "<<i+1<<" : ";
     cin>>score[i];
          
      } 
    }
  ~uni(){
      delete[] score;
  }
};

int main() {
    uni u1;
    u1.display();
    
    uni u2(u1);
    u2.display();
    u2.modify();
    u1.display();
    u2.display();
    
    return 0;
}