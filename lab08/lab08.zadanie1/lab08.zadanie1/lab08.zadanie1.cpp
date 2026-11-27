#include <iostream>                                         // Подключаем нужные библиотеки (string для строк и cctype для isalpha) и пространство имён
#include <string>
#include <cctype>
using namespace std;

int main() {                                                // Объявляем главную функцию

	string text;                                            // Объявляем строковую переменную
	int letters{};                                          // Инициализируем переменную для подсчета букв

	cout << "Enter your phrase: ";                          // Просим пользователя ввести фразу
	getline(cin, text);                                     

	for (char c : text) {                                   // Перебираем все символы строки

		if (isalpha(c)) {                                   // Проверяем, является ли символ буквой

			letters++;                                      // Подсчитываем количество букв

		}

	}
	cout << "Number of phrase: " << text.length() << endl;  // Выводим количество символов в строке
	cout << "Number of letters: " << letters << endl;       // Выводим количество букв в строке


	return 0;
}