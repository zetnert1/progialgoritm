#include <iostream>                                                // Подключаем нужные библиотеки и пространство имен (iomanip для форматирования вывода)
#include <iomanip>
using namespace std;
 
int main() {                                                       // Объявляем главную функцию

	double a, b;                                                   // Объвляем переменные, summ выступит аккамулятором для накопления значения
	int n;
	double sum{ 0 };

	cout << "Enter the left interval: ";                           // Ввод переменных
	cin >> a;

	cout << "Enter the right interval: ";                     
	cin >> b;

	if (cin.fail()) {                                              // Проверка неккоректного ввода

		cin.clear();
		cin.ignore(10000);
		cout << "Error! Enter another interval" << endl;

		return 0;
	}

	else if (a >= b) {                                             // Проверка правильности введенного интервала

		cout << "Error! Enter another interval" << endl;

		return 0;
	}

	cout << "Enter number of pieces: ";
	cin >> n;

	if (cin.fail()) {                                              // Проверка неккоректного ввода для количества кусочков 

		cin.clear();
		cin.ignore(10000);
		cout << "Error! Enter number of pieces" << endl;

		return 0;

	}

	else if (n <= 0) {                                             // Проверка правильности ввода для количества кусочков 
		cout << "Error! Enter number of pieces" << endl;
		
		return 0;
	}

	double h{ (b - a) / n };                                       // Считаем высоту прямоугольников 

	for (int i{0}; i < n; i++) {                                   // Вычисляем значение x, а после вычисляем значение y и накапливаем его значение в sum

		double x{ a + i * h };

		double y{ x * x };

		sum += y;

	}

	double integral{ h * sum };                                    // Вычисляем значение интеграла

	cout << "Integral: " << integral << endl;

	return 0;
}