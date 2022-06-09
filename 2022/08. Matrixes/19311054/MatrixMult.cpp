#include <iostream>
int main() {
    int A[3][3], B[3][3], C[3][3];
    std::cout << "A:" << std::endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            std::cin >> A[x][y];
        }
    }
    std::cout << "B:" << endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            std::cin >> B[x][y];
        }
    }
    std::cout << "Умножение на матрицата:" << std::endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            C[x][y] = A[x][0] * B[0][y] + A[x][1] * B[1][y] + A[x][2] * B[2][y];
            std::cout << C[x][y] << '\t';
        }
        std::cout << '\n';
    }
    return 0;
}