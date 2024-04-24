//15. Намерете сумата на всички трицифрени кратни на 3 и 5
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum = 0;

    for (int k = 100; k <= 999; k++)
    {
        if (k % 15 == 0)
        {
            sum = sum + k;
        }
    }
    cout << sum << endl;

    return 0;
}
