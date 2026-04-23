#include <iostream>
using namespace std;


int main()
{
	int a, b;
	cout << "Enter side a of the rectangle: ";
	cin >> a;
	cout << "Enter side b of the rectangle: ";
	cin >> b;

	int area = a * b;
	cout << "The area of the rectangle is: " << area << endl;	
	int perimeter = 2 * (a + b);
	cout << "The perimeter of the rectangle is: " << perimeter << endl;

	return 0;

}