// Here is a program that contains both C and C++-style comments:
/*
This is a C- like comment .
This program determines whether
an integer is odd or even
*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if(num % 2 == 0) 
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl; 

    return 0;
}


// PAGE : 25 