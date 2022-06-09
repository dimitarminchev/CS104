#include <iostream>
int main() {
    int sum = 0;
    for (int i = 100; i <= 999; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << i << " ";
            sum = sum + i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}