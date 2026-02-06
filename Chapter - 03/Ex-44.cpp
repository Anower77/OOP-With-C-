#include <iostream>
using namespace std;

#define SIZE 10

class stack {
    char arr[SIZE];
    int top;
public:
    stack();
    void push(char ch);
    char pop();
};

stack::stack() {
    cout << "Constructor called\n";
    top = 0;
}

void stack::push(char ch) {
    if (top == SIZE) {
        cout << "Stack Overflow\n";
        return;
    }
    arr[top] = ch;
    top++;
}

char stack::pop() {
    if (top == 0) {
        cout << "Stack Underflow\n";
        return 0;
    }
    top--;
    return arr[top];
}

int main() {
    stack s1, s2;

    s1.push('A');
    s1.push('B');
    s1.push('C');

    s2 = s1;   // copy stack

    for (int i = 0; i < 3; i++)
        cout << "Pop s1: " << s1.pop() << '\n';

    for (int i = 0; i < 3; i++)
        cout << "Pop s2: " << s2.pop() << '\n';

    return 0;
}
