#include <iostream>

long double C(int n, int k) {
    if (k > n - k)
        k = n - k;  // симметрия C(n, k) = C(n, n-k)

    long double result = 1;

    for (int i = 1; i <= k; i++) {
        result = result * (n - k + i) / i;
    }

    return result;
}

int main() {
    std::cout << "5 from 35 = " << C(35, 5) << "\n";
    std::cout << "6 from 42 = " << C(42, 6) << "\n";
    std::cout << "6 from 49 = " << C(49, 6) << "\n";
}
