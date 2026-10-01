#include <iostream>
using namespace std;

int main() {
	
	double firstNumber, secondNumber;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	if (firstNumber == secondNumber) {
		
		cout << "Numbers is equal" << endl;

		return 0;
	}

	else {
		cout << "Numbers is not equal" << endl;

		return 0;
	}

	return 0;
}