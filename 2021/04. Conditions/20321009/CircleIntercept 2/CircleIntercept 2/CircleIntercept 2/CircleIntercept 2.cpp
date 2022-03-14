// 07. CircleIntercept 2
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Променливи
    float ax, ay, ar, bx, by, br;

    cout << " [x y r]:" << endl;
    cin >> ax >> ay >> ar;
    cout << " [x y r]:" << endl;
    cin >> bx >> by >> br;

    
    // Разстояние между центровете
    float dx = ax - bx;
    float dy = ay - by;
    double c = sqrt(dx * dx + dy * dy);
   
    
    
    //Изчисления
    float a = (pow(ar, 2) - pow(br, 2) + pow(c, 2)) / (2 * c);
    float h = sqrt(pow(ar, 2) - pow(a, 2));

    float x = ax + a * (bx - ax) / c;
    float y = ay + a * (by - ay) / c;
    float cx = x + h * (by - ay) / c;
    float cy = y - h * (bx - ax) / c;
    float dx = x - h * (by - ay) / c;
    float dy = y + h * (bx - ax) / c;
    
    
    //Резултат
    if (ar + br < c) cout << "Zero interception points.";
    else if (ar + br == c)
    {
        cout << "One interception point:" << endl;
        cout << "x= " << x << "y= " << y << endl;
    }
    else if (ar + br > c)
    {
        cout << "Two interception points:" << endl;
        cout << "cx= " << cx << endl;
        cout << "cy= " << cy << endl;
        cout << "dx= " << dx << endl;
        cout << "dy= " << dy << endl;
    }

    return 0;
}