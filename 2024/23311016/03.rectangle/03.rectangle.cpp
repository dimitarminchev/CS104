#include <iostream>

using namespace std;

int main()
{
	int a, b, s, p;

	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	p = 2 * (a + b);
	s = a * b;

	cout << "P= " << p << endl << "S= " << s << endl;

	return 0;
}

