#include <iostream>
using namespace std;

double fak(double n)
{
    if (n == 1) return 1;
    else return n * fak(n - 1);
}
int main()
{
    double C535 = fak(35) / (fak(5) * fak(35 - 5));
    double C642 = fak(42) / (fak(6) * fak(42 - 6));
    double C649 = fak(49) / (fak(6) * fak(49 - 6));

    cout << "5:35" << C535 << endl;
    cout << "6:42" << C642 << endl;
    cout << "6:49" << C649 << endl;
    return 0;
}
