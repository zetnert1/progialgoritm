#include <iostream>                           // Строки 1-2: Вводим библиотеку и используем пространство имен
using namespace std;

int main() {                                  // Объявляем функцию 

	double value;                             // Строки 6-9: Объявляем переменную для ввода балла и просим пользователя ввести её

	cout << "Enter your value: ";             
	cin >> value;

	if (cin.fail()) {                         // Строки 11-20: Используем условных операторов if. Сначала для проверки неверного ввода, иначе программа будет работать дальше
		                                      
		cin.clear();
		cin.ignore(10000);
		cout << "Incorrect value"; 

        return 0;
	}
	
	else {                                    // Строки 20-70: Сначала через условного оператора if проверяем граничные значения, после переводим баллы в буквенную оценку

		if (value > 100 || value < 0) {       
			                                
			cout << "Incorrect value";

			return 0;
		}

		else if (value >= 90) {

			cout << "You got A!" << endl;

			return 0;
		}

		else if (75 <= value && value >= 89) {

			cout << "You got B!";

			return 0;
		}

		else if (60 <= value && value >= 74) {

			cout << "You got C!";

			return 0;
		}

		else if (50 <= value && value >= 59) {

			cout << "You got D!";

			return 0;
		}

		else if (value < 50) {

			cout << "You got F!";

			return 0;
		}

		else {                                  // При любом другом вводе переменной, неподходящей условиям, выводится ошибка

			cout << "Incorrect value";

			return 0;
		}
	}
}