#include <iostream>
using namespace std;
int main()
{
    // Деклариране на матрица 3x3
    int A[3][3], N;

    // Въвеждане на елементи в матрица
    cout << "Please enter matrix [3x3] numbers:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }
    cout << "N=";
    cin >> N;

    // Отпечатване на елементите на матрица
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << A[x][y] * N << '\t'; // tab
        }
        cout << '\n'; // new line
    }

    return 0;
}
