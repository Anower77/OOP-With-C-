// Write a C++ program that demonstrates the use of a parameterized constructor and a destructor to manage dynamic memory for strings.


#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype {
    char *p;
    int len;
public:
    strtype(const char *ptr);  
    ~strtype();
    void show() const;
};

strtype::strtype(const char *ptr) {
    len = strlen(ptr);
    p = (char *)malloc(len + 1);
    if (!p) {
        cout << "Memory allocation error\n";
        exit(1);
    }
    strcpy(p, ptr);
}

strtype::~strtype() {
    cout << "Freeing memory\n";
    free(p);
}

void strtype::show() const {
    cout << p << " - length: " << len << '\n';
}

int main() {
    strtype s1("Hello, World!");
    strtype s2("C++ Programming");

    s1.show();
    s2.show();

    return 0;
}
