#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	float d, x1, x2;
	cin >> a;
	cin >> b;
	cin >> c;

	d = (b * b) - (4 * a * c);
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	
	cout << "x1 = " << x1 << '\n';
	cout << "x2 = " << x2 << '\n';

	return 0;
}
