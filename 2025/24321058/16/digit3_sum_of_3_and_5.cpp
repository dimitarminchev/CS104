#include <iostream>
using namespace std;

int main(void) {
	for (int k = 1000; k < 9999; k++) {
		int a, b, c, d;
		a = (k / 1000) % 10;
		b = (k / 100) % 10;
		c = (k / 10) % 10;
		d = (k / 1) % 10;

		if (a + b == c + d) cout << k << "\n";
	}
	return 0;
}
