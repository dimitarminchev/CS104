#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	double sum = 0;
	cout << "Enter x: ";
	cin >> x;

	cout << "Enter n: ";
	cin >> n;

	for (int k = 1; k <= n; k++)
	{
		sum = sum + pow(x, k);
	}
	cout << "SUM = " << sum << endl;
	return 0;
}