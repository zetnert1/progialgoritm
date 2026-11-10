#include <iostream>                                            // Подключаем нужные библиотеки и пространство имен (random для рандомизации), объявляем константу для размера массива
#include <random>
constexpr int SIZE{ 25 };
using namespace std;

int main() {                                                   // Объявляем главную функцию

	double num;                                                // Объявляем переменную для сравнения с парами сумм значений элементов массива 
	int numE{0};                                               // Инициализируем переменную для подсчета пар значений элементов массива, которые равны заданному числу
	cout << "Enter the number: ";
	cin >> num;

	if (cin.fail()) {                                          // Проверка неккоректного ввода

		cin.clear();
		cin.ignore(10000);
		cout << "Error! Enter another number";

		return 0;
	}

	int arr[SIZE]{};                                           // Объявляем массив

	random_device rd;                                          // Создаём источник случайных данных
	mt19937 gen(rd());
	uniform_int_distribution<>dis(0, 200);

	for (int i{ 0 }; i < SIZE; i++) {                          // Заполняем массив рандомными числами

		arr[i] = dis(gen);

	}

	for (int i{ 0 }; i < SIZE / 2; i++) {                      // Выполняем реверс для массива 

		int temp = arr[i];
		arr[i] = arr[SIZE - i - 1];
		arr[SIZE - i - 1] = temp;
	}

	int last = arr[SIZE - 1];                                 

	for (int i = SIZE - 1; i > 0; i--) {                       // Выполняем сдвиг на один элемент

		arr[i] = arr[i - 1];
	}

	arr[0] = last;

	for (int i{ 0 }; i < SIZE; i++) {                          // Отбираем количество сумм пар значений элементов массива, которые равны заданному числу

		for (int j{ i + 1 }; j < SIZE; j++) {

			if (arr[i] + arr[j] == num) {

				numE++;
			}
		}
	}
	cout << "Numbers bigger than summation of elemets of array: " << numE << endl;

	return 0;
}