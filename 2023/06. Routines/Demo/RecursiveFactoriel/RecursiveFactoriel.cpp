#include <iostream>
using namespace std;

// Рекурсивна функция за намиране на факториел
double fak(int n)
{
    if (n == 1) return 1;
    else return n * fak(n - 1);
}

// Главна функция
int main()
{
    double C = fak(49) / (fak(6) * fak(49 - 6));
    cout << C << endl;
    return 0;
}