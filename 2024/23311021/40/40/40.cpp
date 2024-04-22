#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[100];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int min = 1000;
	int max = -1000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)min = a[i];
		if (a[i] > max)max = a[i];
	}
	
	cout << "Min is " << min << endl;
	cout << "Max is " << max;

	return 0;
}