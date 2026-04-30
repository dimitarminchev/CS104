#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Enter: a, b, c" << endl;

	cin >> a >> b >> c;
	float d = pow(b, 2) - 4 * a * c;

	if (d < 0){
		cout << "No real soliton" << endl;
	}
	if (d == 0){
		float x = ((-b) / 2 * a);
		cout << "D=" << d << " ; " << "x=" << x << endl;
	}

	if (d > 0){
		float x1 = ((-b) + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		cout << "D=" << d << " ; " << "x1=" << x1 << " ; " << "x2=" << x2 << endl;
	}
	return 0;
}