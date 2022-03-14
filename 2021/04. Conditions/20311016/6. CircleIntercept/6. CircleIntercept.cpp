#include <iostream>
#include <cmath>

int main()
{
    float Ax, Ay, Ar, Bx, By, Br;

    std::cout << "Enter first circle parameters\nX: ";
    std::cin >> Ax;
    std::cout << "Y: ";
    std::cin >> Ay;
    std::cout << "r: ";
    std::cin >> Ar;

    std::cout << "\nEnter second circle parameters\nX: ";
    std::cin >> Bx;
    std::cout << "Y: ";
    std::cin >> By;
    std::cout << "r: ";
    std::cin >> Br;

    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

    if (Ar + Br < d) std::cout << "\nNo interception points. \n";
    else if (Ar + Br == d) std::cout << "\nOne interception point. \n";
    else if (Ar + Br > d) std::cout << "\nTwo interception point. \n";
}