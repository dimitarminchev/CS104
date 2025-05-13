#include <iostream>
using namespace std;
int main()
{
	int A[10];

	for (int i = 0; i < 10; i++) cin >> A[i];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (A[i] < A[j])
			{
				int temp = A[i];
				A[i] = A[j];
				A[i] = temp;

			}
		}
	}

	for (int i = 0; i < 10; i++) cout << A[i] << " ";

	return 0;
}