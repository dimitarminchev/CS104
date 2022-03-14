// 10. Отпечатайте триъгълника на Паскал

#include <iostream>
using namespace std;
int main()
{
    int size, n = 1;
    cout << "Enter triangle size: ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row++)
    {
        for (int i = 1; i <= size - row; i++) cout << "  ";
        cout << "1   ";

        for (int j = 1; j <= row; j++)
        {
            n = n * (1 + row - j) / j;
            if (n <= 9) cout << n << "   ";
            else if (n >= 10) cout << n << "  ";
        }
        cout << endl;
    }

    return 0;
}