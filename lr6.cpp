#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float minX, maxX, h, x;
	double y;
	cout << "Введіть minX: ";
	cin >> minX;
	cout << "Введіть maxX: ";
	cin >> maxX;
	cout << "Введіть h: ";
	cin >> h;
	x = minX;
	while (x <= maxX + h / 5)
	{
		y = pow(sin(x), 3) * x + 3 * pow(x, 2) + 3;
		cout << x << setw(4) << y << endl;
		x += h;
	}
}