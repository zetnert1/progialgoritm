#include <iostream>                                       // Строки 1-2: Подключаем библиотеку и пространство имён
using namespace std;
 
int main() {                                              // Строки 4-20: Объявляем функцию, переменные, и просим пользователя выбрать нужную операцию

	int num, litera; 

	cout << "Battleship" << endl;
	cout << "Select your move" << endl;

	cout << "1. A" << endl;
	cout << "2. B" << endl;
	cout << "3. C" << endl;
	cout << "4. D" << endl;
	cout << "5. E" << endl;
	cout << "6. F" << endl;
	cout << "7. G" << endl;
	cout << "8. H" << endl;
	cout << "9. I" << endl;
	cout << "10. J" << endl;

	cin >> litera;

	if (cin.fail()) {                                      // Строки 24-30: Проверка некорректного ввода первой переменной

		cin.clear();
		cin.ignore(10000);

		cout << "Incorrect value" << endl;
	}
	
	else {                                                  

		cout << "1. 1" << endl;
		cout << "2. 2" << endl;
		cout << "3. 3" << endl;
		cout << "4. 4" << endl;
		cout << "5. 5" << endl;
		cout << "6. 6" << endl;
		cout << "7. 7" << endl;
		cout << "8. 8" << endl;
		cout << "9. 9" << endl;
		cout << "10. 10" << endl;

		cin >> num;

		if (cin.fail()) {                                   // Строки 47-52: Проверка некорректного ввода второй переменной

			cin.clear();
			cin.ignore(10000);

			cout << "Incorrect value" << endl;

		}

		else {                                              // Строки 56-119: Перебираем все значения заданных координат кораблей, в случае попадания, выводим соответствующую фразу

			switch (litera) {

			case 2:

				switch (num) {

				case 8:

					cout << "You destroyed a ship!" << endl;

					break;

				default:                                     // В случае промаха выводим соотвествующую фразу

					cout << "You miss!" << endl;

					break;
				}
				break;

			case 4:

				switch (num) {

				case 3:

					cout << "You destroyed a ship!" << endl;

					break;

				default:

					cout << "You miss!" << endl;
					break;
				}
				break;

			case 10:

				switch (num) {

				case 10:

					cout << "You destroyed a ship!" << endl;

					break;

				default:

					cout << "You miss!" << endl;

					break;
				}
				break;

			default:

				cout << "You miss!" << endl;

				break;

			}
			return 0;
		}
	}
}