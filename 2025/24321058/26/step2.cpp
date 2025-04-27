#include <iostream>
using namespace std;

int pow2(int n) {
	if (n == 1) return 2;
	return 2 * pow2(n - 1);
}

int main() {
	int n;
	cout << "n = ";
	cin >> n;
	for (int k = 1; k <= n; k++) {
		cout << "2^" << k << " = " << pow2(k) << "\n";
	}
	return 0;
}
