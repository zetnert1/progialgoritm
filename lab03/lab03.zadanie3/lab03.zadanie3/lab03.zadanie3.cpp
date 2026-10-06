#include <iostream>                                                                 // Строки 1-3: Вводим нужные библиотеки, используем пространство имен
#include <cmath>
using namespace std;
constexpr double EPSILON{ 1e-9 };                                                   // Объявляем константу для переменных с плавающей точкой и сравнения их с нулём

int main() {                                                                        // Объявляем главную функцию

	double coefficentA, coefficentB, coefficentC;                                   // Объявляем переменные и просим пользователя ввести

	cout << "Enter coefficent a: ";
	cin >> coefficentA;

	cout << "Enter coefficent b: ";
	cin >> coefficentB;

	cout << "Enter coefficent c: ";
	cin >> coefficentC;

	double D = coefficentB * coefficentB - 4 * coefficentA * coefficentC;           // Объявляем переменную для поиска дискриминанта

	if (cin.fail()) {                                                               // Обрабатываем ошибку некорректного ввода

		cin.clear();
		cin.ignore(10000);
		cout << "Incorrect coefficent";

		return 0;
	}
	
	else {

	if (fabs(coefficentA) < EPSILON) {                                              // Объявляем функцию if, сначала проверяем, что ни один из коэффицентов не меньше стремящегося к нулю значению

		cout << "Incorrect coefficent A!" << endl;
		         
		if (fabs(coefficentB) < EPSILON) {

			cout << "Incorrect coefficent B!" << endl;

		         if (fabs(coefficentC) < EPSILON)

					 cout << "Incorrect coefficent C!" << endl;

		return 0;

	}

        else if(D < EPSILON) {                                                       // Если дискриминант стремящегося к нулю значению, объявляем мнимую единицу, и расчитываем настоящую часть и мнимую часть

		double i{ sqrt(-D) };
		double realPart{ -coefficentB / (2 * coefficentA) };
		double imaginaryPart{ i / (2 * coefficentA) };

		cout << "Complex x1 = " << realPart << " + " << imaginaryPart << i << endl;  // Выводим полученные значения по формуле
		cout << "Complex x2 = " << realPart << " - " << imaginaryPart << i << endl;

		return 0;
	}


		else if (D == 0) {                                                           // При дискриминанте, равном нулю будет считаться один корень
		
			double x{ -coefficentB / (2 * coefficentA) };
			cout << "x: " << x << endl;
		
			return 0;
		}
	else {                                                                           // Иначе считаем корни и выводим их на консоль

		double sqrtD{ sqrt(D) };
		double x1{ (-coefficentB - sqrtD) / (2 * coefficentA) };
		double x2{ (-coefficentB + sqrtD) / (2 * coefficentA) };

		cout << "x1: " << x1 << endl;
		cout << "x2: " << x2 << endl;
		
		return 0;
	}

	return 0;                                                                        // Вовзращаем функции исходное значение
}
}