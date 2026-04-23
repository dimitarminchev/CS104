#include <iostream> // cout, cin
#include <cmath> // pow, sqrt
using namespace std;
int main()
{
	int a, b, c;
	cout << "Please enter: a b c" << endl;
	cin >> a >> b >> c;

	float d = pow(b, 2) - 4 * a * c;

	if (d < 0)
	{
		cout << "No Real Solution" << endl;
	}
	if (d = 0)
	{
		float x 
	}
	float x1 = ((-b) + sqrt(d)) / (2 * a);
	float x2 = ((-b) - sqrt(d)) / (2 * a);

	cout << "d=" << d << endl;
	cout << "x1" << x1 << endl;
	cout << "x2" << x2 << endl;

	if (d<0)

}