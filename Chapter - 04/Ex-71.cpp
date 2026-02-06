#include <iostream>
using namespace std;

int main() {
    int *p;
    p = new int(9);

    if(!p) {
        cout << "Allocation failure\n";
        return 1;
    }
    cout << "Value is: " << *p << '\n';
    delete p;

    return 0;
}