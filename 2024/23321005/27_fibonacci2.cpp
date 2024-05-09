// Числата от редицата на Фибоначи
#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;
    cout << "Първите " << n << " числа на редицата на Фибоначи: ";

    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Въведи брой на числата на Фибоначи: ";
    cin >> n;

    fibonacci(n);

    return 0;
}