#include <iostream>
using namespace std;

class planet {
protected:
    double distance; // miles from the sun
    int revolve;     // in days
public:
    planet(double d, int r) {
        distance = d;
        revolve = r;
    }
};

class earth : public planet {
    double circumference;
public:
    earth(double d, int r) : planet(d, r) {
        circumference = 2 * 3.1416 * d;
    }

    void show() {
        cout << "Distance from sun: " << distance << '\n';
        cout << "Revolution days: " << revolve << '\n';
        cout << "Orbit circumference: " << circumference << '\n';
    }
};

int main() {
    earth ob(93000000, 365);
    ob.show();
    return 0;
}