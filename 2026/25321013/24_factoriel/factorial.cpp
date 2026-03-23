#include<iostream>
using namespace std;

int findFactorial(int num)
{
	if (num == 1) return 1;
	return num * findFactorial(num - 1);
}

int main()
{
	int x;
	cout << "x = ";
	cin >> x;

	int factorial = findFactorial(x);
	cout << factorial << endl;
	return 0;
} 
