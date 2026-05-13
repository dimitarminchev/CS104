#include <iostream>
using namespace std;

// Рекурсивна функция за намиране на факториел
double fak(int n)
{
    if (n <= 1) return 1;
    else return n * fak(n - 1);
}

// Главна функция на програмата
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cout << "n!=" << fak(n) << endl;
    return 0;
}
