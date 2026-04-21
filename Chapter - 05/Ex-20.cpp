#include <iostream>
using namespace std;

int f(int x) {
    return x * x;
}

int f(int x, int y) {
    return x * y;
}



int main (){
    cout << f(5) << endl; 
    cout << f(5, 3) << endl; 


    return 0;
}