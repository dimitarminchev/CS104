#include <iostream>
using namespace std;

int main()
{
	int n, fak = 1;
	cout << "Enter number: ";
	cin >> n;
	for (int k = 1; k <= n; k++)
	{
		fak *= k;
	}
	cout << fak << endl;
	return 0;
}