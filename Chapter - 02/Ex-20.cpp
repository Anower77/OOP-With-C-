#include <iostream>
using namespace std;

#define SIZE 10

class stack {
    char stck[SIZE];
    int top;
public:
    stack();
    void push (char ch);
    char pop();
    
};

stack::stack() {
    cout << "Constructor a stack \n";
    top = 0;
}

void stack::push(char ch) {
    if (top == SIZE) {
        cout << "Stack is full \n";
        return;
    }
    stck[top++] = ch;
}

char stack::pop() {
    if (top == 0) {
        cout << "Stack is empty \n";
        return 0;
    }
    top--;
    return stck[top];
}

int main() {
    stack s1, s2;
    int i;
    s1.push('A');
    s2.push('X');
    s1.push('B');
    s2.push('B');
    s1.push('C');
    s2.push('Z');


    for (i = 0; i < 3; i++) {
        cout << "Pop from s1: " << s1.pop() << '\n';
    }
    for (i = 0; i < 3; i++) {
        cout << "Pop from s2: " << s2.pop() << '\n';
    }
}


// PAGE : 46