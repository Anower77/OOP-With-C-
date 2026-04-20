#include <iostream>
#include <cstring>
using namespace std;

class strtype {
	char *p;
	int len;

public:
	strtype(const char *s) {
		len = strlen(s);
		p = new char[len + 1];
		strcpy(p, s);
	}

	char *getstring() {
		return p;
	}

	int getlength() {
		return len;
	}

	~strtype() {
		delete[] p;
	}
};

int main() {
	strtype s("Hello World");

	cout << s.getstring() << endl;
	cout << s.getlength() << endl;

	return 0;
}