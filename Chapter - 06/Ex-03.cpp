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
        coord operator+(coord c);
        coord operator-(coord c);
        coord operator=(coord c);

};

coord coord::operator+(coord c) {
    coord temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}

coord coord::operator-(coord c) {
    coord temp;
    temp.x = x - c.x;
    temp.y = y - c.y;
    return temp;
}


coord coord::operator=(coord c) {
    x = c.x;
    y = c.y;
    return *this;
}


int main (){
    coord o1(10, 20), o2(5, 15), o3;
    int x, y;
    o3 = o1 + o2;
    o3.get_xy(x, y);
    cout << "x: " << x << " y: " << y << endl;


    o3 = o1 - o2;
    o3.get_xy(x, y);
    cout << "x: " << x << " y: " << y << endl;

    o3 = o1;
    o3.get_xy(x, y);
    cout << "x: " << x << " y: " << y << endl;


    return 0;
}