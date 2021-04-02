#include <iostream>
using namespace std;
int main()
{ // 2. Average Velocity
    float t1, t2, v1, v2, sp, t;
    cout << "T1=?, V1=?, T2=?, V2=?" << endl;
    cin >> t1 >> v1 >> t2 >> v2;
    t = t1 + t2;
    sp = ((v1 * t1) + (v2 * t2)) / t;
    cout << "Average speed: " << t << " km/h";
    return 0;
}