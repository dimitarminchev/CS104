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

    int deta = arr[0][0] * arr[1][1] * arr[2][2] +
        arr[0][1] * arr[1][2] * arr[2][0] +
        arr[0][2] * arr[1][0] * arr[2][1] -
        arr[2][0] * arr[1][1] * arr[0][2] -
        arr[2][1] * arr[1][2] * arr[0][0] -
        arr[2][2] * arr[1][0] * arr[0][1];

    std::cout << "deta = " << deta << std::endl;
}