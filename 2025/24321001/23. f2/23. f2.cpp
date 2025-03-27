#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	// Въвеждаме x и n
	int x, n;
	cout << "x = ";
	cin >> x;

	cout << "n = ";
	cin >> n;

	// Смятане на резултата
	double sum = 0;

	for (int k = 1; k <= n; k++)
	{
		double f = pow(-1, k) * pow(x, k);
	    sum += f;
	}

	// Отпечатване на резултата
	cout << sum << endl;
	return 0;
}
