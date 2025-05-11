#include <iostream>
#include <exception>
#include <sstream>
using namespace std;

class DimErr:public exception {
    string msg;
public:
    DimErr(int r1,int c1,int r2,int c2) {
        ostringstream ss;
        ss<<"DimErr-"<<r1<<"x"<<c1<<"vs"<<r2<<"x"<<c2<<"!";
        msg=ss.str();
    }
    const char* what()const noexcept override {
        return msg.c_str();
    }
};

template<typename T,int R,int C>
class Mat {
    T arr[R][C];

    template<typename U,int R2,int C2>
    friend class Mat; //add freind

public:
    void read() {
        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++)
                cin>>arr[i][j];
    }

    void show()const {
        for(int i=0;i<R;i++) {
            for(int j=0;j<C;j++)
                cout<<arr[i][j]<<" ";
            cout<<"\n";
        }
    }

    template<int R2,int C2>
    Mat add(const Mat<T,R2,C2>& m) {
        if(R!=R2||C!=C2)throw DimErr(R,C,R2,C2);
        Mat<T,R,C> res;
        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++)
                res.arr[i][j]=arr[i][j]+m.arr[i][j];
        return res;
    }
};

int main() {
    try {
        Mat<int,2,2> a;
        Mat<int,3,3> b;
        a.read();
        b.read();
        auto c=a.add(b);
        c.show();
    } catch(exception& e) {
        cout<<e.what()<<"\n";
    }
}
