#include <iostream>
#include <cstdlib>
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
    int &operator [](int i);
};


int &arraytype::operator[](int i){
    if (i <0 || i >= SIZE) {
        cout << "Index out of bounds" << endl;
        exit(1);
    }
    return arr[i];
}



int main (){
    arraytype ob;
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << ob[i] << " ";
    }
    cout << endl;

    ob[SIZE + 100] = 99;
    
    return 0;
}