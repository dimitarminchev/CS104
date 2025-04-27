#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double r, p, s, v;

	cin >> r;

	p = 2 * M_PI * r;
	s = M_PI * r * r;
	v = (4.0 / 3.0) * M_PI * r * r * r;

	cout << "Circle perimeter is " << p << '\n';
	cout << "Circle surface is " << s << '\n';
	cout << "Sphere volume is " << v << '\n';

	return 0;
}
