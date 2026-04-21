#include <iostream>
using namespace std;

void f(int a, int b, int c = 0, int d = 0) {
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << endl;
}

int main() {
     
  

    f(10, 20);
    f(10, 20, 30);
    f(10, 20, 30, 40);

    return 0;
}