// Given the following new-style C++ program, show how to change it into its old-style form.

#include <iostream>
using namespace std;

int f(int a);

int main() {
    cout << f(10) << '\n';
    return 0;
}

int f(int a) {
    return a * 3.1416;
}


