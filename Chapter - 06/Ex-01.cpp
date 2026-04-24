#include <iostream>
#include <cstring>
using namespace std;

class myclass {
    int x, y;
public:
    myclass(int a, int b) {
        x = a;
        y = b;
    }
};

void f(int a);

class test {
    char *p;
    int *q;
    int count;

public:
    test(char *x, int *y, int c) {
        p = new char[strlen(x) + 1];
        strcpy(p, x);

        q = new int;
        *q = *y;

        count = c;
    }

    ~test() {
        delete[] p;
        delete q;
    }
};

int main() {

    
    return 0;
}