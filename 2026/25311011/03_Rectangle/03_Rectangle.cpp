#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "A = ";
	cin >> a;

	cout << "B = ";
	cin >> b;

	int p = 2 * (a + b);
	int s = a * b;

	cout << "P = " << p << endl;
	cout << "S = " << s << endl;
	
	return 0;
}