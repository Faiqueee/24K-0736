#include <iostream>
#include <exception>
using namespace std;

class OverErr:public exception {
public:
    const char* what()const noexcept override {
        return "OverErr:std::exception";
    }
};

class UnderErr:public exception {
public:
    const char* what()const noexcept override {
        return "UnderErr:std::exception";
    }
};

template<typename T,int N>
class Q {
    T arr[N];
    int front,rear,cnt;
public:
    Q():front(0),rear(0),cnt(0) {}

    void enq(T val) {
        if(cnt==N)throw OverErr();
        arr[rear]=val;
        rear=(rear+1)%N;
        cnt++;
    }

    T deq() {
        if(cnt==0)throw UnderErr();
        T val=arr[front];
        front=(front+1)%N;
        cnt--;
        return val;
    }

    void show()const {
        int i=front;
        for(int j=0;j<cnt;j++) {
            cout<<arr[i]<<" ";
            i=(i+1)%N;
        }
        cout<<"\n";
    }
};

int main() {
    Q<int,3> q;
    try {
        q.enq(1);
        q.enq(2);
        q.enq(3);
        q.enq(4);
    } catch(exception& e) {
        cout<<e.what()<<"\n";
    }

    try {
        q.deq();
        q.deq();
        q.deq();
        q.deq();
    } catch(exception& e) {
        cout<<e.what()<<"\n";
    }
}