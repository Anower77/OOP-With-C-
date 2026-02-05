#include <iostream>
#include <ctime> 
using namespace std;

class timer {
    clock_t start_time;
public:
    timer();               // constructor
    ~timer();              // destructor
};

timer::timer() {
    start_time = clock();
}

timer::~timer() {
    clock_t end_time = clock();
    double elapsed = double(end_time - start_time) / CLOCKS_PER_SEC;
    cout << "Elapsed time: " << elapsed << " seconds\n";
}

int main() {
    {
        timer t;  
        char c;

        // delay ..
        cout << "Press any key to stop the timer: ";
        cin >> c;

    return 0;
    }
}