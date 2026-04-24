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
        coord operator-(coord c);
        coord operator-();

};


coord coord::operator-(coord c) {
    coord temp;
    temp.x = x - c.x;
    temp.y = y - c.y;
    return temp;
}

coord coord::operator-() {
    coord temp;
    temp.x = -x;
    temp.y = -y;
    return temp;
}




int main (){
    coord c1(10, 20), c2(5, 15);
    coord c3 = c1 - c2;

    int x, y;
    c3.get_xy(x, y);
    cout << "c3: (" << x << ", " << y << ")" << endl;

    c1 = -c1;
    c1.get_xy(x, y);
    cout << "c1 after negation: (" << x << ", " << y << ")" << endl;


    return 0;
}