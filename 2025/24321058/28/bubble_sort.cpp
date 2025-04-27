#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <climits>
using namespace std;

int main() {
	int n;
	cout << "n = ";
	cin >> n;

	int *arr = (int *)calloc(n, sizeof(int));

	// Initialize and print the array
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % INT_MAX;
		cout << arr[i] << " ";
	}
	cout << "\n";

	// Sort the array
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << "\n"

	return 0;
}
