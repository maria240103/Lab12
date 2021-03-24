#include <iostream>

using namespace std;

struct Pos
{
	double X;
	double Y;
};
double SideLength(Pos start, Pos end);		// Length
int Triangle(float a, float b, float c);	// Type of trinagle

void main()
{
	setlocale(0, "rus");

	Pos coord[3];

	// ���������� ��� ������������
#pragma region Coordinats
	//// ������ ����
	for (int i = 0; i < 3; i++)
	{
		coord[i] = Pos();
		cout << "x" << i << " = "; cin >> coord[i].X;
		cout << "y" << i << " = "; cin >> coord[i].Y;
		cout << endl;
	}

	////�������������
	

	////��������������


	//�������������
	
#pragma endregion


	char trinagle[15];
	switch (Triangle(SideLength(coord[0], coord[1]), SideLength(coord[0], coord[2]), SideLength(coord[1], coord[2])))
	{
	case 0:
		strcpy_s(trinagle, "�������");
		break;
	case 1:
		strcpy_s(trinagle, "�������������");
		break;
	case 2:
		strcpy_s(trinagle, "��������������");
		break;
	case 3:
		strcpy_s(trinagle, "��������������");
		break;
	default:
		break;
	}

	cout << "����������� � ������� ������������ �������� " << trinagle << "" << endl;
	system("pause");
}

// Length
double SideLength(Pos start, Pos end)
{
	return sqrt(pow(end.X - start.X, 2) + pow(end.Y - start.Y, 2));
}

// Type of trinagle
int Triangle(float a, float b, float c)
{
	if(a == b && a == c)
		return 3;
	else if(a == b || a == c || b == c)
		return 2;
	else if((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2)))
		return 1;
	else
		return 0;

}
