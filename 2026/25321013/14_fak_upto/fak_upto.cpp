#include<iostream>
using namespace std;

int main()
{
	int num, product = 1;
	cin >> num;

	for (int i = num; i > 0; i--)
	{
		product *= i;	
	}
	cout << product << endl;

	return 0;
}
