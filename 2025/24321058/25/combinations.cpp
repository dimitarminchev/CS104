#include <iostream>
using namespace std;

int fac(int n) {
	if (n == 1) return 1;
	else return n * fac(n - 1);
}

int main() {
	int n, k;
	cout << "k = ";
	cin >> k;
	cout << "n = ";
	cin >> n;

	if (n <= k) {
		cout << "Invalid input!\n";
		exit(1);
	}

	cout << k << ":" << n << " - probalility is " << fac(n) / (fac(k) * fac(n - k));

	return 0;
}
