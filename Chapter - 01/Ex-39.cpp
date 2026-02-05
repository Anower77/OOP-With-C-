// Automatic In-lining of member functions

#include <iostream>
using namespace std;

class samp {
    int i, j;
public:
    samp(int a, int b);
    int divisible() { return (i % j) == 0; }
};

samp::samp(int a, int b) {
    i = a;
    j = b;
}


int main () {
    samp obj1(10, 5);
    samp obj2(10, 3);

    if (obj1.divisible())
        cout << "10 is divisible by 5\n";
    else
        cout << "10 is not divisible by 5\n";

    if (obj2.divisible())
        cout << "10 is divisible by 3\n";
    else
        cout << "10 is not divisible by 3\n";

    return 0;
}