#include <iostream>

int main()
{
    const int COUNT = 3;
    int n, arr[COUNT][COUNT] = {}, arrB[COUNT][COUNT] = {};

    std::cout << "Please enter matrix elements:" << std::endl;
    for (int x = 0; x < COUNT; x++)
    {
        for (int y = 0; y < COUNT; y++)
        {
            std::cin >> arr[x][y];
        }
    }

    std::cout << "Please enter multiplication number: " << std::endl;
    std::cin >> n;

    std::cout << "Result: " << std::endl;
    for (int x = 0; x < COUNT; x++)
    {
        for (int y = 0; y < COUNT; y++)
        {
            arrB[x][y] = arr[x][y] * n;
            std::cout << arrB[x][y] << '\t';
        }
        std::cout << std::endl;
    }
}