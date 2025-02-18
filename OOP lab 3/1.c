#include <iostream>
using namespace std;

class wallet{
    
    float balance;
    float TH[100];

    public:
    int count;
    string name;
wallet(){
    balance=0;
    count=0;
}
    void addmoney(float b);
    void spendmoney();
    void displaytransaction();
    
};
void wallet :: addmoney(float b){
   
    balance+=b;
    cout<<"Your amount after adding money : "<<balance<<endl;
}

void wallet :: spendmoney(){
    int x;
    cout<<"How much money you want to spend : ";
    cin>>x;
    if(balance-x>0){
    balance-=x;
    
    cout<<"Your amount after spending money : "<<balance<<endl;
    TH[count]=x;
    count++;
    }
else{
    cout<<"Not enough balance avalible"<<endl;
    return;
}
}

void wallet :: displaytransaction(){
    for(int i=0;i<count;i++){
        cout<<i+1<<" transaction totals : "<<TH[i]<<endl;
    }
    
}

int main() {
    wallet w1,w2;
    w1.addmoney(1234.12);
    w1.spendmoney();
    w1.displaytransaction();
    
    
    w1.addmoney(4382.4324);
    w1.spendmoney();
    w1.displaytransaction();

    return 0;
}