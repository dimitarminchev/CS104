// Pool
#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    int D1, D2, D3;
    cout << "A=?, B=?, C=?" << endl;
    cin >> A >> B >> C;
    cout << "D1=?, D2=?, D3=?" << endl;
    cin >> D1 >> D2 >> D3;
    double h = (A * B * C) / (D1 + D2 + D3);
    cout << "h=" << h << endl;
    return 0;
}
