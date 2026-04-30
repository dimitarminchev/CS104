#include <iostream>

int main()
{
    for(int i = 1000; i < 10000; i++)
    { 
        int
            digit_1 = i - (i - (i % 10)),
            digit_2 = (i - (i - (i % 100)) - digit_1) / 10,
            digit_3 = (i - (i - (i % 1000)) - digit_2) / 100,
            digit_4 = i / 1000;

        if (digit_3 + digit_4 == digit_1 + digit_2) { std::cout << i << "\n"; }
    }
}