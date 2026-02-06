#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct strtype {
    strtype (char *ptr);
    ~strtype();
    void show();
private:
    char *p;
    int len;
};


strtype::strtype(char *ptr) {
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


void strtype::show() {
    cout << p << " - length: " << len << '\n';
}

int main() {
    strtype s1("Hello, World!");
    strtype s2("C++ Programming");

    s1.show();
    s2.show();

    return 0;
}