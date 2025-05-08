#include <iostream>
using namespace std;

int main(void) {

	int sum = 0;

	for (int k = 105; k < 999; k += 15) sum += k;

	cout << sum << "\n";

	return 0;
}