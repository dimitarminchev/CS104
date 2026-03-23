#include<iostream>
using namespace std;

double getFactorial(int num)
{
	if (num == 1) return 1;
	return num * getFactorial(num - 1);
}

int main()
{
	cout << "5 of 35: " << getFactorial(35) / (getFactorial(5) * getFactorial(35 - 5)) << endl;
	cout << "6 of 42: " << getFactorial(42) / (getFactorial(6) * getFactorial(42 - 6)) << endl;
	cout << "6 of 49: " << getFactorial(49) / (getFactorial(6) * getFactorial(49 - 6)) << endl;
	return 0;
} 
