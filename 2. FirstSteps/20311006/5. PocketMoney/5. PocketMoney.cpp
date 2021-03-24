#include <iostream>
using namespace std;
int main()
{
    int m01, m02, m05, m10, m20, m50, m1, m2;
    cout << "0.01=?, 0.02=?, 0.05=?, 0.10=?, 0.20=?, 0.50=?, 1.00=?, 2.00=?" << endl;
    cin >> m01 >> m02 >> m05 >> m10 >> m20 >> m50 >> m1 >> m2;
    int count = m01 + m02 + m05 + m10 + m20 + m50 + m1 + m2;
    float sum = m01 * 0.01 + m02 * 0.02 + m05 * 0.05 + m10 * 0.1 + m20 * 0.2 + m50 * 0.5 + m1 * 1 + m2 * 2;
    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}