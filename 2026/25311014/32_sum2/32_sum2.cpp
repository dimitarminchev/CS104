#include <iostream>
#include <cmath>

int main()
{
    int x, n; double sum = 0;

    std::cout << "x = "; std::cin >> x;
    std::cout << "n = "; std::cin >> n;

    for(int k = 1; k <= n; k++) { double Ak = std::pow((-1), k) * std::pow(x, k); sum += Ak; }

    std::cout << sum;
}