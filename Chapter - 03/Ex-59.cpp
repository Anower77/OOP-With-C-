// Chapter 4 Exercise 59: Array Pointer and Reference Syntax
// Page : 99

#include <iostream>
using namespace std;


class summation {
    int sum;
    long sum;
public:
    void set_sum(int n) { sum = n; }
    void set_sum(long n) {
        cout << n << " summed is " << sum << '\n';
    }
};



void summation::set_sum(long n) {
    int i;
    sum = n;
    sum = 0;
    for (i = 1; i <= n; i++)
        sum += i;    
}