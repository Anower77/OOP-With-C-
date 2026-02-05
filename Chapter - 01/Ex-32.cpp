// struct with constructor and methoda

#include <iostream>
#include <cstring>

using namespace std;


class cl_type {
    double balance;
    double name[40];

public:
    cl_type(double b, const char *n);
    void show();

};

cl_type::cl_type(double b, const char *n) {
    balance = b;
    strcpy((char*)name, n);
}

void cl_type::show() {
    cout << "Name: " << (char*)name << '\n';
    cout << "Balance: " << balance << '\n';
    if (balance < 0)
        cout << "Account is overdrawn!\n";
}


int main() {
    cl_type account1(1200.50, "John Doe");
    cl_type account2(-50.25, "Jane Smith");

    account1.show();
    cout << '\n';
    account2.show();

    return 0;
}

