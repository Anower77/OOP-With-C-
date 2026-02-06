#include <iostream>
using namespace std;

class samp {
    int a, b;
public:
    samp(int x, int y) { a = x; b = y; }
    int get_a() { return a; }
    int get_b() { return b; }
};


int main() {
    samp ob[2][3] = {
        samp(1, 2), samp(3, 4), samp(5, 6),
        samp(7, 8), samp(9, 10), samp(11, 12)
    };

    int i;

    for (i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "ob[" << i << "][" << j << "].a: " << ob[i][j].get_a() << '\n';
            cout << "ob[" << i << "][" << j << "].b: " << ob[i][j].get_b() << '\n';
        }
    }
}