// 5. Click
#include <iostream>
using namespace std;
int main()
{
    for (int k = 1; k <= 100; k++)
    {
        //conditions:
        if (k % 7 == 0 || 
            k % 10 == 7 || 
            (k / 10) % 10 == 7) 
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