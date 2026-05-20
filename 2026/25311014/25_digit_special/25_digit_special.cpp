#include <iostream>

int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        int vals[4]{}, n;

        for (int j = 0; j < sizeof(vals) / sizeof(int); j++)
        {
            n = j + 1;
            vals[j] = ((i % int(std::pow(10, n))) - (i % int(std::pow(10, n - 1)))) / int(std::pow(10, n - 1));
        }
        if (vals[2] + vals[3] == vals[0] + vals[1]) { std::cout << i << "\n"; }
    }
}