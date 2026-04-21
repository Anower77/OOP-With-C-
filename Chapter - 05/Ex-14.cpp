#include <iostream>
using namespace std;


double rect_area(double length, double width=0) {
    if (!width)
        width = length;
    return length * width;
}



int main (){
    cout << rect_area(5.0, 10.0) << endl;
    cout << rect_area(5.0) << endl;

    return 0;
}