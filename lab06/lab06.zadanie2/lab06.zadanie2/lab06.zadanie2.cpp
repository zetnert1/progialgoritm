#include <iostream>                                                                       // Подключаем нужные библиотеки и пространство имен (random для рандомизации), объявляем константу для размера массива
#include <random>
constexpr int SIZE{ 20 };
using namespace std;

int main() {                                                                              // Объявляем главную функцию 

	int arr[SIZE]{};                                                                      // Объявляем массив
	int numsb{ 0 };                                                                       // Объявляем переменную для подсчета чисел массива, которые больше среднего значения всех элементов
	double summ{ 0 }, averageNum{ 0 };                                                    // Объявляем переменные для аккамулятора и среднего значения

	random_device rd;                                                                     // Создаём источник случайных данных
	mt19937 gen(rd());
	uniform_int_distribution<>dis(0, 100);

	for (int i{0}; i < SIZE; i++) {                                                       // Заполняем массив рандомными числами

		arr[i] = dis(gen);

		summ += arr[i];                                                                   // Накопление элементов массива
	}

	averageNum = summ / SIZE;                                                             // Вычисляем среднее значение

	for (int i{0}; i < SIZE; i++) {                                                       // Отбираем значения элементов массива, которые больше среднего значение всех значений элементов массива

		if (arr[i] > averageNum) {

			numsb++;                                                                      // Подсчитываем нужные значения
		}
	}

	cout << "Elements that are greater than the average number: " << numsb << endl;

	return 0;
}