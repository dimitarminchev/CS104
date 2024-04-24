#include<iostream>
#include<cmath>
using namespace std;

double myFunc(int a, int b)
{
	if (a > 0)
	{
		return pow(a, b);
		myFunc(a,b-1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n , v;
	cin >> n >> v;
	int result = myFunc(n,v);
	cout << result;

}
