#include <iostream>
using namespace std;

class Array {
	int *p;
	int size;

public:
	// Constructor
	Array(int sz) {
		size = sz;
		p = new int[size];
		cout << "using normal constructor\n";
	}

	// Copy constructor
	Array(const Array &a) {
		size = a.size;
		p = new int[size];

		for (int i = 0; i < size; i++) {
			p[i] = a.p[i];
		}

		cout << "using copy constructor\n";
	}

	// Assignment operator
	Array& operator=(const Array &a) {
		if (this == &a) return *this;

		delete[] p;

		size = a.size;
		p = new int[size];

		for (int i = 0; i < size; i++) {
			p[i] = a.p[i];
		}

		return *this;
	}

	// Destructor
	~Array() {
		delete[] p;
	}

	// Getter
	int& get(int i) {
		return p[i];
	}
};

int main() {
	Array a1(5);

	for (int i = 0; i < 5; i++) {
		a1.get(i) = i + 1;
	}

	for (int i = 0; i < 5; i++) {
		cout << a1.get(i) << ' ';
	}

	cout << '\n';

	Array x = a1;  // copy constructor

	for (int i = 0; i < 5; i++) {
		cout << x.get(i) << ' ';
	}

	cout << '\n';

	Array y(a1);  // copy constructor
	Array z(a1);  // copy constructor

	Array b(5);
	b = a1;       // assignment operator

	return 0;
}