#include <iostream>
#include <cmath>

using namespace std;

// Base Class 
class CalculatorBase {
	public:
		virtual double add() = 0;
		virtual double sub() = 0;
		virtual double mul() = 0;
		virtual double div() = 0;
};

// Generic Function 
template <typename T>
class Number {
	public:
		T value;

		Number(T v) {
			value = v;
		}

		Number operator^(Number obj) {
			return Number(pow(value, obj.value));
		}
};





// Scientific Calculator
class ScientificCalculator : public CalculatorBase {
	private:
		double arr[100];
		int n;

	public:
		ScientificCalculator(double a[], int size) {
			n = size;
			for (int i = 0; i < n; i++) {
				arr[i] = a[i];
			}
		}

		double add() {
			double sum = 0;
			for (int i = 0; i < n; i++) {
				sum += arr[i];
			}
			return sum;
		}

		double sub() {
			double result = arr[0];
			for (int i = 1; i <n; i++) {
				result -= arr[i];
			}
			return result;
		}

		double mul() {
			double result = 1;
			for (int i = 0; i < n; i++) {
				result *= arr[i];
			}
		}

		double div() {
			double result = arr[0];
			for (int i = 1; i < n; i++) {
				if (arr[i] == 0) {
					throw "bivide by zero";
					result /= arr[i];
				}
			}
			return result;
		}



		// Additional methods		
		double square (double x) {
			return x * x;
		}

		double cube (double x) {
			return x * x * x;
		}


		double sqroot (double x) {
			return sqrt(x);
		}

		double power(double x, double y) {
			return pow(x, y);
		}

};




// Lagecy Calculation 
class LegacyCalculator : public CalculatorBase {
	private:
		double a, b;
	public:
		LegacyCalculator(double x, double y) {
			a = x;
			b = y;
		}

		double add() {
			return a + b;
		}
		double sub() {
			return a - b;
		}
		double mul() {
			return a * b;
		}
		double div() {
			if (b == 0) {
				throw "divide by zero!";
			}
			return a / b;
		}
};








int main() {
	
	try {
		int mode;
		cout << "1. Scientific calcualator\n";
		cout << "2. Legacy calcualator\n\n\n";
		cout << " - Choose the Mode : ";
		cin >> mode;


		if (mode == 1) {
			int n; 
			cout << "1. Scientific calcualator\n";
			cout << "Enter count : ";
			cin >> n;

			double arr[100 + 5];
			for (int i = 0; i < n; i++) {
				cin >> arr[i];
			} 

			ScientificCalculator sc(arr, n);

			cout << "Add : " << sc.add() << '\n';
			cout << "Sub : " << sc.sub() << '\n';
			cout << "Mul : " << sc.mul() << '\n';
			cout << "Div : " << sc.div() << '\n';
			
			cout << "Spuare of first : " << sc.square(arr[0]) << '\n';
		}
		else if (mode == 2) {
			double a, b;
			cout << "2. Legacy calcualator\n";
			cout << "Enter two numbers : ";
			cin >> a >> b;


			LegacyCalculator lc(a, b);

			cout << "Add : " << lc.add() << '\n';
			cout << "Sub : " << lc.sub() << '\n';
			cout << "Mul : " << lc.mul() << '\n';
			cout << "Div : " << lc.div() << '\n';
			 
		}
		else {
			throw "Wrong input!";
		}

		Number<int> x(2), y(3);
		Number<int> z = x ^ y;

		cout << "2p3 = " << x.value << '\n';
	}
	catch (char* msg) {
		cout << "ERROR : " << msg << '\n';
	}


	return 0;
}
