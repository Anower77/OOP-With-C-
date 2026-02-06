#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class samp {
    char *a;
public:
    samp() { a = nullptr; }
    ~samp() { if(a) free(a); cout << "freeing memory\n"; }

    void show() { cout << a << '\n'; }
    void set(char *str);

};


void samp::set(char *str) {
    a = (char *) malloc(strlen(str) + 1);
    if (!a) {
        cout << "Allocation failure\n";
        exit(1);
    }
    strcpy(a, str);
}

samp input() {
    char s[80];
    samp str;

    cout << "Enter a string: ";
    cin.getline(s, 80);
    str.set(s);
    return str;
}



int main () {
    samp ob;
    ob = input();
    ob.show();

    return 0;
}








