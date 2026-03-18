#include<iostream>
using namespace std;

int main()
{
	const int n = 10;

	int A[10] = { 1, -1, 2, -2, 3, -3, 4, -4, 5, -5 };

	for (int k = 0; k < n; k++)
		cout << A[k] << " ";

	// bubble sort
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1 - i; j++)
			if (A[j] > A[j + 1])
				swap(A[j], A[j + 1]);

	cout << endl;
	for (int k = 0; k < n; k++)
		cout << A[k] << " ";

	return 0;
}