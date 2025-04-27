#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
	int s = sqrt(n);
	for (int i = 2; i <= s; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 2; i < n; i++) {
		if (prime(i)) cout << i << "\n";
	}
	return 0;
}
