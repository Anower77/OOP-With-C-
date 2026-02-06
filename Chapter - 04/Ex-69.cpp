// Allocating dynamic objects .

#include <iostream>
using namespace std;

class samp {
    int i, j;
public:
    void set_i(int a, int b) { i = a; j = b; }
    int get_i() { return i; }
};

int main() {
    samp *p;
    p = new samp;  
    if (!p) {
        cout << "Allocation failure\n";
        return 1;
    }

    p->set_i(10, 20);
    cout << "i is: " << p->get_i() << '\n';



    return 0;
}