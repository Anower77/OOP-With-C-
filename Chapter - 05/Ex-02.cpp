#include <iostream>
using namespace std;

class myClass {
	int x;
	public:
		myClass() {
			x = 0;
		}
		myClass(int n) {
			x = n;
		}
		int getx() {
			return x;
		}

};
int main (){
	myClass o1(10);
	myClass o2;

	cout << "o1: " << o1.getx() << '\n';
	cout << "o2: " << o2.getx() << '\n';

	return 0;
}