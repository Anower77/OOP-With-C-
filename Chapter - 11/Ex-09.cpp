#include <iostream>
using namespace std;

int main() {
    cout << "start\n";

    try {
        cout << "Inside try block\n";
        throw 10;
        cout << "This will not execute\n";
    }
    catch (double i) {
        cout << "Caught One! Number is: ";
        cout << i << "\n";
    }

    cout << "end\n";
    return 0;
}