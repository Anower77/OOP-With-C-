#include <iostream>
#include <cstring>

using namespace std;

enum yn { no, yes };
enum color { red, yellow, green, blue, orange };

void out(enum yn x);

char *c[] = { "red", "yellow", "green", "blue", "orange" };

class fruit {
protected:
    enum yn annual;
    enum yn perennial;
    enum yn tree;
    enum yn tropical;
    enum color clr;
    char name[40];
};

class Apple : public fruit {
    enum yn cooking;
    enum yn crunchy;
    enum yn eating;

public:
    void seta(const char *n, enum color c, enum yn ck, enum yn crchy, enum yn e);
    void show();
};

class Orange : public fruit {
    enum yn juice;
    enum yn sour;
    enum yn eating;

public:
    void seto(const char *n, enum color c, enum yn j, enum yn s, enum yn e);
    void show();
};

void Apple::seta(const char *n, enum color c, enum yn ck, enum yn crchy, enum yn e) {
    strcpy(name, n);
    annual = no;
    perennial = yes;
    tree = yes;
    tropical = no;
    clr = c;
    cooking = ck;
    crunchy = crchy;
    eating = e;
}

void Orange::seto(const char *n, enum color c, enum yn j, enum yn s, enum yn e) {
    strcpy(name, n);
    annual = no;
    perennial = yes;
    tree = yes;
    tropical = yes;
    clr = c;
    juice = j;
    sour = s;
    eating = e;
}

void Apple::show() {
    cout << "Apple: " << name << '\n';
    cout << "Color: " << c[clr] << '\n';
    cout << "Cooking: "; out(cooking);
    cout << "Crunchy: "; out(crunchy);
    cout << "Eating: "; out(eating);
    cout << '\n';
}

void Orange::show() {
    cout << "Orange: " << name << '\n';
    cout << "Color: " << c[clr] << '\n';
    cout << "Juice: "; out(juice);
    cout << "Sour: "; out(sour);
    cout << "Eating: "; out(eating);
    cout << "Tropical: "; out(tropical);
    cout << '\n';
}

void out(enum yn x) {
    if (x == no)
        cout << "No\n";
    else
        cout << "Yes\n";
}

int main() {
    Apple a1, a2;
    Orange o1, o2;

    a1.seta("Red Delicious", red, no, yes, yes);
    a2.seta("Jonathan", red, yes, no, yes);

    o1.seto("Navel", orange, no, no, yes);
    o2.seto("Florida", orange, yes, yes, no);

    a1.show();
    a2.show();
    o1.show();
    o2.show();

    return 0;
}


// PAGE : 59