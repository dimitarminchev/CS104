// Umnojenie na matrica s chislo
#include <iostream>
using namespace std;
int main()
{
	int A[3][3];

	for (int x = 0; x < 3; x++)
		for (int y = 0; y < 3; y++)
			cin >> A[x][y];
	int m;
	cout << "Multiply ny: ";
	cin >> m;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			A[x][y] = A[x][y] * m;
			cout << A[x][y] << '\t';
		}
		cout << '\n';
	}
	return 0;
}