#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Please enter n: ";
	cin >> n;

	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = i * fact;
	}

	cout << n << "!=" << fact << endl;
	return 0;
}