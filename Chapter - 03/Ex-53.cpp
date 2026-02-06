#include <iostream>
#include <cstring>
using namespace std;

class samp {
    char s[80];

public:
    void show() { cout << s << '\n'; }
    void set(char *str) { strcpy(s, str); }
};

samp input() {
    char s[80];
    samp str;

    cout << "Enter a string: ";
    cin.getline(s, 80);
    str.set(s);
    return str;

}



int main() {
    samp s1, s2;
    s1 = input();
    s2 = input();
    s1.show();
    s2.show();

    return 0;

}