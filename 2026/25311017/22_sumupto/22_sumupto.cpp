#include <iostream>
using namespace std;	
int main()
{
	int sum = 0;
	int n;
	cout << "Enter the number of natural numbers to sum: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
	return 0;
}
