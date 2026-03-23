#include<iostream>
using namespace std;

int main()
{
	const int n = 10;
	int A[n] = { 1, -1, 2, -2, 3, -3, 4, -4, 5, -5 };

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (A[j] > A[j + 1]) swap(A[j], A[j + 1]);
		}
	}

	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	return 0;
} 
