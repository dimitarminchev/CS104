#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	
	int x;
	cout << "x=";
	cin >> x;

	int n;
	cout << "n=";
	cin >> n;

	float sum = 0;
	for (int k = 1; k <= n;k++)
	{

		sum += pow(x, k);

	}
	cout << sum << endl;
	return 0;
}