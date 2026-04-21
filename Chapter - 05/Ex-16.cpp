#include <iostream>
#include <cctype>
using namespace std;

const int ignore = 0;
const int upper  = 1;
const int lower  = 2;

void print(const char *s, int how = -1);

void print(const char *s, int how) {
    while (*s) {
        if (how == upper)
            cout << (char)toupper(*s);
        else if (how == lower)
            cout << (char)tolower(*s);
        else
            cout << *s;

        s++;
    }
}

int main() {
    // print("hello there\n", ignore);
    print("hello there\n", upper);
    print("hello there\n", lower);
    print("hello all \n");

    return 0;
}
