#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float Ax, Ay,Ar, Bx, By, Br;
    cout << "Enter circle A(x,y,r):" << endl;
    cin >> Ax >> Ay >> Ar;
    cout << "Enter circle b(x,y,r):" << endl;
    cin >> Bx >> By >> Br;

    float d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

    if (d > Ar + Br) cout << "Circle has NO common point of intercept" << endl;
    if (d == Ar + Br) cout << "Circle has ONE common point of intercept" << endl;
    if (d < Ar + Br) cout << "Circle has TWO common point of intercept" << endl;

     
    return 0;
}