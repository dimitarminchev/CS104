#include <iostream>

int main()
{
    int vals[5]{}, n, value; std::cin >> value;

    for (int i = 0; i < sizeof(vals) / sizeof(int); i++)
    {
        n = i + 1;
        vals[i] = ((value % int(std::pow(10, n))) - (value % int(std::pow(10, n - 1)))) / int(std::pow(10, n - 1));
    }
    std::cout << vals[4] * vals[2] * vals[0];
}