#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double a, b;
	int n;
	double sum{ 0 };

	cout << "Enter the left interval: ";
	cin >> a;

	cout << "Enter the right interval: ";
	cin >> b;

	if (cin.fail()) {

		cin.clear();
		cin.ignore(10000);
		cout << "Error! Enter another interval" << endl;

		return 0;
	}

	else if (a >= b) {

		cout << "Error! Enter another interval" << endl;

		return 0;
	}

	cout << "Enter number of pieces: ";
	cin >> n;

	if (cin.fail()) {

		cin.clear();
		cin.ignore(10000);
		cout << "Error! Enter number of pieces" << endl;

		return 0;

	}

	else if (n <= 0) {

		cout << "Error! Enter number of pieces" << endl;
		
		return 0;
	}

	double h{ (b - a) / n };

	for (int i{0}; i < n; i++) {

		double x{ a + i * h };

		double y{ x * x };

		sum += y;

	}

	double integral{ h * sum };

	cout << "Integral: " << integral << endl;

	return 0;
}