#include <iostream>                                                    // Подключаем нужные библиотеки и пространство имён
#include <cctype>
#include <string>
using namespace std;

int main() {                                                           // Объявляем главную функцию

	string text, text2, ntext, ntext2;                                 // Объявляем строковые переменные для исходных и обработанных фраз
	int isEqually{ 0 };                                                // Инициализируем переменную для подсчета совпадающих символов

	cout << "Enter first phrase: ";                                    // Просим пользователя ввести первую фразу
	getline(cin, text);                                     

	cout << "Enter second phrase: ";                                   // Просим пользователя ввести вторую фразу
	getline(cin, text2);                                    

	for (char c : text) {                                              // Перебираем символы первой фразы

		if (isalnum(c)) {                                              // Отбираем буквы и цифры

			ntext += tolower(c);                                       // Переводим символ в нижний регистр и добавляем в новую строку
		}
	}

	for (char c : text2) {                                             // Перебираем символы второй фразы

		if (isalnum(c)) {                                              // Отбираем буквы и цифры

			ntext2 += tolower(c);                                      // Переводим символ в нижний регистр и добавляем в новую строку
		}
	}

	for (char i : ntext) {                                             // Перебираем символы первой обработанной фразы

		for (char j : ntext2) {                                        // Перебираем символы второй обработанной фразы

			if (j == i) {                                              // Проверяем совпадение символов

				isEqually++;                                           // Подсчитываем количество совпадений
			}
		}

	}

	if (isEqually == ntext.length() && isEqually == ntext2.length()) { // Проверяем, равняется ли количество совпадений длине обеих строк

		cout << "Phrase is anagramm" << endl;                          // Выводим фразу, если строки являются анаграммами
	}

	else {                                                             // Если условие не выполняется, выводим другую фразу

		cout << "Phrase is not an anagramm" << endl;
	}

	return 0;
}