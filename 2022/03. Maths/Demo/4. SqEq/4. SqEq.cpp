#include <iostream> // cout, cin
#include <cmath> // sqrt, pow
using namespace std;
int main()
{
	// Необходими промеливи
	float a, b, c;

	// Въвеждане на коефициентите на уравнението
	cout << "a,b,c=?" << endl;
	cin >> a >> b >> c;

	// Хамалски сметки на уравнението
	float d = pow(b,2) - 4 * a * c;
	float x1 = ((-b) + sqrt(d)) / (2 * a);
	float x2 = ((-b) - sqrt(d)) / (2 * a);

	// Извеждане на резилтата
	cout << "d=" << d << endl;
	cout << "x1=" << x1 << endl;
	cout << "x2=" << x2 << endl;

	return 0;
}
