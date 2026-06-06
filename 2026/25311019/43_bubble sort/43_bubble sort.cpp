#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Първо четем броя на числата (напр. 5)

    int A[100]; // Масив с фиксиран максимален размер
    for (int i = 0; i < n; i++) cin >> A[i];

    // Същинското сортиране (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                // Ръчна размяна без никакви допълнителни библиотеки
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Извеждане на резултата
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    return 0;
}