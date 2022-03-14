
// Урпажнение 7 - трикратни на 3 и 5
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 100; i < 999; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }

    cout << endl << sum << endl;
    return 0;
}