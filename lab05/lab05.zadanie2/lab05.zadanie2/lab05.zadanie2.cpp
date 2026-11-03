#include <iostream>
#include <iomanip>
constexpr double EPSILON{ 1e-9 };
using namespace std;

int main() {


	double a, b, h;

	cout << "Enter the left interval: ";
	cin >> a;

	cout << "Enter the right interval: ";
	cin >> b;

	cout << "Enter the step: ";
	cin >> h;

	if (a > b || h <= 0) {

		cout << "Error! Enter another interval or step" << endl;

		return 1;
	}

	bool isChange{ true };
	double previousY{ 0 };
	double changes{ 0 };


	cout << fixed << setprecision(4);

	cout << "============== y = x^3 - 3x^2 + 2x ====================" << endl;

	for (double x = a; x <= b + EPSILON; x += h) {

		double y{ (x * x * x) - (3 * x * x) + (2 * x) };
		
		cout << setw(8) << x << " | " << setw(8) << y << endl;

		if (isChange == true) {

			previousY = y;
			isChange = false;

		}

		else { 
			
			if ((previousY * y) < 0) {

				changes++;

			}
			previousY = y;
		}
		
	}

	cout << "Number of sign changes: " << changes << endl;

	return 0;
}
