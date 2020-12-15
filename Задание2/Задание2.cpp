#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "rus");
	string a, b, c, x;
	cout << "Введите первую букву: " << endl;
	cin >> a;
	cout << "Введите вторую букву: " << endl;
	cin >> b;
	cout << "Введите третью букву: " << endl;
	cin >> c;
	x = a + b + c;
	cout << "Сумма равна: " << x << endl;
	system("pause");
}
