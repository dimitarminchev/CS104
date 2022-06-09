#include <iostream>
#include<cmath>
int f(int x, int n) {
    int sum = 0;
    for (int k = 1; k <= n; k++) {
        sum += pow(x, k);
    }
    return sum;
}
int main() {
    int x, n;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "Сбора x^n е = " << f(x, n) << std::endl;
    return 0;
}