// overloaded function

#include <iostream>
using namespace std;

void f1(int a);
void f1(int a, int b);

int main() {
    f1(10);
    f1(10, 20);

    return 0;    
}

void f1(int a) {
    cout << "In f1 \n";
}

void f1(int a, int b) {
    cout << "In overloaded f1 \n";
}