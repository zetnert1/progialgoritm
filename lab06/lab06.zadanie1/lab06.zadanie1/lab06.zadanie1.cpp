#include <iostream>                                            // Подключаем нужные библиотеки и пространство имен (random для рандомизации), объявляем константу для размера массива
#include <random>
using namespace std;
constexpr int SIZE{ 10 };

int main() {                                                   // Объявляем главную функцию

	int arr[SIZE]{};                                           // Объявляем массив
	int num{ 0 };                                              // Объявляем переменную для подсчета отрицательных чисел массива

	random_device rd;                                          // Создаём источник случайных данных
	mt19937 gen(rd());
	uniform_int_distribution<>dis(-30, 30);
	
	for (int i{ 0 }; i < SIZE; i++) {                          // Заполняем массив рандомными числами

		arr[i] = dis(gen);

		if (arr[i] < 0) {                                      // Отбираем отрицательные числа 

			num++;

		}

	}

	cout << "Number of unsigned elements: " << num << endl;   
	
	return 0;
}