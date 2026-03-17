#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Factoriel is not defined for negative numbers!" << endl;
        return 0;
    }

    cout << factorial(n) << endl;
    return 0;
}