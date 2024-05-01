#include <iostream>

using namespace std;

int main()
{
	float r,s,p,v;
	cout << "r=";
	cin >> r;

	p = 2 * 3.14 * r;
	s = 3.14 * r * r;
	v = 4 * 3.14 * r * r;

	cout << "P= " << p << endl << "S= " << s << endl << "v= " << v << endl;
	return 0;
}

