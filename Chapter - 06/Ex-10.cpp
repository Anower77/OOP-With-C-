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
        friend coord operator++(coord &ob);

};

coord operator++(coord &ob) {
    coord temp;
    ob.x++;
    ob.y++;
    temp = ob;
    return temp;
}





int main (){
    coord ob1(10, 20), ob2;
    int x, y;

    ++ob1;
    ob1.get_xy(x, y);
    cout << "x: " << x << ", y: " << y << endl;

     ob2 = ++ob1;


    return 0;
}