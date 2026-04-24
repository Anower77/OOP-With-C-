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

    int& operator[](int i) {   // return reference
        return arr[i];
    }
};

int main (){
    arraytype ob;

    for (int i = 0; i < SIZE; i++) {
        ob[i] = (i + 1) * 10;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << ob[i] << " ";
    }

    return 0;
}