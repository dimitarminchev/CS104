#include <iostream>
using namespace std;

unsigned long long fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Въведете броя на числата от редицата на Фибоначи: ";
    cin >> n;

    cout << "Числата от редицата на Фибоначи са: ";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
