#include <iostream>
#include <cmath>

int main()
{
    int n;

    std::cout << "Upper Limit: ";
    std::cin >> n;

    for (int k = 1; k <= n; k++)
    {
        float ak = 1.0 / pow(k, 2);
        std::cout << ak << std::endl;
    }
}