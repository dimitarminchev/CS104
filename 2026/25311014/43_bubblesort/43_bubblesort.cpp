#include <iostream>

int main()
{
    int A[3][3];

    // input
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            std::cin >> A[x][y];

    // sorting (descending)
    for (int x1 = 0; x1 < 3; x1++)
        for (int x2 = 0; x2 < 3; x2++)
            for (int y1 = 0; y1 < 3; y1++)
                for (int y2 = 0; y2 < 3; y2++)
                    if (A[x1][y1] < A[x2][y2])
                        std::swap(A[x1][y1], A[x2][y2]);

    // output
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
            std::cout << A[x][y] << "\t";

        std::cout << "\n";
    }
}
