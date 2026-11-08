#include <iostream>
#include <random>
constexpr int SIZE{ 20 };
using namespace std;

int main() {

	int arr[SIZE]{};
	int numsb{ 0 };
	double summ{ 0 }, averageNum{ 0 };

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dis(0, 100);

	for (int i{0}; i < SIZE; i++) {

		arr[i] = dis(gen);

		summ += arr[i];
	}

	averageNum = summ / SIZE;

	for (int i{0}; i < SIZE; i++) {

		if (arr[i] > averageNum) {

			numsb++;
		}
	}

	cout << "Elements that are greater than the average number: " << numsb << endl;

	return 0;
}