#include <iostream>
using namespace std;
int main()
{
	int A[3][3],B[3][3],n;
	cout << "Please enetr matrix elements" << endl;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cin >> A[x][y];
		}
	}
	cout << "Please enetr multiplication number" << endl;
	cin >> n;
	cout << "Result:" << endl;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			B[x][y] = A[x][y] * n;
			cout << B[x][y] << '\t';
		}
		cout << '\n';
	}
	return 0;
}