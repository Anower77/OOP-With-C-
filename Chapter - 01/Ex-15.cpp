// Data type overloading functions in C++

#include <iostream>
using namespace std;

void date(char *date);
void date(int month, int day, int year);

int main() {
    date("8/23/99");
    date(8, 23, 1999);

    return 0;
}


void date(char *date) {
    cout << "Date is: " << date << endl;
}

void date(int month, int day, int year) {
    cout << "Date: " << month << "/" << day << "/" << year << '\n';
}

