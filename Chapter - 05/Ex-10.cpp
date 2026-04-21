#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called!" << endl;
    }

    MyClass(const MyClass& other) {
        cout << "Copy constructor called!" << endl;
    }

    MyClass(MyClass&& other) {
        cout << "Move constructor called!" << endl;
    }

    MyClass f();
};

// Function definition
MyClass MyClass::f() {
    MyClass temp;
    return temp;
}

int main() {
    MyClass obj1;
    MyClass obj2 = obj1.f();

    return 0;
}




// page : 144