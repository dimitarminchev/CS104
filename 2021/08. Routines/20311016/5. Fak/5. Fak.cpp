#include <iostream>

int fak(int n)
{
    return n <= 1 ? 1 : n * fak(n - 1);
}

int main()
{
    std::cout << "5!=" << fak(5) << std::endl;
}