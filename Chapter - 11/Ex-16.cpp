#include <iostream>
using namespace std;

void Xhandler() {
    try {
        throw "hello";   // throw const char*
    }
    catch (const char *) {
        cout << "Caught const char* inside Xhandler\n";
        throw;  // rethrow
    }
}

int main() {
    cout << "start\n";

    try {
        Xhandler();
    }
    catch (const char *) {
        cout << "Caught const char* inside main\n";
    }

    cout << "end\n";
    return 0;
}