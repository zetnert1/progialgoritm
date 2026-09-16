#include <iostream>                                                                                         // 1. Вводим библиотеки, iomanip для установления лимита цифр после запятой в 15 строке, cmath для выполнения операции с квадратным корнем
#include <cmath>                                                    
#include <iomanip>
using namespace std;                                                                                        // 2. Используем пространство имён std, чтобы каждый раз не писать "std::"

int main()                                                                                                  // 3. Задаем функцию main
{
	double firstCathethus, secondCathethus;                                                                 // 4. Объявляем дробную переменную
	cout << "Enter first cathetus: ";                                                                       // 5. Выводим текст  
	cin >> firstCathethus;                                                                                  // 6. Пользователь вводит переменную с консоли

	if (cin.fail()) {                                                                                       // 7. Используем оператора if для выявления ошибки написания текста с консоли
		cin.clear();                                                                                        // 8. Строки 12-15: если было введено буквенное выражение, то программа напечатает ошибку, сбросит состояние ошибки и очистит буфер на 10000 символов
		cin.ignore(10000, '\n');
		cout << "Error, enter a number!" << endl;

		return 1;                                                                                           // 9. Возвращаем функции единичное значение 
	}

	cout << "Enter second cathetus: ";                                                                      // 10. Строки 20-29: тоже самое, что и 9-18 строки, но для другой переменной
	cin >> secondCathethus;
    
	if (cin.fail()) {                                                                                       
		cin.clear();                                                                                       
		cin.ignore(10000, '\n');
		cout << "Error, enter a number!" << endl;

		return 1;                                                                                           
	}

	cout << std::fixed << std::setprecision(2);                                                             // 11. Устанавливаем лимит символов после запятой для двух переменных

	if (firstCathethus <= 0 || secondCathethus <= 0) {                                                      // 12. Вводим ограничение на то, что ни одна из переменных не может быть меньше либо равно нулю, при ошибке выводится текст
		cout << "Error! Enter another cathetus" << endl;
		return 1;                                                                                           // 13. Возвращаем функции единичное значение 
	}

	else {                                                                                                  // 14. Если ошибок нет, то программа выполняет нахождение гипотенузы через теорему пифагора
		double hypotenuse = (firstCathethus * firstCathethus) + (secondCathethus * secondCathethus);        
		double resultSQRT = sqrt(hypotenuse);                                                               // 15. Программа извлекает квадратный корень из числа

		const double halftwo = 0.5;                                                                         // 16. Объявляем дробную константу для последующего вычисления площади
		double perimeter = firstCathethus + secondCathethus + resultSQRT;                                   // 17. Объявляем переменную и присваиваем ей значение формулы нахождения периметра
		double area = halftwo * (firstCathethus * secondCathethus);                                         // 18. Объявляем ещё одну переменную и присваиваем ей значение формулы нахождения площади
		cout << "Perimeter: " << perimeter << endl;                                                         // 19. Вывод значения площади и периметра
		cout << "Area: " << area << endl;
	}
	return 0;                                                                                               // 20. Возвращаем функции нулевое значение 
} 