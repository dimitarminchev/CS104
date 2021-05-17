#include <iostream>

using namespace std;

int main()
{
    int a[3][3], n;

    cout << "Please enter matrix elements (3x3): \n";

    for (int i = 0; i < 3; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            cin >> a[i][t];
        }
    }

    cout << "Please enter multiplication number: \n";

    cin >> n;

    cout << "Result: \n";

    for (int i = 0; i < 3; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            a[i][t] *= n;

            cout << a[i][t] << '\t';
        }

        cout << endl;
    }

    return 0;
}