#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 2, 2, -1, -1, -1, 3, 5, -2, -2, 4 };

	int counter = 0;
	int x;
	
	cout << "x = ";
	cin >> x;

	cout << "Array: ";

	for (int i = 0; i < 10; i++) {
		if (arr[i] == x) {
			counter++;
		}

		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Count: " << counter;
}