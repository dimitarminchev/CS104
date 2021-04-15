// 07. Подобрена версия на намиране на пресечните точки на окръжностите

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Определяне на променливи
    float Ax, Ay, Ar, Bx, By, Br;

    // Въвеждане на стойностите
    cout << "Enter first circle parameters X Y R: " << endl;
    cin >> Ax >> Ay >> Ar;

    cout << "Enter second circle parameters X Y R: " << endl;
    cin >> Bx >> By >> Br;

    // Извършване на изчисленията
    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));
    float a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
    float h = sqrt(pow(Ar, 2) - pow(a, 2));
    float interX = Ax + (a * (Bx - Ax)) / d;
    float interY = Ay + (a * (By - Ay)) / d;
    float Cx = interX + h * (By - Ay) / d;
    float Cy = interY - h * (Bx - Ax) / d;
    float Dx = interX - h * (By - Ay) / d;
    float Dy = interY + h * (Bx - Ax) / d;

    // Резултати
    if (Ar + Br < d) cout << "No interception points." << endl;
    if (Ar + Br == d) cout << "One interception point: C:(" << interX << ";" << interY << ")" << endl;
    if (Ar + Br > d) cout << "Two interception point: C:(" << Cx << ";" << Cy << ") D:(" << Dx << ";" << Dy << ")" << endl;

    return 0;
}