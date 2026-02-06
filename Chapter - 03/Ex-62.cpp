// Create a two-dimensional array of objects

#include <iostream>
using namespace std;

class samp {
    int a;
public:
    samp(int n) { a = n; }
    int get_a() { return a; }
};

int main() {
    samp ob[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << "ob[" << i << "][" << j << "].a: " << ob[i][j].get_a() << '\n';
        }
    }
    return 0;
} 