#include <iostream>
#include <exception>
using namespace std;

class InvalidTempErr:public exception {};

template<typename T>
T toF(T c) {
    if(c<-273.15)throw InvalidTempErr();
    return (c*9/5)+32;
}

int main() {
    try {
        double c;
        cin>>c;
        cout<<"F="<<toF(c)<<"\n";
    } catch(InvalidTempErr& e) {
        cout<<"Caught InvalidTempErr - what(): "<<e.what()<<"\n";
    }
}