#include <iostream>

int main()
{
    int a = 1, b = 1, c = 1, limit; 
    
    std::cout << "Enter value: "; std::cin >> limit;

    std::cout << a << " " << b << " " << c << " ";

    for(int i = 0; i <= limit; i++)
    {
        a = a + b + c; if (a > limit) { break; } else{std::cout << a << " "; }
        b = a + b + c; if (b > limit) { break; } else{std::cout << b << " "; }
        c = a + b + c; if (c > limit) { break; } else{std::cout << c << " "; }
    }
    return 0;
}
