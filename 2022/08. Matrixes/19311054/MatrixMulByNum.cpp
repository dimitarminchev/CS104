#include <iostream>
int main() {
    int A[3][3], N;
    cout << "Моля въведете числата [3x3] в матрица:" << std::endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            std::cin >> A[x][y];
        }
    }
    std::cout << "N = ";
    std::cin >> N;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            std::cout << A[x][y] * N << '\t';
        }
        std::cout << '\n';
    }
    return 0;
}