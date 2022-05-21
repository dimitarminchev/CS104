// 6. 6 of 42
#include <iostream>
using namespace std;

double fak(int n)
{
    if (n <= 1) return 1; // exit 
    else return n * fak(n - 1);
}

int main()
{
    double C_6_42 = fak(42) / fak(6) * fak(42 - 6);

    cout << "Combinations = " << C_6_42 << endl;

    return 0;
}
