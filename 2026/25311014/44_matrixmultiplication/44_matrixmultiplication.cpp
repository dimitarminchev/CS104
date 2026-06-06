#include <iostream>

int main()
{
    int A[3][3], m;

    // Matrix input
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            std::cin >> A[x][y];

    std::cout << "Enter multiplier: ";
    std::cin >> m;

    // Matrix output
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
            std::cout << A[x][y] * m << "\t";

        std::cout << "\n";
    }
}
