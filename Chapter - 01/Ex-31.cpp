// struct with constructor and method

#include <iostream>
#include <cstring>
using namespace std;

struct st_type {
    st_type(double b, const char *n);
    void show();
private:
    double balance;
    char name[20];
};

st_type::st_type(double b, const char *n) {
    balance = b;
    strncpy(name, n, sizeof(name) - 1); 
    name[sizeof(name) - 1] = '\0';      
}



void st_type::show() {
    cout << "Name: " << name << '\n';
    cout << "Balance: " << balance << '\n';
    if (balance < 0)
        cout << "Account is overdrawn!\n";
}

int main() {
    st_type account1(1200.50, "John Doe");
    st_type account2(-50.25, "Jane Smith");

    account1.show();
    cout << '\n';
    account2.show();

    return 0;
}
