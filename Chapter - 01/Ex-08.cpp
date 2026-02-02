// Example to demonstrate defining member functions outside the class definition

#include <iostream>
using namespace std;

class myclass {
    int a;
    public:
    void set_a(int num);
    int get_a();
};

void myclass::set_a(int num) {
    a = num;
}

int myclass::get_a() {
    return a;
}


int main() {
    myclass obj1, obj2;
    obj1.set_a(10);
    obj2.set_a(20);

    cout << "The value of a is: " << obj1.get_a() << '\n';
    cout << "The value of a is: " << obj2.get_a() << '\n';
    
    return 0;
}


