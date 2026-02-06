#include <iostream>
using namespace std;

class samp {
    int i;

public:
    samp (int n) {
        i = n;
        cout << "Constructor called for " << i << '\n';
    }
    ~samp() {
        cout << "Destructor called for " << i << '\n';
    }
    int get_i() { return i; }
};

int sqr_it(samp obj) {
    int val = obj.get_i();
    return val * val;
}


int main() {
    samp a(10);
    cout << "Square is: " << sqr_it(a) << '\n';
    return 0;
}