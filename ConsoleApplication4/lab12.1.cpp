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

	// Координаты для треугольника
#pragma region Coordinats
	//// Ручной ввод
	/*for (int i = 0; i < 3; i++)
	{
		coord[i] = Pos();
		cout << "x1 = "; cin >> coord[i].X;
		cout << "y1 = "; cin >> coord[i].Y;
		cout << endl;
	}*/

	////Равосторонний
	//coord[0].X = 0;
	//coord[0].Y = 0;
	//coord[1].X = 0.5;
	//coord[1].Y = sqrt(3) / 2;
	//coord[2].X = 1;
	//coord[2].Y = 0;

	////Равнобедренный
	//coord[0].X = 0;
	//coord[0].Y = 0;
	//coord[1].X = 0;
	//coord[1].Y = 1;
	//coord[2].X = 1;
	//coord[2].Y = 0;

	//Прямоугольный
	coord[0].X = 0;
	coord[0].Y = 0;
	coord[1].X = 0;
	coord[1].Y = 16;
	coord[2].X = 25;
	coord[2].Y = 0;
#pragma endregion


	char trinagle[15];
	switch (Triangle(SideLength(coord[0], coord[1]), SideLength(coord[0], coord[2]), SideLength(coord[1], coord[2])))
	{
	case 0:
		strcpy_s(trinagle, "обычным");
		break;
	case 1:
		strcpy_s(trinagle, "прямоугольным");
		break;
	case 2:
		strcpy_s(trinagle, "равнобедренным");
		break;
	case 3:
		strcpy_s(trinagle, "равносторонним");
		break;
	default:
		break;
	}

	cout << "Треугольник с данными координатами является " << trinagle << "" << endl;
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
