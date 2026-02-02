// factorial calculation using a for loop

#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter an integer: ";
    cin >> i;

    int j, factorial = 1;

    for(j = i; j >= 1; j--) {
        factorial *= j;
    }
    cout << "The factorial of " << i << " is " << factorial << endl;

    return 0;
}



