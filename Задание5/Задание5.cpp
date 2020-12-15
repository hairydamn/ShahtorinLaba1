#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	int a, b, c;
	cout << "Введите 3 числа: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > b && a > c)
	{
		cout << "Наибольшее число: " << a << endl;
	}
	else if (b > a && b > c)
	{
		cout << "Наибольшее число: " << b << endl;
	}
	else if (c > b && c > a)
	{
		cout << "Наибольшее число: " << c << endl;

	}
	system("pause");
}
