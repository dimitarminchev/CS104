#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int start, end;
    int count = 0;

    cout << "Vuvedi nachalo i krai na intervala: ";
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
        int first = n / 100;   // purva cifra
        int last = n % 10;     // posledna cifra

        int formed = last * 10 + first;   // napr. 164 -> 41

        if (formed != 0 && n % formed == 0)
        {
            cout << n << "/" << formed << endl;
            count++;
        }
    }

    cout << "Broi = " << count << endl;

    system("pause");
    return 0;
}
