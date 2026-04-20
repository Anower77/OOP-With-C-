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
	myClass o1[10];

	myClass o2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int i = 1; i < 10; i++) {
		cout << "o1[" << i << "]: " << o1[i].getx() << '\n';
		cout << "o2[" << i << "]: " << o2[i].getx() << '\n';
	}

	return 0;
}