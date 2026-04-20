#include <iostream>
#include <cstdio>
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




int main() {

	myClass *p;
	myClass ob(10);

	p = new myClass[10];
	if (!p) {
		cout << "Allocation error\n";
	}
	
	for (int i = 0; i < 10; i++) {
		p[i] = ob;
	}

	for (int i = 0; i < 10; i++) {
		cout << "p[" << i << "]: " << p[i].getx() << '\n';
	}
	
	return 0;
}