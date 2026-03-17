#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a = 0, b = 1;

    while (a <= n) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }

    return 0;
}