#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
	int x, n; 
	cin >> x >> n; 

	for (int k = 1; k <= n; k++)
	{
		float an = pow((1.0 + (1.0 / k)), k);
		cout << an << endl; 

	}
	return 0; 
}
