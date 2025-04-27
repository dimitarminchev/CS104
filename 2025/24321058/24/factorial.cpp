#include <iostream>
using namespace std;

int fac(int n) {
	if (n == 1) return 1;
	else return n * fac(n - 1);
}

int main() {
	int n;
	cout << "n = ";
	cin >> n;
	cout << fac(n) << '\n';
	return 0;
}
