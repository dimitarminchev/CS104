#include<iostream>
using namespace std;

int main()
{
	int side_a, side_b;
	cout << "a = ";
	cin >> side_a;

	cout << "b = ";
	cin >> side_b;
	
	int perimeter = 2 * (side_a + side_b);
	cout << "Perimeter: " << perimeter << endl;

	int area = side_a * side_b;
	cout << "Area: " << area << endl;

	return 0;
}
