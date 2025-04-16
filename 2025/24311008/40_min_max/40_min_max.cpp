
#include <iostream>
using namespace std; 
int main()
{
	int A[100], min = 1000, max = -1000;
	for (int i = 0;i < 10;i++)
	{
		cin >> A[i];
		if (A[i] > max) max = A[i];
		if (A[i] < min)min = A[i];

	}
	cout << "min=" << min << endl;
	cout << "max=" << max << endl;
	return 0;
}


