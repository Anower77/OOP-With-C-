#include <iostream>
using namespace std;

#define SIZE 10

class stack {
    char stck[SIZE];
    int top;

public:
    void init();
    void push (char ch);
    char pop();
};

void stack::init() {
    top = 0;
}

void stack::push(char ch) {
    if (top == SIZE) {
        cout << "Stack is full\n";
        return;
    }
    stck[top++] = ch;
}

char stack::pop() {
    if (top == 0) {
        cout << "Stack is empty\n";
        return 0;
    }
    return stck[--top];
}



int main() {
    stack s1, s2;
    int i;

    s1.init();
    s2.init();

    s1.push('A');
    s2.push('X');
    s1.push('B');
    s2.push('Y');
    s1.push('C');
    s2.push('Z');   

    for (i = 0; i < 3; i++) {
        cout << "Popped from s1: " << s1.pop() << '\n';
        cout << "Popped from s2: " << s2.pop() << '\n';
    }
    
    
    return 0;
}










