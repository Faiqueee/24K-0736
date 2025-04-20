#include "iostream"
using namespace std;

class shipment{
    protected:
    string trackingnumber;
    double weight;

    public:
    virtual void estimateDT()=0;
    virtual void showdetails()=0;
};

class airfreight : public shipment{

public:
airfreight(string x,double a){
weight=a;
trackingnumber=x;
}
void estimateDT(){
cout<<"Estimating delivery time [airfreight]."<<endl;

}
void showdetails(){
cout<<"Tracking number : "<<trackingnumber<<endl;
cout<<"Weight of product : "<<weight<<endl;

}

};

class groundshipment : public shipment{

    
    public:
    
groundshipment(string x,double a){
    weight=a;
    trackingnumber=x;
    }
    
    void estimateDT(){
    cout<<"Estimating delivery time [groundshipment]."<<endl;
    
    }
    void showdetails(){
        cout<<"Tracking number : "<<trackingnumber<<endl;
        cout<<"Weight of product : "<<weight<<endl;  
    }


};

int main(){
   
    airfreight t1("FF221",50);
    groundshipment b1("WEE22",75);
    t1.estimateDT();
    t1.showdetails();
    b1.estimateDT();
    b1.showdetails();
    return 0;
}