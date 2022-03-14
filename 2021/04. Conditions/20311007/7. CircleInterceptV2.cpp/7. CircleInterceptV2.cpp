// 07. Подобрена версия на намиране на пресечните точки на окръжностите-20311007
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    float Ax, Ay, Ar, Bx, By, Br;

    cout << "Enter first circle [x y r]:" << endl;
    cin >> Ax >> Ay >> Ar;
    cout << "Enter second circle [x y r]:" << endl;
    cin >> Bx >> By >> Br;

    // Разстояние между центровете
    float dx = Ax - Bx;
    float dy = Ay - By;
    double dist = sqrt(dx*dx+dy*dy);
    //Намираме a и h
    float a = (pow(Ar, 2) - pow(Br, 2) + pow(dist, 2)) / (2 * dist);
    float h = sqrt(pow(Ar, 2) - pow(a, 2));
    
    float x = Ax + a * (Bx - Ax) / dist;
    float y = Ay + a * (By - Ay) / dist;
    float Cx = x + h * (By - Ay) / dist;
    float Cy = y - h * (Bx - Ax) / dist;
    float Dx = x - h * (By - Ay) / dist;
    float Dy = y + h * (Bx - Ax) / dist;
 //Резултат
    if (Ar + Br < dist) cout << "No interception points.";
    else if (Ar + Br == dist) 
    {
        cout << "One interception point:" << endl;
        cout << "x= " << x << "y= "<< y << endl;
    } 
    else if (Ar + Br > dist) 
    {
        cout << "Two interception points:" << endl;
        cout << "Cx= " << Cx << endl;
        cout << "Cy= " << Cy << endl;
        cout << "Dx= " << Dx << endl;
        cout << "Dy= " << Dy << endl;
    }
   
    return 0;
}