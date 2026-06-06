#include <iostream>

double stepkn(int k, int n) { if (n == 1) { return k; } else { return k * stepkn(k, n - 1); } }

int main()
{
    int k, n;

    std::cout << "k = "; std::cin >> k;
    std::cout << "n = "; std::cin >> n;

    std::cout << "k^n = " << stepkn(k, n) << "\n";

    return 0;
}