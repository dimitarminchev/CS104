#include <iostream>
#include <cmath>
using namespace std;

int fak(int n)
{
	if (n == 1)	return 1;
	else return n * fak(n - 1);
}


int main()
{
	// Въвеждаме x
	int x;
	cout << "x = ";
	cin >> x;

	// Смятане на резултата
	double result = fak(x);

	// Отпечатване на резултата
	cout << "fak(x) = " << result << endl;
	return 0;
}
