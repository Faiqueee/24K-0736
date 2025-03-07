#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    float balance;

public:
    Account() {
        cout<<"Enter Account Number:"<<endl;
        cin>>accountNumber;
        cout<<"Enter Balance:"<<endl;
        cin>>balance;
    }

    void displayDetails() {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

class SavingsAccount:public Account {
private:
    float interestRate;

public:
    SavingsAccount() {
        cout<<"Enter Interest Rate:"<<endl;
        cin>>interestRate;
    }

    void displayDetails() {
        Account::displayDetails();
        cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
    }
};

class CheckingAccount:public Account {
private:
    float overdraftLimit;

public:
    CheckingAccount() {
        cout<<"Enter Overdraft Limit:"<<endl;
        cin>>overdraftLimit;
    }

    void displayDetails() {
        Account::displayDetails();
        cout<<"Overdraft Limit: "<<overdraftLimit<<endl;
    }
};

int main() {
    SavingsAccount s;
    CheckingAccount c;
    
    cout<<endl<<"Savings Account Details:"<<endl;
    s.displayDetails();
    
    cout<<endl<<"Checking Account Details:"<<endl;
    c.displayDetails();
    
    return 0;
}
