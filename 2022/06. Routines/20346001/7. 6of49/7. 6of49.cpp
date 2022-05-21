// 7. 6of49
#include <iostream>
using namespace std;

double fak(int n)
{
    if (n <= 1) return 1; // exit 
    else return n * fak(n - 1);
}

int main()
{
    double C_6_49 = fak(49) / fak(6) * fak(49 - 6);

    cout << "Combinations = " << C_6_49 << endl;

    return 0;
}