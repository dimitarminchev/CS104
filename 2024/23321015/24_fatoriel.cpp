#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "N = ";
    cin >> n;

    cout << "N!" << " = " << factorial(n) << endl;

    return 0;
}