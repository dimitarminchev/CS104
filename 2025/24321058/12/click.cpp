#include <iostream>
using namespace std;

int main() {
	for (int n = 1; n < 100; n++) {
		if (n / 10 == 7 || n % 10 == 7 || n % 7 == 0) cout << "click ";
		else cout << n << " ";
	}
	cout << '\n';
	return 0;
}
