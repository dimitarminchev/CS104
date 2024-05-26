#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1, y1, x2, y2, r1, r2;
    

    cout << "x1 y1 r1" << endl;
    cin >> x1 >> y1 >> r1;
    cout << "x2 y2 r2" << endl;
    cin >> x2 >> y2 >> r2;

    float d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    float a = (pow(r1,2)-pow(r2,2)+pow(d,2)) / (2*d);
    float h = sqrt(pow(r1,2)-pow(a,2));
    float x3=x1+a*(x2-x1)/d+h*(y2-y1)/d;
    float y3=y1+a*(y2-y1)/d-h*(x2-x1)/d;
    float x4=x1+a*(x2-x1)/d-h*(y2-y1)/d;
    float y4=y1+a*(y2-y1)/d+h*(x2-x1)/d;

    cout << "First Point: "  << x3 << " " << y3 << endl;
    cout << "Second Point: " << x4 << " " << y4 << endl;

    return 0;
}
