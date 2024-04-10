#include<iostream>
using namespace std;
int main()
{
    int m01, m02, m05 , m10 , m20 , m50, m1;

    cout << "m01 = ";
    cin >> m01;
    cout << "m02 = ";
    cin >> m02;
    cout << "m05 = ";
    cin >> m05;
    cout << "m10 = ";
    cin >> m10;
    cout << "m20 = ";
    cin >> m20;
    cout << "m50 = ";
    cin >> m50;
    cout << "m1 = ";
    cin >> m1;

    float count = m01 + m02 + m05 + m10 + m20 + m50 + m1;
    float sum = m01*0.01 + m02*0.02 + m05*0.05 + m10*0.10 + m20*0.20 + m50*0.50 + m1;

    cout << "sum=" << sum << endl;
    cout << "count=" << n << endl;
    return 0;
}
