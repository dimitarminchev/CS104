#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	int n1 = 1;
	int n2 = 1;
	int n3 = 2;
	cin >> num;

	cout << "End the final number is: 0 1 1 " << " ";
	for (int i = 0; i < num; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		cout << n3 << " ";
	}

	return 0;
}

