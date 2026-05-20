#include <iostream>

int main()
{
    long double sum = 0;
    long double p = 1;

    int n, x;
    std::cout << "x = "; std::cin >> x;
    std::cout << "n = "; std::cin >> n;

    for (int k = 1; k <= n; k++) {
        p *= x;        // p = x^k
        sum += p;
    }
    std::cout << "sum = " << sum << "\n";
    return 0;
}