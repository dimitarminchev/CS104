#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	cout << "n = ";
	cin >> n;
	int *fib = (int *)calloc(n, sizeof(int));
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < n; i++) {
		if (fib[i - 1] > INT_MAX - fib[i - 2]) {
			cout << "Reached INT_MAX" << '\n';
			n = i;
			break;
		}
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (int i = 0; i < n; i++) cout << fib[i] << "\n";

	return 0;
}
