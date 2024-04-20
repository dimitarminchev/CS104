#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double n;
	cin >> n;
	//cout << ":" << endl;
	for (double i = 1; i <= n; i++)
	{
		double element = 1 / i;
		cout << element << " ";
	}

	

	return 0;
}

