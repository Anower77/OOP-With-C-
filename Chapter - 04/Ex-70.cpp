
#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char name[50];
    char phone[20];
public:
    Person(const char* n, const char* p) {
        strcpy(name, n);
        strcpy(phone, p);
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone << endl;
    }
};

int main() {
    float* f = new float;
    long* l = new long;
    char* c = new char;

    *f = 3.14f;
    *l = 123456;
    *c = 'A';

    cout << "Float value: " << *f << endl;
    cout << "Long value: " << *l << endl;
    cout << "Char value: " << *c << endl;

    delete f;
    delete l;
    delete c;

    Person* p = new Person("Yamin", "0123456789");
    p->show();
    delete p;

    return 0;
}

