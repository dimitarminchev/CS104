#include <iostream>

int main()
{
    const int COUNT = 3;
    int arr[COUNT][COUNT] = {}, arrB[COUNT][COUNT] = {}, arrC[COUNT][COUNT] = {};

    std::cout << "Please enter first matrix elements:" << std::endl;
    for (int x = 0; x < COUNT; x++)
    {
        for (int y = 0; y < COUNT; y++)
        {
            std::cin >> arr[x][y];
        }
    }

    std::cout << "Please enter second matrix elements:" << std::endl;
    for (int x = 0; x < COUNT; x++)
    {
        for (int y = 0; y < COUNT; y++)
        {
            std::cin >> arrB[x][y];
        }
    }

    std::cout << "Matrix Multiplication:" << std::endl;
    for (int x = 0; x < COUNT; x++)
    {
        for (int y = 0; y < COUNT; y++)
        {
            arrC[x][y] = arr[x][0] * arrB[0][y] + arr[x][1] * arrB[1][y] + arr[x][2] * arrB[2][y];

            std::cout << arrC[x][y] << '\t';
        }

        std::cout << std::endl;
    }
}