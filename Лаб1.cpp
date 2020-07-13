#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите значение x";
	int x;
	const float a = 1;
	cin >> x;
	double y;
	if (x < a)
		y = (1 / tan(sqrt(abs(x)))) + pow(x, 2);
	else
		if (x > a)
			y = log10(x * x + a * a);
		else
		{
			y = a * powf(sin(3.14 * x), 2);  
			cout << "3   y=" << y;
		}
	system("pause");
}
