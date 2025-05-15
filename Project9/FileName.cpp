//ПРАКТИЧЕСКАЯ РАБОТА № 5 Базовые алгоритмические структуры. Цикл. Задание 2: программа возвращающая сумму первых четных чисел
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int counter = 0, sum = 2, stack = 0;
	cout << "Вычисление суммы четных положительных чисел." << endl;
	cout << "Введите количество суммируемых чисел и нажмите <Enter> ->";
	cin >> counter;
	sum = counter * (counter + 1);
	cout << "Сумма первых " << counter << " положительных четных чисел равна " << sum; 
	return 0;
}