#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double coefficentA, coefficentB, coefficentC;

	cout << "Enter coefficent a: ";
	cin >> coefficentA;

	cout << "Enter coefficent b: ";
	cin >> coefficentB;

	cout << "Enter coefficent c: ";
	cin >> coefficentC;

	double D = coefficentB * coefficentB - 4 * coefficentA * coefficentC;

	if (coefficentB == 0  coefficentA == 0) {

		cout << "Incorrect coefficent!" << endl;

		return 0;
	   }

        else if(D < 0) {

		double i{ sqrt(-D) };
		
		double complexx1{ coefficentA + (coefficentB * i) };
		double complexx2{ coefficentA - (coefficentB * i) };

		cout << "First complex number: " << complexx1 << endl;
		cout << "Second complex number: " << complexx2 << endl;

		return 0;
	}
	else {

		double sqrtD{ sqrt(D) };
		double x1{ (-coefficentB - sqrtD) / 2 * coefficentA };
		double x2{ (-coefficentB + sqrtD) / 2 * coefficentA };

		cout << "First number: " << x1 << endl;
		cout << "Second number: " << x2 << endl;
		
		return 0;
	}

	return 0;
}