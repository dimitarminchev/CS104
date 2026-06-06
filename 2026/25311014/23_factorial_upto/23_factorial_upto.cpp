#include <iostream>

int main()
{
    int fact = 1, n;

    std::cout << "Enter numbers amount: "; std::cin >> n;

    for (int i = 1; i <= n; i++) { fact *= i; }

    std::cout << fact;
}