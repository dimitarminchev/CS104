#include <iostream>
using namespace std;
int main()
{
    int sum = 0;

    for (int i = 100; i <= 999; i++)
    {
        if (sum % 5 == 0 && sum % 5 == 0)
        {
            sum += i;
        }
    }

    cout << "sum = " << sum << endl;

    return 0;
}