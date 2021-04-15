// 07. Подобрена версия на намиране на пресечните точки на окръжностите

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Създаване на променливите
    float Ax, Ay, Ar, Bx, By, Br;

    // Въвеждане на стойностите
    cout << "Enter first circle parameters\nX: ";
    cin >> Ax;
    cout << "Y: ";
    cin >> Ay;
    cout << "r: ";
    cin >> Ar;

    cout << "\nEnter second circle parameters\nX: ";
    cin >> Bx;
    cout << "Y: ";
    cin >> By;
    cout << "r: ";
    cin >> Br;

    // Извършване на изчисленията
    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

    float a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
    float h = sqrt(pow(Ar, 2) - pow(a, 2));
    float interX = Ax + a * (Bx - Ax) / d;
    float interY = Ay + a * (By - Ay) / d;    

    float Cx = interX + h * (By - Ay) / d;
    float Cy = interY - h * (Bx - Ax) / d;
    float Dx = interX - h * (By - Ay) / d;
    float Dy = interY + h * (Bx - Ax) / d;

    // Отпечатване на резултата
    if (Ar + Br < d) cout << "\nNo interception points. \n";
    else if (Ar + Br == d) cout << "\nOne interception point: C:(" << interX << ";" << interY << ") \n";
    else if (Ar + Br > d) cout << "\nTwo interception point: C:(" << Cx << ";"<< Cy << ") D:(" << Dx << ";" << Dy << ") \n";

    return 0;
}