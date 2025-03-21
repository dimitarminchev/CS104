//

#include <iostream>
using namespace std;
int main()

{
	int a ;
	double b;

	cout << "R=";
	cin >> a;
	b = 3.14;

	double c, d, e;

	c = 2 * b * (4 * a);
	d = b * a * a;
	e = 4 / 3 * b * a * a * a;


	cout << "P=" << c << endl;
	cout << "S=" << d << endl;
	cout << "V=" << e << endl;

	return 0;
}