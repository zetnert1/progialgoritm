#include <iostream>
#include <random>
constexpr int ROWS{ 4 }, COLS{ 5 };
using namespace std;

int main() {

	int matrix[ROWS][COLS]{};
	int colSum{ 0 }, minCol{ 0 }, minSum{ 0 };

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dis(0, 100);

	for (int i{ 0 }; i < ROWS; i++) {

		for (int j{ 0 }; j < COLS; j++) {

			matrix[i][j] = dis(gen);
		}
	}

	for (int i{ 0 }; i < ROWS; i++) {

		minSum += matrix[i][0];
		
	}

	for (int j{ 0 }; j < COLS; j++) {

		colSum = 0;

		for (int i{ 0 }; i < ROWS; i++) {
			
			colSum += matrix[i][j];
		}

		if (colSum < minSum) {
			
			minSum = colSum;
			minCol = j;
		}
	}


	cout << "Column with the minimum sum of the elemets: " << minCol << endl;

	return 0;
}