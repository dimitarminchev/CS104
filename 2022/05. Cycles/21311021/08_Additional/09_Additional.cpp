#include <iostream>
using namespace std;
int main()
{
    int rows;

    cin >> rows;

    int temp = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                temp = 1;
            else
                temp = temp * (i - j + 1) / j; //formula from net

            cout << temp << " ";
        }
        cout << "\n";
    }

    return 0;
}