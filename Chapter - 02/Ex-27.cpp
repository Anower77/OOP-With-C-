// A class with a parameterized constructor

#include <iostream>

using namespace std;

class myclass {
    int i, j;
public:
    myclass(int i, int j);   
    void show();
};

myclass::myclass (int x, int y) {
    cout << "In constructor with parameters: " << x << ", " << y << '\n';
    i = x;
    j = y;
}


void myclass::show() {
    cout << "Values are: i = " << i << ", j = " << j << '\n';
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    
    myclass obj(x, y);   
    obj.show();           

    return 0;
}