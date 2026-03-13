#include<iostream>
using namespace std;
int main()
{
	float r;

	cout << "Radius = ";
	cin >> r;

	float p = 2 * 3.14 * r;
	float s = 3.14 * r * r;
	float v = 4.0 / 3.0 * 3.14 * r * r * r;

	cout << "perimeter=" << p << endl;
	cout << "Area " << s << endl;
	cout << "Volume" << v << endl; 
	return 0;
}