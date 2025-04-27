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

	if (d < 0) {
		cout << "No real solutions" << '\n';
	}
	else if (d == 0) {
		x1 = x2 = -b / (2 * a);
		cout << "x1 = x2 = " << x1 << '\n';
	}
	else {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	
		cout << "x1 = " << x1 << '\n';
		cout << "x2 = " << x2 << '\n';
	}
	return 0;
}
