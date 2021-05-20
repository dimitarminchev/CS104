#include <iostream>

double fak(int n)
{
    return n <= 1 ? 1 : n * fak(n - 1);
}

int main()
{
    double a = fak(35) / (fak(5) * fak(35 - 5));

    std::cout << a << std::endl;
}