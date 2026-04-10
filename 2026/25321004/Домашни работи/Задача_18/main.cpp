#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Vuvedi chislo (10..99): ";
    cin >> n;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }

        cout << n << " ";
    }

    cout << endl;

    system("pause");
    return 0;
}
