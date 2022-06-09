#include <iostream>
int main() {
    int A[3][3];
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            std::cin >> A[x][y];
        }
    }
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            std::cout << A[x][y] << '\t';
        }
        std::cout << '\n';
    }
    return 0;
}