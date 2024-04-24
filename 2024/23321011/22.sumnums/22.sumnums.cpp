#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Please enter n: ";
	cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = i + sum;
	}
	
		cout << "The sum is: " << sum << endl;
	
		return 0;
}