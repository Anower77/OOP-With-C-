// Allocating dynamic arrays .
#include <iostream>
using namespace std;

class samp {
    int i, j;
public:
    samp(int a, int b) { i = a; j = b; }
    int get_i() { return i * j; }

};


int main() {
    samp *p;
    p = new samp(6, 5);

    if(!p) {
        cout << "Allocation failure\n";
        return 1;
    }
    cout << "Value is: " << p->get_i() << '\n';
    delete p;

    return 0;
}
