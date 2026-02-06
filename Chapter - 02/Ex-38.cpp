#include <iostream>
using namespace std;

inline int min(int a, int b) {
    return (a < b) ? a : b;
}

inline long min(long a, long b) {
    return (a < b) ? a : b;
}


inline double min(double a, double b) {
    return (a < b) ? a : b;
}

int main() {
    int i1 = 10, i2 = 20;
    long l1 = 100L, l2 = 50L;
    double d1 = 12.5, d2 = 10.5;

    cout << "Minimum of " << i1 << " and " << i2 << " is " << min(i1, i2) << '\n';
    cout << "Minimum of " << l1 << " and " << l2 << " is " << min(l1, l2) << '\n';
    cout << "Minimum of " << d1 << " and " << d2 << " is " << min(d1, d2) << '\n';

    return 0;
}