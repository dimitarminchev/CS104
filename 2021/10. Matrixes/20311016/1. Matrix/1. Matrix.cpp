#include <iostream>

int main()
{
    const int COUNT = 3;
    int arr[COUNT][COUNT] = {};

    for (int x = 0; x < COUNT; x++)
    {
        for (int y = 0; y < COUNT; y++)
        {
            std::cin >> arr[x][y];
        }
    }

    for (int x = 0; x < COUNT; x++)
    {
        for (int y = 0; y < COUNT; y++)
        {
            std::cout << arr[x][y] << '\t';
        }

        std::cout << std::endl;
    }
}