#include <iostream>
#include <cstdlib>

using namespace std;

class dyna {

    int *p;
public:
    dyna(int n) ;
    ~dyna() { free(p); cout << "Destructor called\n"; }
    int get() { return *p; }
     
};


dyna::dyna(int i) {
    p = (int *)malloc(sizeof(int));
    if (!p)
    {
        cout << "Allocation failure\n"; 
        exit(1);

    }
    *p = i;
    cout << "Constructor called\n";
}


int nag(dyna obj) {
    return -obj.get();
}

int main() {
    dyna a(-10);
    cout << "Value is: " << a.get() << '\n';
    cout << "Negative is: " << nag(a) << '\n';

    dyna b(20);
    cout << "Value is: " << b.get() << '\n';
    cout << "Negative is: " << nag(b) << '\n';

    cout << a.get() << '\n';
    cout << nag(a) << '\n';

    return 0;
}