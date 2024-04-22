#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (size_t i = 1000; i <= 9999; i++)
    {
        int i4 = (i / 1000) % 10;
        int i3 = (i / 100) % 10;
        int i2 = (i / 10) % 10;
        int i1 = (i / 1) % 10;

        if ((i1 + i2) == (i3 + i4))
        {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << endl << "The sum of the numbers is: " << sum << endl;
    return 0;
}