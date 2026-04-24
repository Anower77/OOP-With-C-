#include <iostream>
using namespace std;

class array {
    int numn[10];
public:
    array();
    void set(int n[10]);
    void display();
    array operator+(array ob2);
    array operator-(array ob2);
    int operator==(array ob2);
};

array::array() {
    for (int i = 0; i < 10; i++) {
        numn[i] = 0;
    }
}

void array::set(int n[10]) {
    for (int i = 0; i < 10; i++) {
        numn[i] = n[i];
    }
}

void array::display() {
    for (int i = 0; i < 10; i++) {
        cout << numn[i] << " ";
    }
    cout << endl;
}

array array::operator+(array ob2) {
    array temp;
    for (int i = 0; i < 10; i++) {
        temp.numn[i] = numn[i] + ob2.numn[i];
    }
    return temp;
}

array array::operator-(array ob2) {
    array temp;
    for (int i = 0; i < 10; i++) {
        temp.numn[i] = numn[i] - ob2.numn[i];
    }
    return temp;
}

int array::operator==(array ob2) {
    for (int i = 0; i < 10; i++) {
        if (numn[i] != ob2.numn[i]) return 0;
    }
    return 1;
}

int main() {
    array a1, a2, a3;
    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    int y[10] = {10,9,8,7,6,5,4,3,2,1};

    a1.set(x);
    a2.set(y);

    a3 = a1 + a2;
    a3.display();

    a3 = a1 - a2;
    a3.display();

    if (a1 == a2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";

    return 0;
}