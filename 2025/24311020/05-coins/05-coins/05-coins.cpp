#include <iostream>
using namespace std;
int main()
{

    int m05, m10, m20, m50, m1, m2;

    cout << "Enter coins: 05, 10, 20, 50, 100 and 200" << endl;
    cin >> m05 >> m10 >> m20 >> m50 >> m1 >> m2;
    float sum = m05 * 0.05 + m10 * 0.1 + m20 * 0.2 + m50 * 0.5 + m1 * 1 + m2 * 2;

    cout << "sum=" << sum << endl;

    return 0;
}