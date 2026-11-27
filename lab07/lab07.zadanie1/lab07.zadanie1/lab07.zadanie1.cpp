#include <iostream>
#include <random>
constexpr int ROWS{ 3 }, COLS{ 5 };
using namespace std;

int main() {

	int matrix[ROWS][COLS]{};
	int pos{ 0 };

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dis(-30, 30);

	for (int i{ 0 }; i < ROWS; i++) {

		for (int j{ 0 }; j < COLS; j++) {

			matrix[i][j] = dis(gen);
		}
	}

	for (int i{ 0 }; i < ROWS; i++) {

		for (int j{ 0 }; j < COLS; j++) {

			if (matrix[i][j] > 0) {

				pos++;
			}
		}
	}

	cout << "Amount of positive elements: " << pos << endl;

	return 0;
}

