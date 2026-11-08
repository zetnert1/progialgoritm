#include <iostream>
#include <random>
using namespace std;
constexpr int SIZE{ 10 };

int main() {

	int arr[10]{};
	int num{ 0 };

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dis(-30, 30);
	
	for (int i{ 0 }; i < SIZE; i++) {

		arr[i] = dis(gen);

		if (arr[i] < 0) {

			num++;

		}

	}

	cout << "Number of unsigned elements: " << num << endl;
	
	return 0;
}