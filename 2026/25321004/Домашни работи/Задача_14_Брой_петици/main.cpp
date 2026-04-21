#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int start, end;
    int count5 = 0;

    cout << "Vuvedi dve chisla: ";
    cin >> a >> b;

    if (a < b)
    {
        start = a;
        end = b;
    }
    else
    {
        start = b;
        end = a;
    }

    for (int n = start; n <= end; n++)
    {
        int x = n;

        while (x > 0)
        {
            if (x % 10 == 5)
            {
                count5++;
            }
            x /= 10;
        }
    }

    cout << "Broiat na peticite e: " << count5 << endl;

    system("pause");
    return 0;
}
