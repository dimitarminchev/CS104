#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int n,x;
	int sum = 0 ;
	cin >> x >> n;
	int f[100] = {0};

	for (int i = 0; i < n; i++)
	{
		f[i] = pow(x, i+1);
		sum = sum + f[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << f[i] << " \n";
	}
	cout << "Sum is " << sum;

	return 0;
}