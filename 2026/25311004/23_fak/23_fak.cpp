#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number: ";
	cin >> n;

	int fak = 1;
	for (int i = 1; i <= n; i++) {
		fak = fak * i;
	}

	cout << n << "! = " << fak << endl;
	return 0;
}