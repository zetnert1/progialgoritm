#include <iostream>                                                 // Подключаем нужные библиотеки и пространство имён
#include <string>
#include <cctype>
using namespace std;

int main() {                                                        // Объявляем главную функцию

	string text, palindrome;                                        // Объявляем строковые переменные

	cout << "Enter your phrase: ";                                  // Просим пользователя ввести фразу
	getline(cin, text);                                             

	for (char c : text) {                                           // Перебираем все символы строки

		if (isalnum(c)) {                                           // Отбираем буквы и цифры

			palindrome += tolower(c);                               // Переводим символ в нижний регистр и добавляем в новую строку
		}
	}

	text = palindrome;                                              // Сохраняем обработанную строку в первую переменную, чтобы после реверса сравнить их

	for (int i{ 0 }; i < palindrome.length() / 2; i++) {            // Выполняем реверс строки

		char temp = palindrome[i];                                  // Временно сохраняем значение символа
		palindrome[i] = palindrome[palindrome.length() - i - 1];    // Меняем символы местами
		palindrome[palindrome.length() - i - 1] = temp;

	}

	if (palindrome == text) {                                       // Проверяем, является ли строка палиндромом

		cout << "Phrase is a palindrome" << endl;                   // Выводим соответствующую фразу

	}

	else {                                                          // Если строки не равны, выводим другую фразу

		cout << "Phrase is not a palindrome" << endl;

	}

	return 0;
}