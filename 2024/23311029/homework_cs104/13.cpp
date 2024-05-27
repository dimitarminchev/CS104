#include <iostream>
using namespace std;

int main()
{
    int num, maxDigit = 0;
    cin >> num;
    for (int i = 0; i < 6; i++)
    {
        if (num % 10 > maxDigit)
        {
            maxDigit = num % 10;
        }
        num /= 10;
    }
    cout << maxDigit;
}
