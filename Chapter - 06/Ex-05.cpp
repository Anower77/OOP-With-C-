#include <iostream>
using namespace std;


class coord {
    int x, y;
    public:
        coord() {
            x = 0;
            y = 0;
        }
        coord(int i, int j){
            x = i;
            y = j;
        }
        void get_xy(int &i, int &j) {
            i = x;
            j = y;
        }
        int operator==(coord c);
        int operator&&(coord c);

};

int coord::operator==(coord c) {
    if (x == c.x && y == c.y)
        return 1;
    else
        return 0;
}

int coord::operator&&(coord c) {
    if (x && y && c.x && c.y)
        return 1;
    else
        return 0;
}




int main (){
    coord c1(10, 20), c2(10, 20), c3(0, 0), c4(5, 15);

    if (c1 == c2)
        cout << "c1 and c2 are equal\n";
    else
        cout << "c1 and c2 are not equal\n";

    if (c1==c3)
        cout << "c1 and c3 are equal\n";
    else
        cout << "c1 and c3 are not equal\n";
    

    if (c1 && c2)
        cout << "c1 and c2 are both non-zero\n";
    else
        cout << "c1 and c2 are not both non-zero\n";

    if (c1 && c3)
        cout << "c1 and c3 are both non-zero\n";
    else
        cout << "c1 and c3 are not both non-zero\n";

    if (c3 && c4)
        cout << "c3 and c4 are both non-zero\n";
    else
        cout << "c3 and c4 are not both non-zero\n";
            

    return 0;
}