#include <iostream>

int main()
{
    int n;

    std::cout << "Upper Limit: ";
    std::cin >> n;

    for (int k = 1; k <= n; k++)
    {
        float ak = 1.0 / k;
        std::cout << ak << std::endl;
    }
}