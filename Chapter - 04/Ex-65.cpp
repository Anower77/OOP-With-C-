// Demonstrate the this pointer
#include <iostream>
#include <cstring>

using namespace std;

class inventory {
    char item[20];
    double cost;
    int on_hand;

public:
    inventory(const char *item, double cost, int on_hand) {
        strcpy(this->item, item);
        this->cost = cost;
        this->on_hand = on_hand;
    }

    void show();
};

void inventory::show() {
    cout << "Item: " << this->item << '\n';
    cout << "Cost: $" << this->cost << '\n';
    cout << "On hand: " << this->on_hand << '\n';
}

int main() {
    inventory item1("Screwdriver", 5.99, 10);
    inventory item2("Hammer", 9.99, 5);

    cout << "Item 1 details:\n";
    item1.show();

    cout << "\nItem 2 details:\n";
    item2.show();

    return 0;
}
