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

    cout << "10!=" << fak(10) << endl;
    return 0;
}