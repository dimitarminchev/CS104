#include <iostream>

using namespace std;

double Fak(int x)
{
    if (x <= 1) 
        return 1;
    else 
        return x * Fak(x - 1);
}

int main()
{
    double C_5_35 = Fak(35) / (Fak(5) * Fak(35 - 5));

    cout << C_5_35 << endl;

    return 0;
}