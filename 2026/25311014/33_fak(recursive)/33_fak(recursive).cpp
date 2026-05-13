#include <iostream>

int fak(int n) { if (n <= 1) { return 1; } else { return n * fak(n - 1); } }

int main()
{
    int n;
    std::cout << "n= "; std::cin >> n;
    std::cout << fak(n) << "\n";
    return 0;
}