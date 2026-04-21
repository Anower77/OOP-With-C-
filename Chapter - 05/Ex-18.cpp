#include <iostream>
using namespace std;


void f(unsigned char c){
    cout << c;
}

void f(char c){
    cout << c;  
}   



int main (){
    f('a');
    // f(97);


    return 0;
}