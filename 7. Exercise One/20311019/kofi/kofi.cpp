#include <iostream>
using namespace std;
int main()
{
    int v;
    cout << "Enter the volume: ";
    cin >> v;
    int buk1 = 2; int buk2 = 3;
    int buks = buk1 + buk2;
    int filling = v / buks;
    int ostatyk;
    if (v % buks != 0)
    {
        ostatyk = v % buks;
        if (ostatyk == 4)
        {
            cout << filling << " 2 times bucket with 2 litres.";
            return 0;
        }
        else if (ostatyk == 3)
        {
            cout << filling << "1 time bucket with 3 litres.";
            return 0;
        }
        else if (ostatyk == 2)
        {
            cout << filling << "1 time bucket with 2 litres.";
            return 0;
        }
        else if (ostatyk == 1)
        {
            cout << filling << "there is 1 litre left to fill.";
            return 0;
        }
    }
    if (v % buks == 0)
    {
        cout << filling << " times both buckets.";
    }
}