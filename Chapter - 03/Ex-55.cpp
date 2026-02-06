#include <iostream>
using namespace std;

class myclass {
public:
    int n, d;
    myclass(int a, int b) { n = a; d = b; }
    friend int isfactor(myclass obj);
};

int isfactor(myclass obj) {
    return (obj.n % obj.d) == 0;
}


int main() {
    myclass ob(10, 5), ob2(10, 3);

    if(isfactor(ob))
        cout << ob.d << " is a factor of " << ob.n << '\n';
    else
        cout << ob.d << " is not a factor of " << ob.n << '\n';

    if(isfactor(ob2))
        cout << ob2.d << " is a factor of " << ob2.n << '\n';
    else
        cout << ob2.d << " is not a factor of " << ob2.n << '\n';

    return 0;
}

