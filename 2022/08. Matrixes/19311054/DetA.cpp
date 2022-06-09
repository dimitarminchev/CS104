#include <iostream>
int main() {
    int A[3][3];
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            std::cin >> A[x][y];
        }
    }

    int detA = A[0][0] * A[1][1] * A[2][2] +
               A[0][1] * A[1][2] * A[2][0] +
               A[0][2] * A[1][0] * A[2][1] -
               A[2][0] * A[1][1] * A[0][2] -
               A[2][1] * A[1][2] * A[0][0] -
               A[2][2] * A[1][0] * A[0][1];
    std::cout << "det.A = " << detA << std::endl;
    return 0;
}