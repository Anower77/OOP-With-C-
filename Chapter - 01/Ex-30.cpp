// Object Pointer Example

#include <iostream>
using namespace std;

class myclass {
    int a;
public:
    myclass(int x);
    int get();
};

myclass::myclass(int x) {
    a = x;
}

int myclass::get() {
    return a;
}


int main() {
    myclass ob(120);
    myclass *p;

    p = &ob;
    cout << "Value of a is (objact): " << p->get() << '\n';
    cout << "Value of a is (pointer): " << (*p).get() << '\n';
    
    return 0;
}


