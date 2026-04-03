#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 100; i <= 999; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum += i;
        }
    }

    cout << "Sumata e: " << sum << endl;

    cin.get();
    cin.get();
    return 0;
}
