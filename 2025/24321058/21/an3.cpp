#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	
	cout << "n = ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << pow((1 + 1 / (double)i), i) << "\n";
	}

	return 0;
}
