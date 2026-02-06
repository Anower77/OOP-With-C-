
#include <iostream>
using namespace std;

class samp {
    int i;
public:
    samp(int a) { i = a; }
    int get_i() { return i; }
};

int sqr_it(samp obj) {
    int val = obj.get_i();
    return val * val;
}

int main() {
    samp ob(5), ob2(10);
    cout << "Square is: " << sqr_it(ob) << '\n';
    cout << "Square is: " << sqr_it(ob2) << '\n';
    return 0;
}