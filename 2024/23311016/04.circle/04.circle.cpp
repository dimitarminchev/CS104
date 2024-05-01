#include <iostream>

using namespace std;

int main()
{
	float r, s, p, v;
	float pi = 3.14;

	cout << "r: ";
	cin >> r;

	p = 2 * pi *r;
	s = pi * r * r;
	v = 4 * pi * r * r;

	cout << "P= " << p << endl << "S= " << s << endl << "V= " << v << endl;

	return 0;
}

