#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c;
	cout << "Vuvedi a, b, c na uravnenieto :" << endl;
	cin >> a >> b >> c;
	float d = pow(b, 2) - 4 * a * c;
	if (d == 0)
	{
		float x = -b / (2 * a);
		cout << "Uravnenieto ima samo 1 koren x :" << x << endl;
	}
	if (d > 0)
	{
		float x1 = ((-b) + sqrt(d)) / (2 * a);
		float x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "Uravnenieto ima 2 korena x :" << " " << "x1 :" << x1 << " " << "x2 :" << x2 << endl;
	}
	if (d < 0)
	{
		cout << "Uravnenieto nqma realni koreni!";
	}
	return 0;
}