#include <iostream>
#include <cstdlib>
using namespace std;

class myClass {
    int *p;

public:
    myClass(int i);

    ~myClass() {
        delete p;
    }

    friend int display(const myClass &obj);
};

// Constructor
myClass::myClass(int i) {
    p = new int;   // allocate memory

    if (!p) {
        cout << "Memory allocation failed!" << endl;
        exit(1);
    }

    *p = i;
}

// Friend function
int display(const myClass &obj) {
    return *(obj.p);
}

int main() {
    myClass obj(10);
    cout << "Value: " << display(obj) << endl;

    return 0;
}