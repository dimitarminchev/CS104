#include <iostream>
using namespace std;
int main()
{
	// Целочислена променлива за сумата 
	int sum = 0;

	// Трицифрените
	for (int k = 100; k <= 999; k++)
	{
		// Кратни на 3 и 5
		if (k % 15 == 0)
		{
			sum = sum + k;
			// cout << k << " ";
		}
	}

	// Извеждане на получената сума
	cout << sum << endl;

    return 0;
}
