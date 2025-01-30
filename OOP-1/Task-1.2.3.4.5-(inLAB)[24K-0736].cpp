#include <iostream>
#include <algorithm>
using namespace std;


void check(string x,string name[],string name2[],int n,int n2){
    
    for(int i=0;i<n2;i++){
        if (x==name2[i]) cout<<x<<" is registered in event 2 \n";
    }
    for(int i=0;i<n;i++){
        if (x==name[i]) cout<<x<<" is registered in event 1 \n";
    }
    
}

int main() {

int n;

while(1){
cout<<"Enter number of participitants for event 1 : ";
cin>>n;
if(n<0||n>5){
    cout<<"Invalid input enter again.\n";
}
else break; 
}

string name [n];

    for (int j=0;j<n;j++){
        cout<<"Enter name of " <<j+1<<" person for event 1 : ";
        cin>> name[j];
}




int n2;

while(1){
cout<<"Enter number of participitants for event 2 : ";
cin>>n2;
if(n2<0||n2>5){
    cout<<"Invalid input enter again.\n";
}
else break; 
}

string name2 [n2];

    for (int i=0;i<n2;i++){
        cout<<"Enter name of " <<i+1<<" person for event 2 : ";
        cin>>name2[i];
        
    }

cout<<"\n\t\t------------Register participants for event 2------------\n";
for(int i=0;i<n2;i++) cout<<name2[i]<<"\n";

cout<<"\n\t\t------------Register participants for event 1------------\n";
for(int i=0;i<n;i++) cout<<name[i]<<"\n";


string x;
cout<<"\n\nEnter name of person to check registeration : ";
cin>>x;
check(x,name,name2,n,n2);

int dono=(n+n2)*10;
cout<<"Total donation received : "<<dono;
cout<<"\n\n\n\t\t------------Reversing participants of Event 2------------\n";


    for(int i=0;i<n2;i++){
            reverse(name2[i].begin(),name2[i].end());
    cout<<"Reversed name of person "<<i+1<<": "<<name2[i]<<"\n";
        
    }
    
cout<<"\n\n\n\t\t------------Reversing participants of Event 1------------\n";

    for(int i=0;i<n;i++){
            reverse(name[i].begin(),name[i].end());
    cout<<"Reversed name of person "<<i+1<<": "<<name[i]<<"\n";
        
    }


cout<<"\n\n\n\t\t------------Bar Chart------------\n";

cout<<"Event 1 participants =>  ";
for(int i=0;i<n2;i++){
    cout<<"*";
    
}
    
    
cout<<"\n"<<"Event 2 participants =>  ";
    for(int i=0;i<n;i++){
    
        cout<<"*";
    
    }
    



    return 0;
}