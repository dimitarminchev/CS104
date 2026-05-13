#include <iostream>
using namespace std;

// Рекурсивна функция за намиране на степен на двойката
int step2(int n)
{
    if (n < 2) return 2;
    else return 2 * step2(n - 1);
}

// Главна функция на програмата
int main()
{ 
    int n;
    cout << "n=";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "2^" << i << "=" << step2(i) << endl;
    }
    return 0;
}