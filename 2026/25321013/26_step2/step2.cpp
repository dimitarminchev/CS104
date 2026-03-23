#include<iostream>
using namespace std;

double getStep(int n)
{
	// If base case is n == 1 we get segmentation failure on num = 0
	if (n == 0) return 1;
	return 2 * getStep(n - 1);
}

int main()
{
	int num;
	cout << "num = ";
	cin >> num;

	double result = getStep(num);
	cout << result << endl;

	return 0;
} 
