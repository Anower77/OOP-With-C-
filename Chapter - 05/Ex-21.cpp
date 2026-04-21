#include <iostream>
using namespace std;

void space(int count){
    for ( ; count ; count--){
        cout << " ";
    }

}

void space(int count, char c){
    for ( ; count ; count--){
        cout << c;
    }

}




int main (){
    void (*ptr)(int);
    void (*ptr2)(int, char);
    ptr = space;
    ptr2 = space;
    ptr(22);
    ptr2(10, '*');

    return 0;
}