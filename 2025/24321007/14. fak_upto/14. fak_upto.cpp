#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "n=";
	cin >> n;


	int pro = 1;

	for (int k = 1; k <= n; k++)
	{
		pro = pro * k;
	}

	cout << "pro=" << pro << endl;

	return 0;
}