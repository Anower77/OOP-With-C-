// As a short first example, this program allocates memory to hold an integer:
#include <iostream>
using namespace std;

int main() {
    int *p;            

    p = new int;      

    if(!p) {
        cout << "Allocation failure\n"; 
        return 1;
    }
    *p = 100;
    cout << "Value is: " << *p << '\n';
    delete p;
    
    return 0;
}

