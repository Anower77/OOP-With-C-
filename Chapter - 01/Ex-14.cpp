

#include <iostream>
using namespace std;

int abs(int n);
long abs(long n);
double abs(double n);

int main() {
    
    cout << "Absolute value of -10 is " << abs(-10) << endl;
    cout << "Absolute value of -10L is " << abs(-10L) << endl;
    cout << "Absolute value of -10.5 is " << abs(-10.5) << endl;

    return 0;
}

int abs(int n) {
    cout << "In interger abs()\n";
    return n < 0 ? -n : n;
}


double abs(double n) {
    cout << "In double abs()\n";
    return n < 0 ? -n : n;
}


