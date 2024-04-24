#include <iostream>
using namespace std;
int main()
{
	double c, k;
	cout << "Input the temperature in Kelvin :" << endl;
	cin >> k;
     c = k - 273.15;
	cout << "The temperature in Kelvin :" << k << endl;
	cout << "The temperature in celsius :" << c << endl;
	return 0;
}

