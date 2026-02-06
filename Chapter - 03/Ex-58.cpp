#include <iostream>
using namespace std;

class printer{
    static bool busy;
public:
    static bool isbusy(){
        return busy;
    }
  
    static void setbusy(){
        busy = true;
    }

    static void end_job(){
        busy = false;
    }
};

bool printer::busy = false;

class pr1 {
public:
    void print(){
        if(!printer::isbusy()){
            cout << "Printing started...\n";
            return;
        }
        printer::setbusy();
        cout << "Printing finished.\n";
        printer::end_job();
    }
};


class pr2 {
public:
    void print() {
        if (!printer::isbusy()) {
            cout << "Printing started...\n";
            return;
        }
        printer::setbusy();
        cout << "Printing finished.\n";
        printer::end_job();
    }
};


int main() {
    pr1 a;
    pr2 b;

    a.print();
    b.print();

    return 0;
}