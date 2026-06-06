#include <iostream>

int main()
{
    int A[3][3], B[3][3];

    // Matrix A input
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            std::cin >> A[x][y];

    // Matrix B input
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            std::cin >> B[x][y];

    // Matrices sum output
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
            std::cout << A[x][y] + B[x][y] << "\t";

        std::cout << "\n";
    }
}
