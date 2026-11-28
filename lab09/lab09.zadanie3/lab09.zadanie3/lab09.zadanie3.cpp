#include <iostream>                                          // Подключаем нужные библиотеки, объявляем константу и пространство имён
#include <string>
#include <limits>
using namespace std;
constexpr int MAX{ 100 };

int readInt(string prompt);                                  // Объявляем функцию для ввода целого числа

void inputStudent(string names[], int ages[], string groups[], int index); // Объявляем функцию для ввода данных студента

void printStudent(const string names[], const int ages[], const string groups[], int index); // Объявляем функцию для вывода данных одного студента

void printStudents(const string names[], const int ages[], const string groups[], int count); // Объявляем функцию для вывода списка студентов

void printMenu();                                            // Объявляем функцию для вывода меню


int main() {                                                 // Объявляем главную функцию

    string names[MAX];                                       // Объявляем массивы для хранения данных студентов
    int ages[MAX];
    string groups[MAX];

    int count{ 0 };                                          // Инициализируем переменную для подсчета количества студентов
    int choice;                                              // Объявляем переменную для выбора пункта меню

    do {                                                     // Выполняем цикл до выбора выхода из программы
        printMenu();                                         // Вызываем функцию для вывода меню

        choice = readInt("Choose an option: ");              // Получаем выбор пользователя

        switch (choice) {                                    // Проверяем выбранный пункт меню

        case 1: {                                            // Добавляем нового студента
            if (count < MAX) {                               // Проверяем, есть ли свободное место в массиве
                inputStudent(names, ages, groups, count);    // Вызываем функцию для ввода данных студента
                count++;                                     // Увеличиваем количество студентов

                cout << "Student added!" << endl;            
            }
            else {                                           // Если список студентов заполнен
                cout << "Student list is full!" << endl;
            }
            break;                                           // Завершаем выполнение данного пункта меню

        }

        case 2: {                                            
            printStudents(names, ages, groups, count);       // Вызываем функцию для вывода студентов
            break;

        }

        case 0:                                              // Выполняем выход из программы
            cout << "Goodbye!" << endl;
            break;

        default:                                             // Если выбранного пункта меню не существует
            cout << "Invalid option!" << endl;
        }

    } while (choice != 0);                                   // Повторяем цикл, пока пользователь не выберет выход

    return 0;
}


int readInt(string prompt) {                                 // Объявляем функцию для проверки и ввода целого числа

    int value;                                               // Объявляем переменную для введенного значения

    while (true) {                                           

        cout << prompt;                                      // Выводим запрос пользователю

        if (cin >> value) {                                  // Проверяем корректность ввода числа
            cin.ignore(10000, '\n');                         // Очищаем остаток строки ввода
            return value;                                    // Возвращаем введенное значение
        }

        cout << "Enter a valid number!" << endl;             // Выводим сообщение о некорректном вводе

        cin.clear();                                         // Сбрасываем состояние потока ввода
        cin.ignore(10000, '\n');                             // Очищаем некорректные данные из потока ввода
    }
}

void inputStudent(string names[], int ages[], string groups[], int index) { // Объявляем функцию для ввода данных студента

    cout << "Enter name: ";                                  // Просим пользователя ввести имя студента
    getline(cin, names[index]);                              

    ages[index] = readInt("Enter age: ");                    // Вызываем функцию для ввода возраста

    while (ages[index] <= 0) {                               // Проверяем, является ли возраст положительным
        cout << "Age must be positive!" << endl;             // Выводим сообщение о некорректном возрасте
        ages[index] = readInt("Enter age: ");                // Повторно просим пользователя ввести возраст
    }

    cout << "Enter group: ";                                 // Просим пользователя ввести группу
    getline(cin, groups[index]);                             
}


void printStudent(const string names[], const int ages[], const string groups[], int index) { // Объявляем функцию для вывода данных одного студента

    cout << "Name: " << names[index] << endl;                 // Выводим имя студента
    cout << "Age: " << ages[index] << endl;                   // Выводим возраст студента
    cout << "Group: " << groups[index] << endl;               // Выводим группу студента

    cout << "-------------------" << endl;                    // Выводим разделительную линию
}


void printStudents(const string names[], const int ages[], const string groups[], int count) { // Объявляем функцию для вывода списка студентов

    if (count == 0) {                                        // Проверяем, пуст ли список студентов
        cout << "Student list is empty!" << endl;            // Выводим сообщение, если список пуст
        return;
    }

    for (int i = 0; i < count; i++) {                        // Перебираем всех студентов в списке

        cout << "\nStudent #" << i + 1 << endl;              // Выводим номер текущего студента

        printStudent(names, ages, groups, i);                // Вызываем функцию для вывода данных студента
    }
}

void printMenu() {                                           // Объявляем функцию для вывода меню

    cout << "\n===== STUDENT MANAGEMENT =====" << endl;      
    cout << "1. Add student" << endl;                        
    cout << "2. Show all students" << endl;                  
    cout << "0. Exit" << endl;                               
}