#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter a, b and c: " << endl;
	cin >> a >> b >> c;

	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	return 0;
}