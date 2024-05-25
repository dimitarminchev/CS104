#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
	int n;
	cout << "Enter Number: ";
	cin >> n;

	int pro = 1;

	for (int i = 1; i <= n; i++)
	{
		pro = pro * i;
	}

	cout << pro << endl;

	return 0;
}