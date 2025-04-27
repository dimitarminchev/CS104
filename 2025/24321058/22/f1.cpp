#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, n, s;
	cout << "x = ";
	cin >> x;
	cout << "n = ";
	cin >> n;
	s = 0;

	for (int k = 1; k <= n; k++) {
		s += pow(x, k);
	}

	cout << s << "\n";

	return 0;
}
