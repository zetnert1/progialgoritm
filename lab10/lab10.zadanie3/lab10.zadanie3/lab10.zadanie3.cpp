#include <iostream>                                                            // Подключаем нужную библиотеку для ввода и вывода, используем пространство имён
using namespace std;
void add(double a, double b, double c, double d, double& re, double& im);      // Объявляем функцию для сложения комплексных чисел
void subtract(double a, double b, double c, double d, double& re, double& im); // Объявляем функцию для вычитания комплексных чисел
void multiply(double a, double b, double c, double d, double& re, double& im); // Объявляем функцию для умножения комплексных чисел
bool divide(double a, double b, double c, double d, double& re, double& im);   // Объявляем функцию для деления комплексных чисел

int main() {                                                                   // Объявляем главную функцию

    double a, b;                                                               // Объявляем переменные для действительной и мнимой частей первого числа

    double c, d;                                                               // Объявляем переменные для действительной и мнимой частей второго числа

    double re, im;                                                             // Объявляем переменные для хранения результатов вычислений

    cout << "Enter real part of first number: ";                               // Просим пользователя ввести действительную часть первого числа
    cin >> a;                                                                  

    cout << "Enter imaginary part of first number: ";                          // Просим пользователя ввести мнимую часть первого числа
    cin >> b;                                                                  

    cout << "Enter real part of second number: ";                              // Просим пользователя ввести действительную часть второго числа
    cin >> c;                                                                  

    cout << "Enter imaginary part of second number: ";                         // Просим пользователя ввести мнимую часть второго числа
    cin >> d;                                                                  

    add(a, b, c, d, re, im);                                                   // Вызываем функцию для сложения комплексных чисел
    cout << "Addition: " << re << " + (" << im << ")i" << endl;                

    subtract(a, b, c, d, re, im);                                              // Вызываем функцию для вычитания комплексных чисел
    cout << "Subtraction: " << re << " + (" << im << ")i" << endl;             

    multiply(a, b, c, d, re, im);                                              // Вызываем функцию для умножения комплексных чисел
    cout << "Multiplication: " << re << " + (" << im << ")i" << endl;          


    if (divide(a, b, c, d, re, im)) {                                          // Проверяем, успешно ли выполнено деление

        cout << "Division: " << re << " + (" << im << ")i" << endl;            

    }
    else {                                                                     // Если деление выполнить невозможно

        cout << "Error!" << endl;                                              

    }

    cout << endl;                                                              // Выводим пустую строку

    return 0;
}


void add(double a, double b, double c, double d, double& re, double& im) {     // Объявляем функцию для сложения комплексных чисел

    re = a + c;                                                                // Складываем действительные части чисел
    im = b + d;                                                                // Складываем мнимые части чисел
}


void subtract(double a, double b, double c, double d, double& re, double& im) {// Объявляем функцию для вычитания комплексных чисел

    re = a - c;                                                                // Вычитаем действительные части чисел
    im = b - d;                                                                // Вычитаем мнимые части чисел
}


void multiply(double a, double b, double c, double d, double& re, double& im) {// Объявляем функцию для умножения комплексных чисел

    re = a * c - b * d;                                                        // Вычисляем действительную часть результата умножения
    im = a * d + b * c;                                                        // Вычисляем мнимую часть результата умножения
}


bool divide(double a, double b, double c, double d, double& re, double& im) { // Объявляем функцию для деления комплексных чисел

    double denominator = c * c + d * d;                                       // Вычисляем знаменатель для деления

    if (denominator == 0) {                                                   // Проверяем, равен ли знаменатель нулю
        return false;                                                         // Возвращаем false, если деление невозможно
    }

    re = (a * c + b * d) / denominator;                                       // Вычисляем действительную часть результата деления
    im = (b * c - a * d) / denominator;                                       // Вычисляем мнимую часть результата деления

    return true;                                                              // Возвращаем true, если деление выполнено успешно
}