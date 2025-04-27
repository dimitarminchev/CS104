#include <iostream>
#include <climits>
using namespace std;

int main(int argc, char *argv[]) {
	int sum, upto;

	sum = 0;
	//upto = atoi(argv[1]);
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
