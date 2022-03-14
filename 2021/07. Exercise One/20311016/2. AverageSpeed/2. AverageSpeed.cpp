#include <iostream>

int main()
{
    double t1, v1, t2, v2;

    std::cout << "Format: T1 V1 T2 V2" << std::endl;
    std::cin >> t1 >> v1 >> t2 >> v2;

    std::cout << ((v1 * t1) + (v2 * t2)) / (t1 + t2);
}