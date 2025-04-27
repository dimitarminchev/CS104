#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
	if (argc != 3) {
		cout << "Usage: rectangle a b : find the perimeter of a/b rectangle\n";
		exit(1);
	}

	int a, b, p;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	p = 2 * (a + b);

	cout << p << "\n";

	return 0;
}
