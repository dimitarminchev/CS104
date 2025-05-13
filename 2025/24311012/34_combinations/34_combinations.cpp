﻿#include <iostream>
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
    // Намираме комбинаците от тотото
    double C_5_35 = fak(35) / (fak(5) * fak(35 - 5));
    double C_6_42 = fak(42) / (fak(6) * fak(42 - 6));
    double C_6_49 = fak(49) / (fak(6) * fak(49 - 6));
    // Отпечатваме резултата
    cout << "5:35 = " << C_5_35 << endl;
    cout << "6:42 = " << C_6_42 << endl;
    cout << "6:49 = " << C_6_49 << endl;
    return 0;
}