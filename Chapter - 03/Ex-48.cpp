#include <iostream>
using namespace std;

class samp {
    int i;
public:
    samp(int a, int b) { i = a; }
    void set_i(int n) { i = n; }
    int get_i() { return i; }
};

/*
Set o.i to its square . This has no effect on the
object used to call sqr_it () , however .
*/

void sqr_it(samp &obj) {
    int val = obj.get_i();
    val = val * val;
    obj.set_i(val);
    cout << "Inside sqr_it (): " << val << '\n';
}

int main() {
    samp ob(5, 0), ob2(10, 0);
    sqr_it(ob);
    cout << "Square is: " << ob.get_i() << '\n';
    sqr_it(ob2);
    cout << "Square is: " << ob2.get_i() << '\n';
    return 0;
}

