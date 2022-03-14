// Цистерна 

#include <iostream>
using namespace std;
int main()
{
    // Променливи
    int a;
    cout << "Tank space = ";
    cin >> a;


    // Изчисления
    int obshto = a / (2 + 3);
    int ostava = a % (2 + 3);

    cout << obshto << " - buckets needed";

    switch (ostava)
    {
     case 1: cout << "+ 1 liter"; break;
     case 2: cout << " 1 x 2  liters"; break;
     case 3: cout << " 1 x 3 liters"; break;
     case 4: cout << " 2 x 2 liters"; break;
    }
    return 0;
}