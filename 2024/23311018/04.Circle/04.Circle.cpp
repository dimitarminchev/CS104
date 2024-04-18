#include<iostream>
using namespace std;
int main()
{
	float R;

	cout << "R=";
	cin >> R;

	float p = 2 * 3.14 * R;
	float s = 3.14 * R * R;
	float v = 4 * 3.14 * R * R;

	cout << "P=" << p << endl;
	cout << "S=" << s << endl;
	cout << "V=" << v << endl;

	return 0;
}