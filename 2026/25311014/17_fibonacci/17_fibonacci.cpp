/*#include <iostream>

int main()
{
    int value, temp, a = 1, b = 1;

    std::cout << "Enter value: "; std::cin >> value;
    std::cout << a << " " << b << " ";

    for (int i = 0; i <= value; i++)
    {
        a = a + b; if (a >= value) { break; } else{std::cout << a << " "; }
        b = a + b; if (b >= value) { break; } else{std::cout << b << " "; }
    }
    return 0;
}*/

#include <iostream>

int main()
{
    int a = 1, b = 1, c = 1, sum = 3, limit; std::cin >> limit;
    std::cout << a << " " << b << " " << c << " ";
    while (sum < limit)
    {
        sum = a + b + c;
       if (sum < limit ) std::cout << sum << " ";
        a = b;
        b = c;
        c = sum;
    }
    std::cout << "\n";
}