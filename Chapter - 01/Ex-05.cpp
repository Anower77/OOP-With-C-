#include <iostream>
using namespace std;

int main() {
    int num1, num2, d, min;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    min = num1 > num2 ? num2 : num1;
    for (d = 2; d <= min; d++)
        if (num1 % d == 0 && num2 % d == 0) break;

    if (d > min)
        cout << "No common divisor other than 1." << endl;
    else
        cout << "The smallest common divisor other than 1 is: " << d << endl;

    return 0;
}