// Квадратно уравнение
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

	// Изисляваме квадратното уравнение
	float d = pow(b, 2) - (4 * a * c);
	float x1 = ((-b) + sqrt(d)) / (2 * a);
	float x2 = ((-b) - sqrt(d)) / (2 * a);

	// Отпечатваме резултата
	cout << "d=" << d << endl;
	cout << "x1=" << x1 << endl;
	cout << "x2=" << x2 << endl;

	return 0;
}
