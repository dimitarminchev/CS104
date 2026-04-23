#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Въвеждане на координатите на център и радиус на двата кръга
    float Ax, Ay, Ar, Bx, By, Br;
    cout << "Enter circle A (x,y,r):" << endl;
    cin >> Ax >> Ay >> Ar;
    cout << "Enter circle B (x,y,r):" << endl;
    cin >> Bx >> By >> Br;

    // Разстоянието между центровете на кръговете
    float d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

    // Колко пресечни точки имат двата кръга
    if (d > Ar + Br) cout << "Circles have NO common point of intercept" << endl;
    if (d == Ar + Br) cout << "Circles have ONE common point of intercept" << endl;
    if (d < Ar + Br) cout << "Circles have TWO common point of intercept" << endl;

    return 0;
}
