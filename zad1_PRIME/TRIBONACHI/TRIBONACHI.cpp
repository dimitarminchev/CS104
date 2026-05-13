#include <iostream>
using namespace std;
bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}
int main() {
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; ++i) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	return 0;
}