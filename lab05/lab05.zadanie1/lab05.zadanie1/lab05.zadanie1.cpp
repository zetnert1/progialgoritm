#include <iostream>                                             // Подключаем нужные библиотеки и пространство имен (iomanip для форматирования вывода)
#include <iomanip>
using namespace std;

int main() {                                                    // Объявляем главную функцию

	double a, b, h;                                             // Объявляем дробные переменные: начало и конец интервала и шаг

	cout << "Enter the left interval: ";                        // Ввод переменных с клавиатуры
	cin >> a;

	cout << "Enter the right interval: ";
	cin >> b;

	cout << "Enter the step: ";
	cin >> h;

	if (a >= b || h <= 0) {                                     // Проверка правильности введенного интеревала
	      
		cout << "Error! Enter another interval" << endl;
	
		return 1;
	}

	cout << fixed << setprecision(4);                           // Устанавливаем количество запятых после нуля

	cout << "y = 7" << endl;

	for (double x = a; x <= b + 1e-9; x += h) {                 // Цикл for для табуляции значений линейной функции

		double y{ 7 };
		cout << setw(8) << x << "|" << setw(8) << y << endl;
	}


	return 0;
}