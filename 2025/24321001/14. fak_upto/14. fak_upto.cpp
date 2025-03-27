#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	int fak = 1;
	for (int k = 1; k <= n; k++)
	{
		fak = fak * k;
	}

	cout << "fak = " << fak << endl;

	return 0;
}