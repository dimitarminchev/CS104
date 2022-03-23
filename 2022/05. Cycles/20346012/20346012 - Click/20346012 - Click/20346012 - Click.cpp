#include <iostream>
using namespace std;
int main()
{
    for (int k = 1; k <= 100; k++)
    {
        if (k % 6 == 0 || 
            k % 10 == 6 || 
            (k / 10) % 10 == 6) 
        {
            cout << "Click ";
        }
        else
        {
            cout << k << " ";
        }
    }
    return 0;
}
