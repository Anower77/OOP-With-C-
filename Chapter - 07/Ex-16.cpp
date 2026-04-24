#include <iostream>
using namespace std;

// First base class
class B1 {
    int a;
public:
    B1(int x) { a = x; }
    int geta() { return a; }
};

// Second base class
class B2 {
    int b;
public:
    B2(int x) { b = x; }
    int getb() { return b; }
};

// Multiple inheritance
class D : public B1, public B2 {
    int c;
public:
    D(int x, int y, int z) : B1(z), B2(y) {
        c = x;
    }

    void show() {
        cout << geta() << ' ' << getb() << ' ' << c << '\n';
    }
};

int main() {
    D ob(1, 2, 3);
    ob.show();
    return 0;
}