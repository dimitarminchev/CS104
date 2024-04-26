//28. Сортиране по метода на мехурчето
#include <iostream>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Last i elements are already in place
        for (int j = 0; j < size - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, size);

    bubbleSort(arr, size);

    std::cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
