#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <climits>
using namespace std;

#define MAX 500

int main() {
	int n;
	cout << "n = ";
	cin >> n;

	int *arr = (int *)calloc(n, sizeof(int));

	// Initialize the array with random values and print it
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % MAX;
		cout << arr[i] << " ";
	}
	cout << "\n";

	// Sort the array
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	// Print the array
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << "\n";

	return 0;
}
