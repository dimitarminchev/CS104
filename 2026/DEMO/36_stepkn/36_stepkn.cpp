#include <iostream>
using namespace std;

// Рекурсивна функция за намиране на степен на кое да е число
double stepkn(int k, int n)
{
    if (n == 1) return k;
    else return k * stepkn(k, n - 1);
}

// Главна функция на програмата
int main()
{
    int k, n;
    cout << "k="; 
    cin >> k;
    cout << "n="; 
    cin >> n;
    cout << "k^n=" << stepkn(k, n) << endl;
    return 0;
}
