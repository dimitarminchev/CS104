#include <iostream>
using namespace std;
int main()
{
	int x, n, A[100], sum = 0;
	cout << "x=";
	cin >> x;
	cout << "n=";
	cin >> n;

	for (int k = 0; k < n; k++)
	{


		A[k] = pow(x, k);
		sum = sum + A[k];
	}

	cout << "sum=" << sum << endl;


	return 0;
}
