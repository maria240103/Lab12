#include <iostream>

using namespace std;

const int len = 5;
int num[len];

void Input();
int Sum();

void main()
{
	setlocale(0, "rus");

	Input();
	cout << endl << "Нужная сумма равна: " << Sum() << endl << endl;

	system("pause");
}

void Input()
{
	for (int i = 0; i < len; i++)
	{
		cout << "Введите " << i + 1 << " число: ";
		cin >> num[i];
	}
}
int Sum()
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (num[i] < 0)
			break;

		sum += num[i];
	}

	return sum;
}