#include <iostream>                                            // Строки 1-4: Подключаем библиотеку и пространство имён, объявляем константы для последующего использования
constexpr double currencyRubUsd = 84;
constexpr double currencyRubEur = 93;
using namespace std;

int main() {                                                   // Строки 6-17: Объявляем функцию, переменные, и просим пользователя выбрать нужную операцию
	
	int choise, rub, usd, eur;

	cout << "Currency calculator" << endl;
	cout << "Select an operation: " << endl;
	cout << "1. USD - RUB" << endl;
	cout << "2. RUB - USD" << endl;
	cout << "3. EUR - RUB" << endl;
	cout << "4. RUB - EUR" << endl;

    cin >> choise;

	if (cin.fail()) {                                           // Строки 19-26: Проверка некорректного ввода

		cin.clear();
		cin.ignore(10000, '\n');

		cout << "Incorrect value" << endl;

		return 0;
	}

	else {                                                      // Строки 28-77: Перебираем все значения и выполняем конвертацию введенной переменной, после чего выводим результат

	switch (choise) {

	case 1: { 
		cout << "Enter USD: ";
		cin >> usd;

		double usdrub{ currencyRubUsd * usd };

		cout << "RUB: " << usdrub << endl;

		break;
	}
	case 2: {
		cout << "Enter RUB: ";
		cin >> rub;

		double rubusd{ rub / currencyRubUsd };

		cout << "USD: " << rubusd << endl;

		break;
	}
	case 3: {
		cout << "Enter EUR: ";
		cin >> eur;

		double eurrub{ eur * currencyRubEur };

		cout << "RUB: " << eurrub << endl;

		break;
	}
	case 4: {
		cout << "Enter RUB: ";
		cin >> rub;

		double rubeur{ rub / currencyRubEur };

		cout << "EUR: " << rubeur << endl;

		break;
	}
	default: {                                                   // Строки 72-76: Если ни одно значение не прошло, выводим ошибку
		cout << "Error! Wrong operation" << endl;
	}
		   break;
	}
	return 0;
}
}