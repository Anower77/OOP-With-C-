// Constructors that take parameters
#include <iostream>
using namespace std;

class myclass {
    int a;
public:
    myclass(int x);   
    void show();
};

myclass::myclass(int x) {
    cout << "In constructor with parameter: " << x << '\n';
    a = x;
}

void myclass::show() {
    cout << "Value of a is: " << a << '\n';
}


int main() {
    myclass obj(10);   
    obj.show();        

    return 0;
}
