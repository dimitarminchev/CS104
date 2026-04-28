#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int sum = 1;
	int n;

	cout << "Enter a number: " << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum *= i;
		
	}

	cout << endl << "sum=" << sum << endl;

	return 0;
}