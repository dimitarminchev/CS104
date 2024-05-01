//27.
#include <iostream>
using namespace std;

// Функция за генериране на числата на Фибоначи до дадено N
void generateFibonacci(int N) {
    int first = 0, second = 1;

    cout << "Числата от редицата на Фибоначи до " << N << ":" << endl;
    cout << first << " " << second << " ";

    for (int i = 2; i < N; ++i) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;
}

int main() {
    int N;

    cout << "Въведете броя на числата от редицата на Фибоначи, които искате да генерирате: ";
    cin >> N;

     if (N <= 0) {
        cout << "Броят трябва да бъде положително число." << endl;
        return 1;
    }

    generateFibonacci(N);

    return 0;
}
