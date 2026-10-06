#include <iostream>                                         // Строки 1-2: вводим библиотеку, используем пространство имён
using namespace std;
constexpr double EPSILON{ 1e-9 };                           // Вводим константу для сравнивания переменных с плавающей точкой


int main() {                                                // Объявляем функцию main
	
	double firstNumber, secondNumber;                       // Cтроки 8-14: Объявляем переменные и просим пользователя ввести их через консоль

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	if (fabs((firstNumber - secondNumber) < EPSILON)) {      // Строки 16-27: Объявляем функцию if для проверки равенства двух переменных, если они равны выводим одну фразу, иначе выводим другую фразу
		
		cout << "Numbers is equal" << endl;

		return 0;
	}

	else {
		cout << "Numbers is not equal" << endl;

		return 0;
	}

	return 0;                                                 // Возвращаем функции исходное значение
}