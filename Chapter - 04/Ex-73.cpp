#include <iostream>
using namespace std;

int main () {
    int *p;
    p = new int[5];

    if(!p) {
        cout << "Allocation failure\n";
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        p[i] = i + 1;
    }

    cout << "Values are: ";
    for (int i = 0; i < 5; i++) {
        cout << p[i] << ' ';
    }
    cout << '\n';

    delete[] p;

    return 0;
}