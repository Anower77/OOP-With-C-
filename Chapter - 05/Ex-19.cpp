#include <iostream>
using namespace std;


int f(int a, int b) {
    return a + b;
}

int f(int a, int b, int c) {
    return a + b + c;
}


int main (){
    int x = 1 , y = 2;
    cout << f(x, y) << endl; 
    
    return 0;
}