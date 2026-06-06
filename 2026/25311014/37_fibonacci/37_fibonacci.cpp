#include <iostream>

int main()
{
    int value, a = 1, b = 1;

    std::cout << "Enter value: "; std::cin >> value;

    std::cout << a << " " << b << " ";

    for (int i = 0; i <= value; i++)
    {
        a = a + b; if (a >= value) { break; } else{std::cout << a << " "; }
        b = a + b; if (b >= value) { break; } else{std::cout << b << " "; }
    }
    return 0;
}