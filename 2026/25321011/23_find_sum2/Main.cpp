
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, n;
	cout << "enter x => ";
	cin >> x;
	cout << "enter n => ";
	cin >> n;

	float sum = 0;
	for (int k = 1; k <= n; k++)
	{
		sum = sum + pow((-1), k) * pow(x, k);

	}
	cout << sum << endl;
	return 0;
}