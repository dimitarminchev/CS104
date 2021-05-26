#include <iostream>
#include <cmath>

int main()
{
    double Ax, Ay, Ar, Bx, By, Br;

    std::cout << "Enter first x y r: " << std::endl;
    std::cin >> Ax >> Ay >> Ar;

    std::cout << "Enter second x y r: " << std::endl;
    std::cin >> Bx >> By >> Br;

    double d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));
    double a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
    double h = sqrt(pow(Ar, 2) - pow(a, 2));
    double interX = Ax + (a * (Bx - Ax)) / d;
    double interY = Ay + (a * (By - Ay)) / d;
    double Cx = interX + h * (By - Ay) / d;
    double Cy = interY - h * (Bx - Ax) / d;
    double Dx = interX - h * (By - Ay) / d;
    double Dy = interY + h * (Bx - Ax) / d;

    if (Ar + Br < d) std::cout << "No interception points." << std::endl;
    if (Ar + Br == d) std::cout << "One interception point: C:(" << interX << ";" << interY << ")" << std::endl;
    if (Ar + Br > d) std::cout << "Two interception point: C:(" << Cx << ";" << Cy << ") D:(" << Dx << ";" << Dy << ")" << std::endl;
}