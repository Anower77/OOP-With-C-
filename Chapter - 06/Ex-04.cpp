#include <iostream>
using namespace std;

class coord {
    int x, y;
public:
    coord() {
        x = 0;
        y = 0;
    }

    coord(int a, int b) {
        x = a;
        y = b;
    }

    coord(int a) {   // for implicit conversion (int -> coord)
        x = a;
        y = a;
    }

    void getxy(int &a, int &b) {
        a = x;
        b = y;
    }

    coord operator+(coord c);
    coord operator-(coord c);
};

coord coord::operator+(coord c) {
    coord temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}

coord coord::operator-(coord c) {
    coord temp;
    temp.x = x - c.x;
    temp.y = y - c.y;
    return temp;
}

int main (){
    coord c1(10, 20), c2(5, 15), c3;

    int x, y;
    
    c3 = c1 + c2;
    c3.getxy(x, y);
    cout << "c1 + c2 = (" << x << ", " << y << ")\n";

    c3 = c1 + 100;
    c3.getxy(x, y);
    cout << "c1 + 100 = (" << x << ", " << y << ")\n";

    return 0;
}