#include <iostream>
using namespace std;

// fibonacci2.cpp = Числата от редицата на Фибоначи

long long fib(int n) {
    if(n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "How many Fibonacci terms to print? ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}
