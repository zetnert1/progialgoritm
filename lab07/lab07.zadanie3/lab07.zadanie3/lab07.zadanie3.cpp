#include <iostream>
#include <random>
#include <iomanip>
constexpr int ROWS{ 5 }, COLS{ 5 };
using namespace std;

int main() {

	int matrix[ROWS][COLS]{};

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dis(1, 100);

	for (int i{ 0 }; i < ROWS; i++) {

		for (int j{ 0 }; j < COLS; j++) {

			matrix[i][j] = dis(gen);
		}
	}

	cout << "======= Matrix before =======" << endl;

	for (int i{ 0 }; i < ROWS; i++) {

		for (int j{ 0 }; j < COLS; j++) {

			cout << setw(8) << matrix[i][j];
		}
		cout << endl;
	}

	for (int i{ 0 }; i < ROWS / 2; i++) {

		for (int j{ 0 }; j < COLS; j++) {

			int temp = matrix[i][j];
			matrix[i][j] = matrix[ROWS - i - 1][j];
			matrix[ROWS - i - 1][j] = temp;
		}
	}

	cout << "======= Matrix after =======" << endl;

	for (int i{ 0 }; i < ROWS; i++) {

		for (int j{ 0 }; j < COLS; j++) {

			cout << setw(8) << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}