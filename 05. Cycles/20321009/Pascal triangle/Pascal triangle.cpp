#include <iostream>
using namespace std;
int main()
{
    // Променливи
    int a, n = 1;
    
    // Въвеждане
    cout << "Enter triangle size: ";
    cin >> a;
    cout << endl;


    // Изчисления и отпечатване 
    for (int b = 0; b < a; b++)
    {
        for (int c = 1; c <= a - b; c++) cout << "  ";
        cout << "1   ";

        for (int d = 1; d <= b; d++)
        {
            n = n * (1 + b - d) / d;
            if (n <= 9) cout << n << "   ";
            else if (n >= 10) cout << n << "  ";
        }
        cout << endl;
    }

    return 0;
}