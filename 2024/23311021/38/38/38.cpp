#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	int trib[100] = { 1, 1,2 };
	cin >> num;

	cout << "End the final number is:\n";
	for (int i = 3; i < num; i++)
	{
		trib[i] = trib[i - 2] + trib[i - 1] + trib[i-3];

	}
	for (int i = 0; i < num; i++)
	{

		cout << trib[i] << "\n";
	}
	return 0;
}