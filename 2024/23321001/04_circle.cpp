#include <iostream>
using namespace std;
    int main() 
{
    int p;
    double r;
    cout << "r = ?" << endl;
    cin >> r;
    p = 3.14;
    cout << "Perimeter = " << 2 * p * r << endl;
    cout << "S = " << p * r * r << endl;
    cout << "V = " << (4 * p * r * r * r) / 3 << endl;
    return 0;
}
