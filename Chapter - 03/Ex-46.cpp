#include <iostream>
using namespace std;

class cl2;  

class cl1 {
    int i, j;
public:
    cl1(int a, int b) { i = a; j = b; }
    cl1(const cl2 &o);      
};

class cl2 {
    int x, y;
public:
    cl2(int a, int b) { x = a; y = b; }

    int getX() const { return x; }
    int getY() const { return y; }
};

cl1::cl1(const cl2 &o) {
    i = o.getX();
    j = o.getY();
}

int main() {
    cl1 obj1(10, 20);
    cl2 obj2(30, 40);

    obj1 = obj2;  

    return 0;
}
