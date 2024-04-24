#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int q, a, b, c;
	cout << "Input the dividend :" << endl;
	cin >> a;
	cout << "Input the divisor :" << endl;
	cin >> b;
	q = a / b;
	c = a % b;
	cout << "The quotient of the division is :" << q << endl;
	cout << "The remainder of the division is :" << c << endl;
	return 0;
	  
}

