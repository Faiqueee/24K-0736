#include <iostream>
using namespace std;


class library{
    
  string bookList[100];
  int booksborrowed;
  int avalbooks;
  int count;

public:

void addbooks();
void lendbooks();
void returnbook();

library(){
    booksborrowed=0;
    avalbooks=0;
    count=0;
    
}

};

void library :: addbooks(){
int n;
cout<<"Enter number of books to be added : ";
cin>>n;
string x;
for(int i=0;i<n;i++){

cout<<"Enter book no."<<i+1<<" : ";
cin>>x;

bookList[count]=x;
count++;
}
    
}

void library :: lendbooks(){
    string a;
    cout<<"which book u want to lend : ";
    cin>>a;
    
    for(int i=0;i<count;i++){
        if(a==bookList[i]){
            cout<<"You have successfullty borrwed book : "<<a<<endl;
        
            bookList[i]="Lended";
        }
        else if(i==(count-1) && a!=bookList[i]){
            cout<<"Book not avalible"<<endl;
        }
    }//endfor
}

void library :: returnbook(){
    string x;
    cout<<"Enter name of book to be returned : ";
    cin>>x;
    for(int i=0;i<count;i++){
        if(bookList[i]=="Lended"){
            bookList[i]=x;
        }
        else {
            cout<<"This book doesnt belong to this library."<<endl;
        }
    }
}

int main() {
    library l1;
    l1.addbooks();
    l1.lendbooks();
    l1.returnbook();
    
    return 0;
}
