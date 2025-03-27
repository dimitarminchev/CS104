#include <iostream>
#include <cmath>
using namespace std;

double fak(int n)
{
    if (n == 1)return 1;
    else return n * fak(n - 1);
}
int main()
{ 
    double C_5_35 = fak(35) / (fak(5) * (fak(35 - 5));
    double C_5_42 = fak(42) / (fak(6) * (fak(42 - 6));
    double C_5_49 = fak(49) / (fak(6) * (fak(49 - 6));

    cout << "5 ot 35=" << C_5_35 << endl;
    cout << "6 ot 42=" << C_5_42 << endl;
    cout << "6 ot 49=" << C_5_49 << endl;
    return 0;
}