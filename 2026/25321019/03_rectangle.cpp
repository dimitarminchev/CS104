#include<iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "a=";
	cin >> a;

	cout << "b=";
	cin >> b;

	int area = a * b;
	int p = 2 * (a + b);

	cout << "Perimeter: " << p << endl; 
	cout << "Area: " << area << endl;
}
