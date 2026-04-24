#include <iostream>
using namespace std;

void Xhandler(int test) throw(int, char, double) {
    if (test == 0)
        throw test;      // int
    if (test == 1)
        throw 'a';       // char
    if (test == 2)
        throw 123.23;    // double
}

int main() {
    cout << "start\n";

    try {
        Xhandler(0);   
    }
    catch (int i) {
        cout << "Caught int\n";
    }
    catch (char c) {
        cout << "Caught char\n";
    }
    catch (double d) {
        cout << "Caught double\n";
    }

    cout << "end\n";
    return 0;
}