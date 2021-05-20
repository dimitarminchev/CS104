#include <iostream>

int main()
{
    int n, a = 0, b = 1, c = a + b;

    std::cout << "Upper Limit: ";
    std::cin >> n;

    std::cout << a << " " << b << " " << c << " ";

    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;

        if (c < n)
        {
            std::cout << c << " ";
        }
    }
}