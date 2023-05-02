#include<iostream>
using namespace std;
int main()

{
	int a, b, c;

	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter c = ";
	cin >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "The highest number is " << max << endl;

	return 0;
}