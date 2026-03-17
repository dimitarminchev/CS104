#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int k = 1; k <= n; k++)
	{
		cout << (1.0 / pow(k,2)) << endl;
	}
	return 0;
}