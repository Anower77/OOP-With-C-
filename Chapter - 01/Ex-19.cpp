#include <iostream>
using namespace std;

class myclass {
    int a;

public:
 
    myclass(int i);
    myclass();
    void show();

};

myclass::myclass(int i) {
    cout << "Ïn constructor with parameter: " << i << '\n';
    a = 10;
}

myclass::myclass() {
    cout << "Destructor...\n";
}

void myclass::show() {
    cout << "Value of a is: " << a << '\n';
}

int main() {

    myclass obj;
    obj.show();

    return 0;
}

