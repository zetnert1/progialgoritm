#include <iostream>
using namespace std;

int main() {

	double value;

	cout << "Enter your value: ";
	cin >> value;

	if (value > 100) {

		cout << "Incorrect value";

		return 0;
	}

	else if(value >= 90) {

		cout << "You got A!" << endl;

		return 0;
	}

	else if (75 <= value && value >= 89) {

		cout << "You got B!";

		return 0;
	}

	else if (60 <= value && value >= 74) {

		cout << "You got C!";

		return 0;
	}

	else if (50 <= value && value >= 59) {

		cout << "You got D!";

		return 0;
	}

	else if (value < 50) {

		cout << "You got F!";

		return 0;
	}

	else {

		cout << "Incorrect value";

		return 0;
	}


	return 0;
}