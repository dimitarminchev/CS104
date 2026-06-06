#include <iostream>
using namespace std;
int main()
{
	int A[3][3];
	int m;

	for (int x= 0; x<3; x++)
		for (int y = 0; y< 3; y++)
			cin >> A[x][y];

	cout << "Multiplication factor = ";
	cin >> m;

	for (int x = 0; x < 3; x++)
	{
		for (int y= 0; y < 3; y++)
			cout << A[x][y] * m << '\t';
		cout << '\n';
	}
}	