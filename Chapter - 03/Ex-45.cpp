#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype {
    char *p;
    int len;
public:
    strtype(const char *s);
    strtype(const strtype &obj);            
    strtype& operator=(const strtype &obj); 
    ~strtype();
    void show() const;
};

strtype::strtype(const char *s) {
    len = strlen(s);
    p = (char*)malloc(len + 1);
    strcpy(p, s);
}

strtype::strtype(const strtype &obj) {
    len = obj.len;
    p = (char*)malloc(len + 1);
    strcpy(p, obj.p);
}

strtype& strtype::operator=(const strtype &obj) {
    if (this == &obj)
        return *this;

    free(p);  

    len = obj.len;
    p = (char*)malloc(len + 1);
    strcpy(p, obj.p);

    return *this;
}

strtype::~strtype() {
    cout << "Freeing memory for: " << p << '\n';
    free(p);
}

void strtype::show() const {
    cout << p << " " << len << '\n';
}

int main() {
    strtype s1("Hello, World!");
    strtype s2("C++ Programming");

    s2 = s1;   

    s1.show();
    s2.show();

    return 0;
}
