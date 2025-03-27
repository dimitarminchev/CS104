#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	int x;
	cout << "x = ";
	cin >> x;

	int sum = 0;

	for (int k = 1; k <= n; k++)
	{
		double Ak = pow(x, k);
		cout << Ak << endl;
	}

	return 0;
}
