#include <iostream>                                                                   // Подключаем нужные библиотеки и пространство имен(iomanip для форматирования вывода)
#include <iomanip>
constexpr double EPSILON{ 1e-9 };                                                     // Объявляем константу
using namespace std;

int main() {                                                                          // Объявляем главную функцию


	double a, b, h;                                                                   // Объявляем дробные переменные: начало и конец интервала и шаг

	cout << "Enter the left interval: ";
	cin >> a;

	cout << "Enter the right interval: ";
	cin >> b;

	cout << "Enter the step: ";
	cin >> h;

	if (a > b || h <= 0) {                                                             // Проверка правильности введенного интеревала

		cout << "Error! Enter another interval or step" << endl;

		return 1;
	}

	
	double previousY{ 0 };                                                             // Объявляем переменные для контроллирования изменения знака 
	double changes{ 0 }; 


	cout << fixed << setprecision(4);                                                  // Устанавливаем количество нулей после запятой

	cout << "============== y = x^3 - 3x^2 + 2x ====================" << endl;

	for (double x = a; x <= b + EPSILON; x += h) {                                     // Цикл for для табуляции значений линейной функции

		double y{ (x * x * x) - (3 * x * x) + (2 * x) };
		
		cout << setw(8) << x << " | " << setw(8) << y << endl;

		if (previousY * y < 0) {                                                       // Смотрим, меньше ли нуля произведение предыдущего и настоящего y, если да, увеличиваем изменение знака на 1

			changes++;
			

		}
		
		previousY = y;                                                                 // Запоминаем значение y

	}

	cout << "Number of sign changes: " << changes << endl;

	return 0;
}
