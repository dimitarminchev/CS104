#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const int N = 1000;
	int F[N+1];
	float sum = 0;

	int n, x;
	cout << "x=";
	cin >> x;
	cout << "n=";
	cin >> n;

	for (int k = 1; k <= n; k++)
	{
		F[k] = pow(x, k);
		sum += F[k];
	}

	cout << "sum=" << sum << endl;
	return 0;
}