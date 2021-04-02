#include <iostream>
using namespace std;
int main()
{
    double t1, v1, t2, v2;
    cout << "time1= ";
    cin >> t1;
    cout << "velocity1= ";
    cin >> v1;
    cout << "time2= ";
    cin >> t2;
    cout << "velocity2= ";
    cin >> v2;
    int S1 = v1 * t1;
    int S2 = v2 * t2;
    cout << "AverageSpeed1=" << S1 << endl;
    cout << "AverageSpeed2=" << S2 << endl;

    return 0;
}