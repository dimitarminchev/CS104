#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int start, end;
    int count = 0;

    cout << "Vuvedi dve tricifreni chisla: ";
    cin >> x >> y;

    if (x < y)
    {
        start = x;
        end = y;
    }
    else
    {
        start = y;
        end = x;
    }

    for (int n = start; n <= end; n++)
    {
        int a = n / 100;
        int b = (n / 10) % 10;
        int c = n % 10;

        if (a < b && b < c)
        {
            count++;
        }
    }

    cout << count << endl;

    system("pause");
    return 0;
}
