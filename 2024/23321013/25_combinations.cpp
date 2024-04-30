//25.
#include <iostream>
#include <iomanip> 
using namespace std;

double factorial(int n)
 {
    double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double binomialCoefficient(int n, int k) 
{
    if (k > n - k) 
        k = n - k;

    double c = 1;
    for (int i = 0; i < k; i++) {
        c = c * (n - i) / (i + 1);
    }
    return c;
}

int main() 
{
    cout << fixed << setprecision(0);

    double C535 = binomialCoefficient(35, 5);
    double C642 = binomialCoefficient(42, 6);
    double C649 = binomialCoefficient(49, 6);

    cout << "C(35,5) = " << C535 << endl;
    cout << "C(42,6) = " << C642 << endl;
    cout << "C(49,6) = " << C649 << endl;

    return 0;
}
