#include <iostream>
#include <new>
using namespace std;

int main() {
    int *p;

    try {
        p = new int; // allocate memory for int
    }
    catch (bad_alloc xa) {
        cout << "Allocation failure.\n";
        return 1;
    }

    *p = 0;
    while (*p < 10) {
        cout << *p << " ";
        (*p)++;
    }

    delete p; // free memory

    return 0;
}