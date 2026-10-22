#include <iostream>                                                  // Строки 1-2: подключаем нужную библиотеку и пространство имён
using namespace std;

int main() {                                                         // Строки 4-8: Объявляем главную функцию, объявляем переменную и просим пользователя ввести её

	int num;
	cout << "Enter number: ";
	cin >> num;

	if (cin.fail()) {                                                // Строки 10-17: Проверка некорректного ввода

		cin.clear();
		cin.ignore(10000, '\n');

		cout << "Incorrect value" << endl;

		return 0;
	}

	else {                                                           // Строки 19-46: Перебираем введенные числа и выводим соотвествующие выводы фраз

	switch (num) {

	case 1:
		cout << "The number of the dice is one" << endl;
		break;

	case 2:
		cout << "The number of the dice is two" << endl;
		break;

	case 3:
		cout << "The number of the dice is three" << endl;
		break;

	case 4:
		cout << "The number of the dice is four" << endl;
		break;

	case 5:
		cout << "The number of the dice is five" << endl;
		break;

	case 6:
		cout << "The number of the dice is six" << endl;
		break;

	default:                                                          // Строки 47-50: Если ни одно число не подошло, выводим соотвествующую фразу
		cout << "Incorrect number" << endl;
		break;
	}

	return 0;
}
}