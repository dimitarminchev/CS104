#include <iostream>
#include <cmath>
using namespace std;

/// <summary>
/// Сума на x^k
/// </summary>
/// <param name="a">Параметър x</param>
/// <param name="b">Параметър n</param>
/// <returns>Сума</returns>
int f(int x = 1, int n = 1)
{

	int sum = 0;
	for (int k = 1; k <= n; k++)
	{
		sum = sum + pow(x, k);
	}
	return sum;
}

/// <summary>
/// Главна функция на програмата
/// </summary>
int main()
{
	cout << "The sum is: " << f(2, 3) << endl;
	
	return 0;
}

