#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;

	for (n; n > 0; n /= 10) {
		cout << n % 10;
	}
	cout << '\n';

	return 0;
}
