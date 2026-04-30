#include <iostream>

int main()
{
    int value, temp, sum = 0, a = 0, b = 1;

    std::cout << "Enter value: "; std::cin >> value;

    for (int i = 0; i <= value; i++)
    {
        sum = a + b;

        if(a == 0){ a++; }

        else
        {
            temp = b;
            b += a;
            a = temp;
        }
    }
    std::cout << sum;
}