#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, n;
	cout << "x = ";
	cin >> x;
	cout << "n = ";
	cin >> n;

	double sum = 0;
	for (int k = 1; k <= n; k++)
	{
		double Ak = pow((-1), k) * pow(x, k);
		cout << Ak << endl;
		sum = sum + pow(x, k);
	}
	cout << "Sum = " << sum << endl;
	return 0;
}