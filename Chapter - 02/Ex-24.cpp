#include <iostream>
using namespace std;

class myclass {
    int a, b;
public:
    myclass(int i, int j);   
    void show();
};


myclass::myclass(int i, int j) {
    cout << "In constructor with parameters: " << i << ", " << j << '\n';
    a = i;
    b = j;
}

void myclass::show() {
    cout << "Values are: a = " << a << ", b = " << b << '\n';
}

int main() {
    myclass obj(10, 20);   
    obj.show();           

    return 0;
}   