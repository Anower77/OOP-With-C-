// The next program prompts the user for an integer value, a floating-point value, and a
// string. It then uses one input statement to read all three.


#include <iostream>
using namespace std;

int main() {
    int intVal;
    double floatVal;
    char strVal[100];

    cout << "Enter an integer, a floating-point value, and a string: ";
    cin >> intVal >> floatVal >> strVal;

    cout << "You entered: " << intVal << ", " << floatVal << ", " << strVal << '\n';

    return EXIT_SUCCESS;    
}