#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "n=";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << pow(1.0 + (1.0 / i), i) << " ";
	}
}