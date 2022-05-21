// 4. SqEq
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	// променливи тип float
	float a, b, c;

	// въвеждаме:
	cout << "a,b,c=?" << endl;
	cin >> a >> b >> c;

	// "хамалски" сметки на уравнението:
	float d = pow(b, 2) - 4 * a * c;
	float x1 = ((-b) + sqrt(d)) / (2 * a);
	float x2 = ((-b) - sqrt(d)) / (2 * a);

	// извеждане:
	cout << "d=" << d << endl;
	cout << "x1=" << x1 << endl;
	cout << "x2=" << x2 << endl;

	return 0;
}