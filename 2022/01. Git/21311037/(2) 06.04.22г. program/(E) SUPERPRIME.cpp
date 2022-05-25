#include <iostream>
using namespace std;
// Функция за проверка дали е просто
bool isPrime(int k)
{
	bool prime = true;

	for (int j = 2; j <= k - 1; j++)
		if (k % j == 0)
			prime = false;

	return prime;
}
// Главна фукция
int main()
{
	int a, b, br=0;
	cin >> a >> b;
	for (int k = a; k <= b; k++)

	{
		int k1 = k / 100;
		int k2 = k / 10;
		if (isPrime (k) && isPrime (k1) & isPrime (k2))
		{
			//cout << k << endl;
			br = br + 1;
		}

	}
	cout << br << endl;
	return 0;
}
