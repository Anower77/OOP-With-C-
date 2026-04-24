#include <iostream>
using namespace std;

const int SIZE = 5;

class arraytype {
    int arr[SIZE];
    public:
    arraytype() {
        for (int i = 0; i < SIZE; i++) {
            arr[i] = 0;
        }
    }  
    int operator[](int i){
        return arr[i];
    }
};



int main (){
    arraytype ob;
    int i;

    for(i =1; i <= SIZE; i++) {
        cout << ob[i] << " ";
    }

    return 0;
}