// 29 matrix multiplocation.
#include<iostream>
using namespace std;
int main()
{
	int A[3][3], B[3][3], N;
	for (int x = 0; x < 3; x++) for (int y = 0; y < 3; y++) cin >> A[x][y];
	cin >> N;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			B[x][y] = A[x][y] * N;
			cout << B[x][y] << '\t';
		}
		cout << '\n';
	}
	return 0;
}
