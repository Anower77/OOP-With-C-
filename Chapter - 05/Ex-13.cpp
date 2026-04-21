#include <iostream>
using namespace std;


double rect_area(double width, double height) {
    return width * height;
}

double rect_area(double height) {
    return height * height;
}



int main (){
    cout << rect_area(5.0, 10.0) << endl;
    cout << rect_area(5.0) << endl;


    return 0;
}