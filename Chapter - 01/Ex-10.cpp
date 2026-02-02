// This program will not compile

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    c = sum(a, b);
    cout << "Sum: " << c << endl;
    return 0;
}


int sum(int a, int b) {
    return a + b;
}



// Ex-10.cpp: In function ‘int main()’:
// Ex-10.cpp:10:9: error: ‘sum’ was not declared in this scope
//    10 |     c = sum(a, b);
//       |         ^~~