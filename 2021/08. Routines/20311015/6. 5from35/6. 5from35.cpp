#include <iostream>
using namespace std;

double fak(int n)
{
    if (n <= 1) return 1;
    else return n * fak(n - 1);
}

int main()
{
    int C_5_35 = fak(35) / (fak(5) * fak(35 - 5));
    cout << "1) 5/35 = 1 in " << C_5_35 << endl;

    int C_6_42 = fak(42) / (fak(6) * fak(42 - 6));
    cout << "2) 6/42 = 1 in " << C_6_42 << endl;

    int C_6_49 = fak(49) / (fak(6) * fak(49 - 6));
    cout << "3) 6/49 = 1 in " << C_6_49 << endl;

    return 0;
}