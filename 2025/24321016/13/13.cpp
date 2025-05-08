#include <iostream>
#include <climits>
using namespace std;

int main() {

	int sum, upto;

	sum = 0;

	cout << "n = ";
	cin >> upto;


	for (int i = 1; i <= upto; i++) {
		if (sum > INT_MAX - i) {
			cout << "Overflow!\n";
			exit(1);
		}
		sum += i;
	}
	cout << sum << "\n";
	return 0;
}