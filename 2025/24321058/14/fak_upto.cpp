#include <iostream>
#include <climits>
using namespace std;

int main(int argc, char *argv[]) {
	int prod, upto;

	prod = 1;
	cout << "n = ";
       	cin >> upto;
	for (int i = 1; i <= upto; i++) {
		if (prod > INT_MAX / i) {
			cout << "Overflow!\n";
			exit(1);
		}
		prod *= i;
	}
	cout << prod << "\n";
	return 0;
}
