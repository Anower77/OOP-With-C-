// Initialize an array

#include <iostream>
using namespace std;

class samp {
    int a;
public:
    samp(int n) { a = n; }
    int get_a() { return a; }

};


int main() {
    samp ob[4] = { -1, -2, -3, -4 };
    int i;

    for (i = 0; i < 4; i++) {
        cout << "ob[" << i << "].a: " << ob[i].get_a() << '\n';
    }
    return 0;
}


// PAGE : 102