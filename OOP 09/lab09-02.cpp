#include"iostream"
using namespace std;

class menuitem{

protected:
string dishname;
double price;

public:

virtual void showdetails()=0;
virtual void prepare()=0;

};

class appetizer : public menuitem{

public:

void showdetails(){
cout<<"Displaying details for appetizer .."<<endl;
}
void prepare(){
cout<<"Preparing appetizer ....."<<endl;
}

};

class maincourse : public menuitem{

public:

maincourse(){
    cin>>dishname>>price;
    
}

void showdetails(){
cout<<"Displaying details for menuitem .."<<endl;
}
void prepare(){
cout<<"Preparing maincourse ....."<<endl;
}


};


int main(){

appetizer a1;
a1.prepare();
a1.showdetails();

maincourse m1;
m1.prepare();
m1.showdetails();


}
