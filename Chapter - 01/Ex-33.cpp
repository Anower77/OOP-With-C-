// bits of a double value byte by byte using union

#include <iostream>
using namespace std;

union bits {
    bits(double n);
    void show_bits();
    double d;
    unsigned char c[sizeof(double)];
};

bits::bits(double n) {
    d = n;
}


void bits::show_bits() {
    int i, j;
    for (i = sizeof(double) - 1; i >= 0; i--) {
        cout << "bit pattern in byte " << i << ": ";
        for (j = 128; j; j >>= 1) {
            if (c[i] & j)
                cout << "1";
            else
                cout << "0";
        }
        cout << '\n';
    }
}


int main() {
    bits b(12.375);

    b.show_bits();

    return 0;
}

