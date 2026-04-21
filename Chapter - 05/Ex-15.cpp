#include <iostream>
using namespace std;


class MyClass {
    int x;
    public:
    MyClass(int n = 0) {
        x = n;
    }
    int getx() {
        return x;
    }

};



int main (){
    MyClass obj1(10);
    MyClass obj2;

    cout << "obj1: " << obj1.getx() << endl;
    cout << "obj2: " << obj2.getx() << endl;


    return 0;
}