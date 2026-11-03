#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double a, b, h;

	cout << "Enter the left interval: ";
	cin >> a;

	cout << "Enter the right interval: ";
	cin >> b;

	cout << "Enter the step: ";
	cin >> h;

	if (a >= b || h <= 0) {
	      
		cout << "Error! Enter another interval" << endl;
	
		return 1;
	}

	cout << fixed << setprecision(4);

	cout << "y = 7" << endl;

	for (double x = a; x <= b + 1e-9; x += h) {

		double y{ 7 };
		cout << setw(8) << x << "|" << setw(8) << y << endl;
	}


	return 0;
}