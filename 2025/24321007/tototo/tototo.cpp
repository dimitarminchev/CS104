#include <iostream>
using namespace std;

double fak(int n)
{
    if (n == 1) return 1;
    else return n * fak(n - 1);
}

int main()
{
    double c_5_35 = fak(35) / (fak(5) * (fak(35 - 5)));
    double c_6_42 = fak(42) / (fak(6) * (fak(42 - 6)));
    double c_6_49 = fak(49) / (fak(6) * (fak(49 - 5)));

    cout << "5 ot 35 = " << c_5_35 << endl;
    cout << "6 ot 42 = " << c_6_42 << endl;
    cout << "6 ot 49 = " << c_6_49 << endl;
    
    return 0;

}