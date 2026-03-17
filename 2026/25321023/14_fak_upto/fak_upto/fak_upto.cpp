#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long factorial = 1;

    for (long long i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << factorial << endl;
    return 0;
}