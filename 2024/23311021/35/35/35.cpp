#include<iostream>
#include<cmath>
using namespace std;

double myFunc(int a)
{
	if (a > 0)
	{
		return pow(2, a);
		//myFunc(a - 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	double n;
	cin >> n;
	int result = myFunc(n);
	cout << result;

}
