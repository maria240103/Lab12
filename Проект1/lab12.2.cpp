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
	cout << endl << "������ ����� �����: " << Sum() << endl << endl;

	system("pause");
}

void Input()
{
	for (int i = 0; i < len; i++)
	{
		cout << "������� " << i + 1 << " �����: ";
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