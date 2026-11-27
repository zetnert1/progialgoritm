#include <iostream>                                         // Подключаем нужные библиотеки, объявляем константы для размера матрицы и пространство имён
#include <random>
constexpr int ROWS{ 4 }, COLS{ 5 };
using namespace std;

int main() {                                                // Объявляем главную функцию

	int matrix[ROWS][COLS]{};                               // Объявляем матрицу
	int colSum{ 0 }, minCol{ 0 }, minSum{ 0 };              // Объявляем переменные для суммы столбца, номера столбца и минимальной суммы

	random_device rd;                                       // Создаём источник случайных данных
	mt19937 gen(rd());
	uniform_int_distribution<>dis(0, 100);                  // Задаём диапазон случайных чисел от 0 до 100

	for (int i{ 0 }; i < ROWS; i++) {                       // Заполняем матрицу рандомными числами

		for (int j{ 0 }; j < COLS; j++) {

			matrix[i][j] = dis(gen);
		}
	}

	for (int i{ 0 }; i < ROWS; i++) {                       // Вычисляем сумму элементов первого столбца

		minSum += matrix[i][0];

	}

	for (int j{ 0 }; j < COLS; j++) {                       // Перебираем столбцы матрицы

		colSum = 0;                                         // Обнуляем сумму перед подсчетом следующего столбца

		for (int i{ 0 }; i < ROWS; i++) {                   // Вычисляем сумму элементов текущего столбца

			colSum += matrix[i][j];
		}

		if (colSum < minSum) {                              // Проверяем, является ли сумма текущего столбца минимальной

			minSum = colSum;                                // Сохраняем минимальную сумму
			minCol = j;                                     // Сохраняем номер столбца с минимальной суммой
		}
	}


	cout << "Column with the minimum sum of the elemets: " << minCol << endl; 

	return 0;
}