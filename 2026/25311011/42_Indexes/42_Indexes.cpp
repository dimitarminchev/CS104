#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 2, 2, -1, -1, -1, 3, 5, -2, -2, 4 };

	int flag = false;
	int x;

	cout << "x = ";
	cin >> x;

	cout << "Array: ";

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {
		if (arr[i] == x) {
			cout << "Index: " << i << endl;
			flag = true;
		}
	}
	cout << endl;

	if (!flag) {
		cout << "No such number!" << endl;
	}
}