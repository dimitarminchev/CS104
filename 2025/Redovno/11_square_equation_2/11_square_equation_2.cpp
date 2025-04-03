// Подобрена версия на квадратното уравнение 
#include <iostream> // cout, cin
#include <cmath> // pow, sqrt
using namespace std;
int main()
{
	// Коефициенти на квадратното уравнение
	int a, b, c;

	// Ивеждаме подканващ текст и въвеждаме числата
	cout << "Please enter square equation coeficients: a b c" << endl;
	cin >> a >> b >> c;

	// Изисляваме дискриминанта
	float d = pow(b, 2) - (4 * a * c);

	// Решение
	if (d < 0)
	{
		cout << "d < 0" << endl << "No solution" << endl;
	}
	if (d == 0)
	{
		cout << "d=0, x1=x2, x=" << (-b) / (2 * a) << endl;
	}
	if (d > 0)
	{
		float x1 = ((-b) + sqrt(d)) / (2 * a);
		float x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "d=" << d << endl;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}

	return 0;
}
