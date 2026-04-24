#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


class strtype {
    char *p;
    int size;
    public:
    strtype (char *ptr);
    ~strtype () {
        cout << "Destructor called" << endl;
        delete [] p;
    }

    char *get_str() {
        return p;
    }
    strtype &operator=(strtype &ob);
};

strtype::strtype(char *ptr) {
    size = strlen(ptr);
    p = new char[size + 1];
    if (!p) {
        cout << "Memory allocation failed" << endl;
        exit(1);
    }
    strcpy(p, ptr);
}



strtype &strtype::operator=(strtype &ob){
    if (this == &ob) {
        return *this;
    }
    delete [] p;
    size = ob.size;
    p = new char[size + 1];
    if (!p) {
        cout << "Memory allocation failed" << endl;
        exit(1);
    }
    strcpy(p, ob.p);
    return *this;
}

int main (){

    strtype ob1("Hello"), ob2("World");
    cout << "ob1: " << ob1.get_str() << endl;
    cout << "ob2: " << ob2.get_str() << endl;

    ob1 = ob2;

    cout << "After assignment:" << endl;
    cout << "ob1: " << ob1.get_str() << endl;
    cout << "ob2: " << ob2.get_str() << endl;

    return 0;
}