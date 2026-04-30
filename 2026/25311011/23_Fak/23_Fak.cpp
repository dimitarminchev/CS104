#include <iostream>
using namespace std;

int main()
{
	int n, fak = 1;
	cout << "Enter number: ";
	cin >> n;

	for (int j = 1; j <= n; j++)
	{
		fak *= j;
	}
	cout << fak << endl;

	return 0;
}