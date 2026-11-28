#include <iostream>                                           // Подключаем нужные библиотеки, объявляем константу и пространство имён
#include <cmath>
constexpr double pi{ 3.14159 };
using namespace std;

double circleArea(double radius) {                            // Объявляем функцию для вычисления площади круга

	double circleArea = pi * radius * radius;                 // Вычисляем площадь круга

	return circleArea;                                        // Возвращаем значение площади круга
}

int main() {                                                  // Объявляем главную функцию

	double r;                                                 // Объявляем переменную для радиуса круга
	cout << "Enter radius: ";                                 // Просим пользователя ввести радиус круга
	cin >> r;                                                 

	double answer = circleArea(r);                            // Вызываем функцию и сохраняем результат вычисления

	cout << "Area circle is: " << answer << endl;             // Выводим площадь круга

	return 0;
}