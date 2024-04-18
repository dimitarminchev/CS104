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

<<<<<<< HEAD
	cout << "The sum is: " << sum;
=======
	cout << "The sum is: " << sum << endl;
>>>>>>> ce1ec83750f1db71c32d6cbdbeded7868b7c8484
	return 0;
}