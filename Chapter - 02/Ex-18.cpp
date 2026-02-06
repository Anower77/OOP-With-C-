#include <iostream>
using namespace std;

class myclass {
    int a;

public:
    myclass();
    void show();
};

myclass::myclass() {
    cout << "In constructor\n";
    a = 10;
}

void myclass::show() {
    cout << "Value of a is: " << a << '\n';
}

int main() {
    myclass obj;
    obj.show();

    return 0;
}