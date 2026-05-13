#include <iostream>
using namespace std;

double stepKN(int k, int n) {
	if (n == 1)
		return k;
	else
		return k * stepKN(k, n-1);
}

int main() {
	int n, k;
	cout << "Enter k,n: ";
	cin >> k >> n;

	cout << "k^n = " << stepKN(k, n) << endl;
	

	return 0;
}