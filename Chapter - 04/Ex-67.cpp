
#include <iostream>
using namespace std;

class myclass {
    int a, b;
public:
    myclass(int i, int j) { a = i; b = j; }
    int add() { return a + b; }
    void show();
};

void myclass::show() {
    int t;
    t = add();
    cout << "Sum is: " << t << '\n';
}

int main() {
    myclass obj(10, 20);
    obj.show();
    return 0;
}





