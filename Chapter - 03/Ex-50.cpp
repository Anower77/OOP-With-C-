#include <iostream>
using namespace std;

class samp {
    int i;
public:
    samp(int n) { i = n; }
    void set_i(int n) { i = n; }
    int get_i() { return i; }
};

void sqr_it(samp *obj) {
    obj->set_i(obj->get_i() * obj->get_i());
    cout << "Copy is: " << obj->get_i() << '\n';
}



int main() {
    samp ob(5), ob2(10);
    sqr_it(&ob);
    cout << "Square is: " << ob.get_i() << '\n';
    sqr_it(&ob2);
    cout << "Square is: " << ob2.get_i() << '\n';
    return 0;
}