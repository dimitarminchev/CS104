// 6. Сумата на естествените числа до зададено число
#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "n=";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	cout << "sum=" << sum << " ";

	return 0;
}