#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

#define SIZE 25

class strtype {
    char *p;
    int len;

public:
    strtype();                          // constructor
    strtype(const strtype &obj);        // copy constructor
    strtype& operator=(const strtype &obj); // assignment operator
    ~strtype();                         // destructor

    void set(const char *ptr);
    void show() const;
};

// Constructor
strtype::strtype() {
    p = (char *)malloc(SIZE);
    if (!p) {
        cout << "Memory allocation error\n";
        exit(1);
    }
    *p = '\0';
    len = 0;
}

// Copy constructor
strtype::strtype(const strtype &obj) {
    p = (char *)malloc(SIZE);
    if (!p) {
        cout << "Memory allocation error\n";
        exit(1);
    }
    len = obj.len;
    strncpy(p, obj.p, len);
    p[len] = '\0';
}

// Assignment operator
strtype& strtype::operator=(const strtype &obj) {
    if (this != &obj) {
        len = obj.len;
        strncpy(p, obj.p, len);
        p[len] = '\0';
    }
    return *this;
}

// Destructor
strtype::~strtype() {
    cout << "Freeing memory\n";
    free(p);
}

// Set string
void strtype::set(const char *ptr) {
    len = strlen(ptr);
    if (len >= SIZE) len = SIZE - 1;
    strncpy(p, ptr, len);
    p[len] = '\0';
}

// Display string
void strtype::show() const {
    cout << p << "\nLength: " << len << "\n";
}

int main() {
    strtype s1, s2, s3;

    s1.set("For Test!");
    s2.set("This is a test of the strtype class.");

    cout << "s1:\n";
    s1.show();

    cout << "\ns2:\n";
    s2.show();

    // Test copying
    s3 = s1;
    cout << "\ns3 (copy of s1):\n";
    s3.show();

    return 0;
}
