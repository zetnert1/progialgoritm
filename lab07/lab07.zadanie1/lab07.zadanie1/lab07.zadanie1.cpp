#include <iostream>                                         // Подключаем нужные библиотеки, объявляем константы для размера матрицы и пространство имён
#include <random>
constexpr int ROWS{ 3 }, COLS{ 5 };
using namespace std;

int main() {                                                // Объявляем главную функцию

	int matrix[ROWS][COLS]{};                               // Объявляем матрицу
	int pos{ 0 };                                           // Инициализируем переменную для подсчета положительных элементов матрицы

	random_device rd;                                       // Создаём источник случайных данных
	mt19937 gen(rd());
	uniform_int_distribution<>dis(-30, 30);                 // Задаём диапазон случайных чисел от -30 до 30

	for (int i{ 0 }; i < ROWS; i++) {                       // Заполняем матрицу рандомными числами

		for (int j{ 0 }; j < COLS; j++) {

			matrix[i][j] = dis(gen);
		}
	}

	for (int i{ 0 }; i < ROWS; i++) {                       // Отбираем положительные элементы матрицы

		for (int j{ 0 }; j < COLS; j++) {

			if (matrix[i][j] > 0) {                         // Проверяем, является ли элемент положительным

				pos++;                                      // Подсчитываем количество положительных элементов
			}
		}
	}

	cout << "Amount of positive elements: " << pos << endl; // Выводим количество положительных элементов

	return 0;
}