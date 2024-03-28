#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;

	for (int k = 1; k <= n; k++)
	{
		float an = 1.0 / pow(k, 2);
		cout << an << endl; 
		return 0; 
	}
}