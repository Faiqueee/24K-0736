#include <iostream>
#include <exception>
using namespace std;

class DBErr:public exception {
public:
    const char* what()const noexcept override {
        return "DBErr: A database error occurred.";
    }
};

class ConnFail:public DBErr {};
class QueryTimeout:public DBErr {};

template<typename T>
class DBConn {
public:
    void connect(const string& db) {
        if(db=="invalid")throw ConnFail();
        if(db=="slow")throw QueryTimeout();
        cout<<"Connected to "<<db<<"\n";
    }
};

int main() {
    DBConn<int> db;

    try {
        db.connect("invalid");
    } catch(exception& e) {
        cout<<e.what()<<"\n";
    }

    try {
        db.connect("slow");
    } catch(exception& e) {
        cout<<e.what()<<"\n";
    }

    try {
        db.connect("prod");
    } catch(exception& e) {
        cout<<e.what()<<"\n";
    }
}