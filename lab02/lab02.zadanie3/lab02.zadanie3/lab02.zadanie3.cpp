#include <iostream>                                    // 1. В строках 1-3 вводим нужные библиотеки (cmath для математических операций, по типу cos, sin), а также используем пространство имен std
#include <cmath>
using namespace std;

int main() {                                           // 2. Объявляем главную функцию

	const double PI = 3.14159;                         // 3. Объявляем константу "PI" и присваиваем ей значения числа пи

	double degrees;                                    // 4. В строках 9-11: Объявляем переменную "градусы" с дробным значением, используем оператора вывода и ввода для этой переменной
	cout << "Enter degrees: ";
	cin >> degrees;

	if (cin.fail()) {                                  // 5. Строки 13-31: Введем проверку ввода буквенного значения, в случае которого вернем буфер к изначальному значению, иначе произведем нужые вычисления
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Error! Enter a number";
}
	else {

	double radians = degrees * PI / 180.0;             // 6. Объявляем новую переменную "радианы" и присваиваем ей соотвествующее значение

	double sinus = sin(radians);                       // 7. Строки 22-24: Объявляем нужные переменные для каждой тригонометрической функции и присваиваем им соответствующие значения
	double cosinus = cos(radians);
	double tangens = tan(radians);

	cout << "Radians: " << radians << endl;            // 8. Выводим результаты
	cout << "Sinus: " << sinus << endl;
	cout << "Cosinus: " << cosinus << endl;
	cout << "Tangens: " << tangens << endl;

}
	return 0;                                          // 9. Возвращаем функции нулевое значение
}
