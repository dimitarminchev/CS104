#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter the sides of the rectangle: ";
	cin >> a >> b;
	cout << "Perimeter is: " << 2 * (a + b) << endl;
	cout << "Square is: " << a * b << endl;

	return 0;
}