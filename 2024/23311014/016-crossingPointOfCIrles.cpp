#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, r1 , r2;
    cout << "x1 y1 r1" << endl;
    cin >> x1 >> y1 >> r1;
    cout << "x2 y2 r2" << endl;
    cin >> x2 >> y2 >> r2; 

    // maths
    float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    float a = (r1 * r1 - r2 * r2 + d * d) / (2 * d);
    float h = sqrt(r1 * r1 - a * a);

    float x3 = x1 + a*(x2-x1)/d + h(y2-y1)/d;
    float y3= y1 + a*(y2-y1)/d + h(x2-x1)/d;
    float x4= x1 + a*(x2-x1)/d + h(y2-y1)/d;
    float y4= y1+a*(y2-y1)/d + h*(x2-x1)/d;

    //output

    cout << "First point: " << x3 << y3 << endl;
    cout << "y2" << x4 << y4 << endl;
    

    return 0;
}


