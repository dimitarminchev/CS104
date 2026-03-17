#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

long long combination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    cout << "C(5, 3) = " << combination(5, 3) << endl;
    cout << "C(6, 4) = " << combination(6, 4) << endl;
    cout << "C(6, 5) = " << combination(6, 5) << endl;

    return 0;
}