#include <iostream>
using namespace std;

int main() 
{
    int m01, m2, m5, m10, m20, m50, m1;

    cout << "брой монети от 1ст =";
    cin >> m01;

    cout << "брой монети от 2ст =";
    cin >> m2;

    cout << "брой монети от 5ст =";
    cin >> m5;

    cout << "брой монети от 10ст =";
    cin >> m10;

    cout << "брой монети от 20ст =";
    cin >> m20;

    cout << "брой монети от 50ст =";
    cin >> m50;

    cout << "брой монети от 1лев =";
    cin >> m1;

    float sum = m01 * 0.01 + m2 * 0.02 + m5 * 0.05 + m10 * 0.1 + m20 * 0.2 + m50 * 0.5 + m1;
    float count = m01 + m2 + m10 + m50 + m1;

    cout << "сума: " << sum << endl;
    cout << "брой: " << count << endl;

    return 0;
}
