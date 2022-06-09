#include <iostream>
int main() {
    for (int k = 1; k <= 100; k++) {
        if (k % 7 == 0 || k % 10 == 7 || (k / 10) % 10 == 7 {
            std::cout << "Цъкни ";
        } else {
            std::cout << k << " ";
        }
    }
    return 0;
}