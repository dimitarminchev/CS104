#include <iostream>

bool isPrime(int x) 
{
    if (x < 2) { return false; }
    for (int i = 2; i * i <= x; i++) { if (x % i == 0) return false; }
    return true;
}

int main() {
    int m, n, count = 0; std::cin >> m >> n;

    for (int i = m; i <= n; i++) { if (isPrime(i)) count++; }

    if (count == 0) { std::cout << "No prime numbers in this range"; }
    else std::cout << count;
}
