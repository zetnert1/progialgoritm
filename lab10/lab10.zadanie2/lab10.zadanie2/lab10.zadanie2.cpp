#include <iostream>                                            // Подключаем нужные библиотеки для ввода, работы со строками и проверки символов
#include <string>
#include <cctype>
using namespace std;

void removeSpaces(string& str, string& after) {                // Объявляем функцию для удаления пробелов из строки

	for (char c : str) {                                       // Перебираем все символы строки

		if (!isspace(c)) {                                     // Проверяем, не является ли символ пробелом

			after += c;                                        // Добавляем символ в новую строку
		}
	}

	str = after;                                               // Присваиваем исходной строке значение новой строки
}

int main() {                                                   // Объявляем главную функцию

	string str, after;                                         // Объявляем строковые переменные
	cout << "Enter your phrase: ";                             // Просим пользователя ввести фразу
	getline(cin, str);                                         

	removeSpaces(str, after);                                  // Вызываем функцию для удаления пробелов

	cout << str;                                               // Выводим строку без пробелов

	return 0;
}