// Задание1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main(int nNumberofArgs, char* pszArgs[])
{
	setlocale(0, "ru");
	// Введите температуру в градусах Цельсия 
	int nNCelsius;
	cout << "Введите температуру по Цельсию: ";
	cin >> nNCelsius;
	// для приведенной формулы преобразования вычислим преобразующий множитель 
	int nNFactor;
	nNFactor = 212 - 32;
	// используем вычисленный множитель для преобразования градусов Цельсия в градусы Фаренгейта
	int nFahrenheit;
	nFahrenheit = nNFactor * nNCelsius / 100 + 32;
	// вывод результатов 
	cout << "Температура по Фаренгейту:" << nFahrenheit << endl;
	system("pause"); //задержка по нажатию
}