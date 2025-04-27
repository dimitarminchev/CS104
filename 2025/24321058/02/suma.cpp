#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 3) {
		cout << "Usage: suma a b : sum the numbers a and b\n";
		exit(0);
	}
	int a, b, c;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	c = a + b;

	cout << c << "\n";

	return 0;
}
