#include <iostream>
using namespace std;

// Рекурсивна функция за намиране на Факториел
double fak(int n)
{
    if (n <= 1) return 1; // exit 
    else return n * fak(n - 1);
}

// Главна функция на програмата
int main()
{
    double C_5_35 = fak(35) / fak(5) * fak(35 - 5);

    cout << "Combinations = " << C_5_35 << endl;

    return 0;
}
