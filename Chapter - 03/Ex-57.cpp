#include <iostream>
using namespace std;

class truck;

class car {
    int passengers;
    int speed;
public:
    car(int p, int s) { passengers = p; speed = s; }
    int sp_greater(truck t);
};

class truck {
    int weight;
public:
    int speed;
    truck(int w, int s) { weight = w; speed = s; }
    friend int car::sp_greater(truck t);
};

int car::sp_greater(truck t) {
    return speed - t.speed;
}

int main() {
    car c1(5, 120), c2(4, 100);
    truck t1(10000, 80), t2(15000, 90);

    cout << "Comparing c1 and t1 speeds:\n";
    if (c1.sp_greater(t1) > 0)
        cout << "Car is faster than truck\n";
    else if (c1.sp_greater(t1) < 0)
        cout << "Truck is faster than car\n";
    else
        cout << "Car and truck have the same speed\n";
    
    cout << "Comparing c2 and t2 speeds:\n";
    if (c2.sp_greater(t2) > 0)
        cout << "Car is faster than truck\n";
    else if (c2.sp_greater(t2) < 0)
        cout << "Truck is faster than car\n";
    else
        cout << "Car and truck have the same speed\n";

    return 0;
}