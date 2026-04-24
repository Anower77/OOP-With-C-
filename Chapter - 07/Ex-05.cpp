#include <iostream>
using namespace std;

class mybase {
    int a, b;
public:
    int c;

    void setab(int i, int j) { a = i; b = j; }
    void getab(int &i, int &j) { i = a; j = b; }
};

class derived1 : public mybase {
public:
    void show() {
        int i, j;
        getab(i, j);
        cout << "derived1 a=" << i << " b=" << j << " c=" << c << '\n';
    }
};

class derived2 : private mybase {
public:
    void setAll(int i, int j, int k) {
        setab(i, j);
        c = k;
    }

    void showAll() {
        int i, j;
        getab(i, j);
        cout << "derived2 a=" << i << " b=" << j << " c=" << c << '\n';
    }
};

int main() {
    derived1 o1;
    derived2 o2;

    int i, j;

    o1.setab(1, 2);
    o1.c = 3;
    o1.getab(i, j);
    cout << i << " " << j << " " << o1.c << '\n';
    o1.show();

    // o2.setab(4,5); // ERROR (private inheritance)
    o2.setAll(4, 5, 6);
    o2.showAll();

    return 0;
}