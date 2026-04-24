#include <iostream>
#include <cstdlib>
using namespace std;

class list {
public:
    list *head;
    list *tail;
    list *next;
    int num;

    list() {
        head = tail = next = NULL;
    }

    virtual void store(int i) = 0;
    virtual int retrieve() = 0;
};

// Queue implementation
class queue : public list {
public:
    void store(int i);
    int retrieve();
};

void queue::store(int i) {
    list *item = new queue;

    if (!item) {
        cout << "Allocation error.\n";
        exit(1);
    }

    item->num = i;
    item->next = NULL;

    if (tail)
        tail->next = item;
    tail = item;

    if (!head)
        head = tail;
}

int queue::retrieve() {
    if (!head) {
        cout << "List empty.\n";
        return 0;
    }

    int i = head->num;
    list *p = head;

    head = head->next;
    delete p;

    return i;
}

// Stack implementation
class stack : public list {
public:
    void store(int i);
    int retrieve();
};

void stack::store(int i) {
    list *item = new stack;

    if (!item) {
        cout << "Allocation error.\n";
        exit(1);
    }

    item->num = i;

    item->next = head;
    head = item;

    if (!tail)
        tail = head;
}

int stack::retrieve() {
    if (!head) {
        cout << "List empty.\n";
        return 0;
    }

    int i = head->num;
    list *p = head;

    head = head->next;
    delete p;

    return i;
}

int main() {
    list *p;

    // Queue demo
    queue q_ob;
    p = &q_ob;

    p->store(1);
    p->store(2);
    p->store(3);

    cout << "Queue: ";
    cout << p->retrieve() << " ";
    cout << p->retrieve() << " ";
    cout << p->retrieve() << "\n";

    // Stack demo
    stack s_ob;
    p = &s_ob;

    p->store(1);
    p->store(2);
    p->store(3);

    cout << "Stack: ";
    cout << p->retrieve() << " ";
    cout << p->retrieve() << " ";
    cout << p->retrieve() << "\n";

    return 0;
}