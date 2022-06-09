#include <iostream>
int main() {
    int n, sum = 0;
    std::cout << "n = ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    std::cout << "сбора е = " << sum << " ";
    return 0;
}