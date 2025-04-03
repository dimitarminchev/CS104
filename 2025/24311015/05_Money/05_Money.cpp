#include <iostream>
using namespace std;
int main()
{
    int m05, m10, m20, m50, m1, m2;

    cout << "m05 =";
    cin >> m05;

    cout << "m10 =";
    cin >> m10;

    cout << "m20 =";
    cin >> m20;

    cout << "m50 =";
    cin >> m50;

    cout << "m1 =";
    cin >> m1;

    cout << "m2 =";
    cin >> m2;

    float c = (m05 * 0.05) + (m10 * 0.1) + (m20 * 0.2) + (m50 * 0.5) + (m1 * 1) + (m2 * 2);
    cout << "total=" << c << endl;
    return 0;
}