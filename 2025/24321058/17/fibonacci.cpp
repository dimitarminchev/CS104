#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	int n;
	cout << "n = ";
	cin >> n;
	a = 1;
	b = 1;
	cout << a << "\n";
	cout << b << "\n";
	for (c = a + b; c < n; c = a + b) {
		cout << c << "\n";
		a = b;
		b = c;
	}
	return 0;
}
