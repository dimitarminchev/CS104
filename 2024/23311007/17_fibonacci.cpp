#include<iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;
    cout << "Enter the fibonacci end: ";
    cin >> n;

    cout << "Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}