

#include <iostream>
using namespace std;

int main() {
    union {
        unsigned char bytes[4];
        double value;
    };

    int i;
    value = 859345.324;

    for (i = 0; i < 8; i++) {
        cout << "Byte " << i << ": " << static_cast<int>(bytes[i]) << '\n';
    }

    return 0;
}


