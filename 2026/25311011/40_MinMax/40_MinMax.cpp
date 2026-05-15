#include <iostream>
using namespace std;

int main() {
	int arr[10] = {2, 2, -1, -1, -1, 3, 5, -2, -2, 4};

	int min = 1000;
	int max = -1000;

	cout << "Array: ";

	for (int i = 0; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}

		if (arr[i] > max) {
			max = arr[i];
		}
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Min = " << min << endl;
	cout << "Max = " << max << endl;
}