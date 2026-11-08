#include <iostream>
#include <random>
constexpr int SIZE{ 25 };
using namespace std;

int main() {

	double num;
	int numE{0};
	cout << "Enter the number: ";
	cin >> num;

	if (cin.fail()) {

		cin.clear();
		cin.ignore(10000);
		cout << "Error! Enter another number";

		return 0;
	}

	int arr[SIZE]{};

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dis(0, 200);

	for (int i{ 0 }; i < SIZE; i++) {

		arr[i] = dis(gen);

	}

	for (int i{ 0 }; i < SIZE / 2; i++) {

		int temp = arr[i];
		arr[i] = arr[SIZE - i - 1];
		arr[SIZE - i - 1] = temp;
	}

	int last = arr[SIZE - 1];

	for (int i = SIZE - 1; i > 0; i--) {

		arr[i] = arr[i - 1];
	}

	arr[0] = last;

	for (int i{ 0 }; i < SIZE; i++) {

		for (int j{ i + 1 }; j < SIZE; j++) {

			if (arr[i] + arr[j] == num) {

				numE++;
			}
		}
	}
	cout << "Numbers bigger than summation of elemets of array: " << numE << endl;

	return 0;
}