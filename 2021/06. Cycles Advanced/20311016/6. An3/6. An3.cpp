#include <iostream>
#include <cmath>

int main()
{
    int n;

    std::cout << "Upper Limit: ";
    std::cin >> n;

    for (int k = 1; k <= n; k++)
    {
        float ak = pow(1.0 + 1.0 / k, k);
        std::cout << ak << std::endl;
    }
}