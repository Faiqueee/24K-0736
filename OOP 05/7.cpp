#include <iostream>
using namespace std;


class Product {
    int id,qty;
    string name;
public:
    Product() {
       cout<<"Enter Product ID:";
       cin>>id;
       cout<<"Enter Name:";
       cin>>name;
      cout<<"Enter Quantity:";
     cin>>qty;
    }
    void show() {
        cout<<"ID: "<<id<<" -- Name: "<<name<<" -- Quantty: "<<qty<<endl;
    }
    int getID() {
        return id;
    }
};


class Warehouse {
Product *prods;
        int count;

public:
    Warehouse() {
cout<<"Enter Number of Products:";
cin>>count;
        prods=new Product[count];
    }
~Warehouse() {
        delete[] prods;
    }

    void showSorted() {
        for(int i=0;i<count-1;i++) {
            for(int j=0;j<count-i-1;j++) {
    if(prods[j].getID()>prods[j+1].getID()) {
        Product temp=prods[j];
            prods[j]=prods[j+1];
            prods[j+1]=temp;
}
}
}

        cout<<endl<<"Products Sorted by ID:"<<endl;
        for(int i=0;i<count;i++) prods[i].show();
    }

    void search(int id) {
        for(int i=0;i<count;i++) {
            if(prods[i].getID()==id) {
                cout<<endl<<"Product Found:"<<endl;
                prods[i].show();
                return;
            }
        }
        cout<<endl<<"Product Not Found."<<endl;
    }
};

int main() {
    Warehouse w;
    w.showSorted();
    int id;
    cout<<endl<<"Enter Product ID to Search:";cin>>id;
    w.search(id);
    return 0;
}
