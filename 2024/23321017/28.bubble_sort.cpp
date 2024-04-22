#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int sizeOfArray;
    cout << "Въведете размер на масива: ";
    cin >> sizeOfArray;
    int arr[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++) {
        cout << "Въведете стойност за елемент: " << i + 1 << ": ";
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Масивът преди сортирането: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Масивът след сортирането: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}