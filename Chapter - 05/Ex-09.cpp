#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype {
    char *p;

public:
    strtype(const char *ptr);
    strtype(const strtype &s);

    ~strtype() {
        delete[] p;
    }

    char* get() {
        return p;
    }
};

// Constructor
strtype::strtype(const char *ptr) {
    int l = strlen(ptr) + 1;
    p = new char[l];

    if (!p) {
        cout << "Allocation error. Exiting.\n";
        exit(1);
    }

    strcpy(p, ptr);
}

// Copy constructor
strtype::strtype(const strtype &s) {
    int l = strlen(s.p) + 1;
    p = new char[l];

    if (!p) {
        cout << "Allocation error. Exiting.\n";
        exit(1);
    }

    strcpy(p, s.p);
}

// Function
void show(strtype s) {
    cout << s.get() << endl;
}

int main() {
    strtype s1("Hello, world!");
    show(s1);

    return 0;
}