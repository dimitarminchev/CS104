#include <iostream>
int main() {
    const int n = 5;
    int fak = 1, index = 1;
    do {
        fak = fak * index;
        index = index + 1;
    } while (index <= n);
    std::cout << n << "!=" << fak << std::endl;
    return 0;
}