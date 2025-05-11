
#include <iostream>
#include <exception>
using namespace std;

class NegStockEx : public exception {};
class OverCapEx : public exception {};

template<typename T>
class Item {
    T stock, max;
public:
    Item(T m) : stock(0), max(m) {}
    void set(T s) {
        if (s < 0) throw NegStockEx();
        if (s > max) throw OverCapEx();
        stock = s;
    }
};

int main() {
    Item<int> x(100);
    try {
        cout << "Set stock to -5...\n";
        x.set(-5);
    } catch (NegStockEx &e) {
        cout << "NegStockEx - what(): " << e.what() << '\n';
    }

    try {
        cout << "Set stock to 120...\n";
        x.set(120);
    } catch (OverCapEx &e) {
        cout << "OverCapEx - what(): " << e.what() << '\n';
    }

    return 0;
}
