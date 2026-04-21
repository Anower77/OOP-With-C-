#include <iostream>
#include <cstring>
using namespace std;

class strtype {
    char *p;

public:
    // Constructor
    strtype(const char *ptr) {
        int l = strlen(ptr) + 1;
        p = new char[l];

        if (!p) {
            exit(1);
        }

        strcpy(p, ptr);
    }

    // Copy constructor
    strtype(const strtype &s) {
        int l = strlen(s.p) + 1;
        p = new char[l];

        if (!p) {
            exit(1);
        }

        strcpy(p, s.p);
    }

    // Destructor
    ~strtype() {
        delete[] p;
    }

    // Getter
    char* get() {
        return p;
    }
};

// Function
void show(strtype s) {
    cout << s.get() << '\n';
}

int main() {
    strtype s1("Hello");
    show(s1);

    return 0;
}