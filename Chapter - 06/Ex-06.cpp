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
        coord operator++();

};

coord coord::operator++() {
    x++;
    y++;
    return *this;
}



int main (){
    coord c1(10, 20);
    int x, y;

    ++c1;
    c1.get_xy(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    


    return 0;
}