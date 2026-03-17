#include <iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "enter x => " << endl;
	cin >> x;
	cout << "enter n => " << endl;
	cin >> n;

	float sum = 0;
	for (int k = 1; k <= n; k++)
	{
		sum = sum + pow(x, k);
		cout << sum << endl;
	}
	return 0;
}