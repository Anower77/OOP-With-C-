#include <iostream>
using namespace std;

class base {
    int x;
public:
    void setx(int n) { x = n; }
    void showx() { cout << x << '\n'; }
};

// Inherit base as private
class derived : private base {
    int y;
public:
    void sety(int n) { y = n; }
    void showy() { cout << y << '\n'; }

    // wrapper functions to access base class
    void setBaseX(int n) { setx(n); }
    void showBaseX() { showx(); }
};

int main() {
    derived ob;

    // ob.setx(10);   // ERROR
    ob.setBaseX(10); // OK

    ob.sety(20);

    // ob.showx();    // ERROR
    ob.showBaseX();  // OK
    ob.showy();

    return 0;
}