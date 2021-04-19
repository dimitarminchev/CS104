#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "n = ";
	cin >> n;

	cout << "Enter " << n << " numbers: \n";

	int* A = new int[n];
	int* B = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];

		B[i] = 0;

		B[A[i] - 1]++;
	}

	for (int i = 0; i < n; i++)
	{
		if (B[i] > 0)
		{
			cout << i + 1 << " => " << B[i] << endl;
		}
	}

	return 0;
}