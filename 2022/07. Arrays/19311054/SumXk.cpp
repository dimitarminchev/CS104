#include <iostream>
#include<cmath>
int main() {
    int x, n;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "n = ";
    std::cin >> n;

    int F[100];
    int sum = 0;

    for (int k = 1; k <= n; k++) {
        F[k] = pow(x, k);
        sum = sum + F[k];
    }

    for (int k = 1; k <= n; k++) {
        std::cout << F[k] << " ";
    }
    std::cout << "сборът е = " << sum << std::endl;
    return 0;
}