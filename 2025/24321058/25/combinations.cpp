#include <iostream>
using namespace std;

double fac(int n) {
	double f = 1;
	for (int i = 2; i <= n; i++) {
		f *= i;
	}
	return f;
}

int main() {
	int n, k;
	double p;
	cout << "k = ";
	cin >> k;
	cout << "n = ";
	cin >> n;

	if (n <= k) {
		cout << "Invalid input!\n";
		exit(1);
	}

	p = (double)fac(n) / (fac(k) * fac(n - k));
	cout << fac(n) << " " << fac(k) << " " << fac(n - k) << '\n';

	cout << k << ":" << n << " - probablility is 1 out of " << p << '\n';

	return 0;
}
