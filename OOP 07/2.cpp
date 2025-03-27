#include <iostream>
using namespace std;

class product{
 protected:
  
 int prodid;
 string prodname;
 float price;
 int Squantity;
 float discount;
 public:
 
 product(){
     cout<<"Enter product id : ";
     cin>>prodid;
     cout<<"Enter product name : ";
     cin>>prodname;
     cout<<"Enter product price : ";
     cin>>price;
     cout<<"Enter stock quantity : ";
     cin>>Squantity;
     
 }
 
 virtual void applydiscount(){
     discount=0.2;
     cout<<"You will get "<<discount*100<<"percent off on the original price of "<<price<<endl;
     
 }
 virtual void calculatetotalprice(float quantity){
     cout<<"Total price : "<<Squantity*price*discount<<endl;
 }
 void displayproductinfo(){
     
     cout<<"Product id : "<<prodid<<endl;
     cout<<"Product name : "<<prodname<<endl;
     cout<<"Product price : "<<price<<endl;
     cout<<"Stock quantity : "<<Squantity<<endl;

 }
 
};

class electronics : public product{
    
    int warrantyperiod;
    string brand;
     
     public:
     
     electronics(){
         
     cout<<"Enter warranty period : ";
     cin>>warrantyperiod;
     
     cout<<"Enter product name : ";
     cin>>brand;
     }
     
void displayproductinfo(){
    
 product::displayproductinfo();
       
     cout<<"Warranty period : "<<warrantyperiod<<endl;
     cout<<"Product name : "<<brand<<endl;
     
 }
 
};

class clothing : public product{
    
    int size;
    string color;
    string material;
    
     public:
 
  
 void applydiscount() override{
     discount=0.4;
     cout<<"--------------\n";
     cout<<"You will get "<<discount*100<<" percent off on the original price of "<<price<<endl;
     
 }
};

class fooditem : public product{
    
    string expirydate;
    float calories;
    
    
     public:
  
 void calculatetotalprice(float quantity){
     cout<<"Total price After discount : "<<Squantity*price*discount<<endl;
     
 }
 
};

class book : public product{
    
    string author;
    string genre;
    
    
     public:
 book(){
     cout<<"Enter authors name : ";
     cin>>author;
     
     cout<<"Enter genre type : ";
     cin>>genre;
     
 }
void displayproductinfo() {
     
     cout<<"Authors name : "<<author<<endl;
     
     cout<<"Enter genre type : "<<genre<<endl;
    product::displayproductinfo();    
     
 }
 
};



int main() {
//performing overrding for class clothing

product *p1=new clothing;
p1->applydiscount();
    return 0;
}