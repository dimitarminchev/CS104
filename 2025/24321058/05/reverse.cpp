#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "Usage: reverse n : reverse the number n\n";
		exit(1);
	}

	int n;
	n = atoi(argv[1]);

	for (n; n > 0; n /= 10) {
		cout << n % 10;
	}

	cout << "\n";

	return 0;
}
