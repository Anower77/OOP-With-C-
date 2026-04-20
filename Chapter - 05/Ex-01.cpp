#include <iostream>
using namespace std;

class Samp {
	int x;
	public:
		Samp(int n) {
			x = n;
		};

		int getx() {
			return x;
		}
};


void mag(long &num, long order);

ostream& operator<<(ostream& out, Samp s) {
	out << s.getx();
	return out;
}


int main (){
	Samp s(12);
	cout << s << '\n';

	return 0;
}