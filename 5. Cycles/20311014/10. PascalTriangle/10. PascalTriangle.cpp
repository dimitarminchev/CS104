// 10. Отпечатайте триъгълника на Паскал

#include <iostream>
using namespace std;
int main()
{
    int size, n = 1;
    cout << "Enter triangle size: ";
    cin >> size;
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int row = 1; row <= size - i; row++) cout << "  ";
        cout << "1   ";

        for (int j = 1; j <= i; j++)
        {
            n = n * (1 + i - j) / j;
            if (n <= 9) cout << n << "   ";
            else if (n >= 10) cout << n << "  ";
        }
        cout << endl;
    }

    return 0;
}