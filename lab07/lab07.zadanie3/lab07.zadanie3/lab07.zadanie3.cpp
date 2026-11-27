#include <iostream>                                             // Подключаем нужные библиотеки, объявляем константы для размера матрицы и пространство имён
#include <random>
#include <iomanip>
constexpr int ROWS{ 5 }, COLS{ 5 };
using namespace std;
 
int main() {                                                    // Объявляем главную функцию

	int matrix[ROWS][COLS]{};                                   // Объявляем матрицу

	random_device rd;                                           // Создаём источник случайных данных
	mt19937 gen(rd());
	uniform_int_distribution<>dis(1, 100);                      // Задаём диапазон случайных чисел от 1 до 100

	for (int i{ 0 }; i < ROWS; i++) {                           // Заполняем матрицу рандомными числами

		for (int j{ 0 }; j < COLS; j++) {

			matrix[i][j] = dis(gen);
		}
	}

	cout << "======= Matrix before =======" << endl;            // Выводим текст перед выводом исходной матрицы

	for (int i{ 0 }; i < ROWS; i++) {                           // Выводим исходную матрицу

		for (int j{ 0 }; j < COLS; j++) {

			cout << setw(8) << matrix[i][j];                    
		}
		cout << endl;
	}

	for (int i{ 0 }; i < ROWS / 2; i++) {                       // Выполняем реверс строк матрицы

		for (int j{ 0 }; j < COLS; j++) {                       

			int temp = matrix[i][j];                            // Временно сохраняем значение элемента
			matrix[i][j] = matrix[ROWS - i - 1][j];             // Меняем элементы местами
			matrix[ROWS - i - 1][j] = temp;
		}
	}

	cout << "======= Matrix after =======" << endl;             // Выводим текст перед выводом измененной матрицы

	for (int i{ 0 }; i < ROWS; i++) {                           // Выводим матрицу после реверса строк

		for (int j{ 0 }; j < COLS; j++) {

			cout << setw(8) << matrix[i][j];                    
		}
		cout << endl;
	}
	return 0;
}