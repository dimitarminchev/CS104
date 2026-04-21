#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    int a[10][10];
    int k;

    cout << "Vuvedi broi redove: ";
    cin >> rows;

    cout << "Vuvedi broi koloni: ";
    cin >> cols;

    cout << "Vuvedi elementite:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Vuvedi chislo za umnojenie: ";
    cin >> k;

    cout << "Nova matrica:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] * k << " ";
        }
        cout << endl;
    }

    cin.get();
    cin.get();
    return 0;
}
