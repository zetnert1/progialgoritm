#include <iostream>                                                 // 1. В строках 1-3 вводим нужные библиотеки (iomanip для setprecision), а также используем пространство имен std
#include <iomanip>
using namespace std;

int main() {                                                        // 2. Объявляем главную функцию

	double x;                                                       // 3. В строках 7-9: Объявляем переменную с дробным значением, используем оператора вывода и ввода для этой переменной
	cout << "Enter your number: ";
	cin >> x;

	double squarex = x * x;                                         // 4. Объявляем вторую дробную переменную и присваиваем ей значение квадрата первой переменной
	cout << fixed << setprecision(2);                               // 5. Вводим лимит чисел после запятой
	cout << "Square of your number: " << squarex << endl;           // 6. Выводим результат

	return 0;                                                       // 7. Возвращаем функции нулевое значение
}